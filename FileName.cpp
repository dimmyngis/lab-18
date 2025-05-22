#include <SFML/Graphics.hpp>
using namespace sf;     

int main() {
    RenderWindow window(VideoMode(600, 400), "Russian Flag (Drawn)");

    // Размеры полос
    float bandHeight = 400.0f / 3.0f;

    // Создание прямоугольников для полос
    RectangleShape whiteBand(Vector2f(600.0f, bandHeight));
    whiteBand.setFillColor(Color::White);
    whiteBand.setPosition(0, 0);

    CircleShape redCircle(50.0f, 50.0f);
    redCircle.setFillColor(Color::Blue);
    redCircle.setPosition(250, bandHeight);

    ConvexShape redTriangle;
    redTriangle.setPointCount(3);
    redTriangle.setFillColor(Color::Red);
    redTriangle.setPoint(0, Vector2f(0,0));
    redTriangle.setPoint(2, Vector2f(75, 150));
    redTriangle.setPoint(1, Vector2f(150, 0));
    redTriangle.setPosition(225.f, bandHeight * 2-30);

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        window.clear();

        // Отрисовка полос
        window.draw(whiteBand);
        window.draw(redCircle);
        window.draw(redTriangle);

        window.display();
    }

    return 0;
}





