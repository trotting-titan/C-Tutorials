#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <vector>

class Bullet {
public:
    sf::CircleShape shape;
    sf::Vector2f velocity;

    Bullet(float radius = 2.f) : velocity(0.f, -1.f) {
        shape.setRadius(radius);
        shape.setFillColor(sf::Color::Red);
    }
};

class Player {
public:
    sf::RectangleShape shape;
    sf::Vector2f velocity;
    float movementSpeed;

    Player() : movementSpeed(5.f) {
        shape.setSize(sf::Vector2f(50.f, 50.f));
        shape.setFillColor(sf::Color::Green);
    }
};

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Simple FPS Game");
    window.setFramerateLimit(60);

    Player player;
    player.shape.setPosition(400.f, 300.f);

    std::vector<Bullet> bullets;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            player.shape.move(0.f, -player.movementSpeed);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            player.shape.move(0.f, player.movementSpeed);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            player.shape.move(-player.movementSpeed, 0.f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            player.shape.move(player.movementSpeed, 0.f);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
            Bullet bullet;
            bullet.shape.setPosition(player.shape.getPosition().x + player.shape.getSize().x / 2.f - bullet.shape.getRadius(),
                                     player.shape.getPosition().y - bullet.shape.getRadius());
            bullets.push_back(bullet);
        }

        for (size_t i = 0; i < bullets.size(); ++i) {
            bullets[i].shape.move(bullets[i].velocity);

            if (bullets[i].shape.getPosition().y < 0) {
                bullets.erase(bullets.begin() + i);
            }
        }

        window.clear();

        window.draw(player.shape);
        for (size_t i = 0; i < bullets.size(); ++i) {
            window.draw(bullets[i].shape);
        }

        window.display();
    }

    return 0;
}


