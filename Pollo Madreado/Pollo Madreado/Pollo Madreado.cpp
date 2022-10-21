#include <SFML/Graphics.hpp>
#include <windows.h>
#pragma comment (lib, "User32.lib")

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "Pollo Madreado");
    sf::CircleShape cabezaMadreada(100.f);
    sf::CircleShape ojoMadreadoIzq(20.f);
    sf::CircleShape ojoMadreadoDer(20.f);
    sf::CircleShape pupilaMadreadaIzq(10.f);
    sf::CircleShape pupilaMadreadaDer(10.f);
    sf::CircleShape cuerpoMadreado(150.f);
    sf::RectangleShape pataMadreadaIzq(sf::Vector2f(50,100));

    // Creación de los triángulos
    sf::VertexArray picoMadreadoInferior(sf::Triangles, 3);     //Pico Inferior
    picoMadreadoInferior[0].position = sf::Vector2f(50, 110);
    picoMadreadoInferior[0].color = sf::Color(255, 133, 0);
    picoMadreadoInferior[1].position = sf::Vector2f(100, 135);
    picoMadreadoInferior[1].color = sf::Color(255, 133, 0);
    picoMadreadoInferior[2].position = sf::Vector2f(120, 120);
    picoMadreadoInferior[2].color = sf::Color(255, 133, 0);
    sf::VertexArray picoMadreadoSuperior(sf::Triangles, 3);     //Pico Superior
    picoMadreadoSuperior[0].position = sf::Vector2f(50, 110);
    picoMadreadoSuperior[0].color = sf::Color(255, 133, 0, 100);
    picoMadreadoSuperior[1].position = sf::Vector2f(100, 100);
    picoMadreadoSuperior[1].color = sf::Color(255, 133, 0, 100);
    picoMadreadoSuperior[2].position = sf::Vector2f(120, 120);
    picoMadreadoSuperior[2].color = sf::Color(255, 133, 0, 100);

    //Características de cada una de las figuras (color, posición, rotación, etc)
    cabezaMadreada.setFillColor(sf::Color::Yellow);
    cabezaMadreada.setOutlineThickness(2);
    cabezaMadreada.setOutlineColor(sf::Color::Black);           //Cabeza
    cuerpoMadreado.setFillColor(sf::Color::Yellow);
    cuerpoMadreado.setPosition(sf::Vector2f{ 0,100 });          //Cuerpo
    ojoMadreadoIzq.setFillColor(sf::Color::White);
    pataMadreadaIzq.setFillColor(sf::Color(225, 133, 0));
    ojoMadreadoIzq.setPosition(sf::Vector2f{ 40, 40 });         //Ojo Izquierdo
    ojoMadreadoDer.setFillColor(sf::Color::White);
    ojoMadreadoDer.setPosition(sf::Vector2f{ 120, 40 });        //Ojo Derecho
    pupilaMadreadaIzq.setFillColor(sf::Color::Black);
    pupilaMadreadaIzq.setPosition(sf::Vector2f{ 50, 50 });      //Pupila Izquierda
    pupilaMadreadaDer.setFillColor(sf::Color::Black);
    pupilaMadreadaDer.setPosition(sf::Vector2f{ 130, 50 });     //Pupila Derecha

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            window.close();
        }

        window.clear();/*
        window.draw(cuerpoMadreado);*/
        window.draw(cabezaMadreada);
        window.draw(ojoMadreadoIzq);
        window.draw(ojoMadreadoDer);
        window.draw(pupilaMadreadaIzq);
        window.draw(pupilaMadreadaDer);/*
        window.draw(pataMadreadaIzq);*/
        window.draw(picoMadreadoInferior);
        window.draw(picoMadreadoSuperior);
        window.display();
    }

    return 0;
}
