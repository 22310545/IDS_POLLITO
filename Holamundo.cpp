#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000),"SFML works!");
    sf::CircleShape Cabeza(180.f);
    sf::CircleShape ojodere(50.f);
    sf::CircleShape mamaditaderechabrillosa(15.f);
    sf::CircleShape irisdere(40.f);
    sf::CircleShape Triangle(50, 3);
    sf::CircleShape cuerpo(240.f);
    sf::RectangleShape pierna({ 30,90 });
    sf::RectangleShape pie({ 20,60 });
    sf::CircleShape  moñouno(30, 3);
    sf::CircleShape moñodos(30, 3);
    sf::CircleShape moñotres(20.f);
    sf::RectangleShape liston({30,90 });
    sf::CircleShape ala(20.f);
    sf::RectangleShape bandana({300,50});
    sf::CircleShape bandanados(30.f);
    sf::RectangleShape bandanatres({ 100,30 });

    //Colores y Posiciones.

        Cabeza.setFillColor(sf::Color::Yellow);
        Cabeza.setPosition(sf::Vector2f{ 250,80 });
        ojodere.setFillColor(sf::Color::White);
        ojodere.setPosition(sf::Vector2f{500,200});
        mamaditaderechabrillosa.setFillColor(sf::Color::White);
        mamaditaderechabrillosa.setPosition(sf::Vector2f{550,220});
        irisdere.setFillColor(sf::Color::Black);
        irisdere.setPosition(sf::Vector2f{ 510,210});
        Triangle.setFillColor(sf::Color::Red);
        Triangle.rotate(110.f);
        Triangle.setPosition(sf::Vector2f{ 680,300 });
        cuerpo.setFillColor(sf::Color::Yellow);
        cuerpo.setPosition(sf::Vector2f{60,300});
        pierna.setFillColor(sf::Color::Red);
        pierna.setPosition(sf::Vector2f{ 300,778 });
        pie.setFillColor(sf::Color::Red);
        pie.setPosition(sf::Vector2f{ 390,848 });
        pie.rotate(90.f);
        moñouno.setFillColor(sf::Color::White);
        moñouno.setPosition(sf::Vector2f{ 460,385 });
        moñouno.rotate(90.f);
        moñodos.setFillColor(sf::Color::White);
        moñodos.setPosition(sf::Vector2f{ 470,445 });
        moñodos.rotate(-90.f);
        moñotres.setFillColor(sf::Color::White);
        moñotres.setPosition(sf::Vector2f{ 445,400 });
        bandana.setFillColor(sf::Color::Red);
        bandana.setPosition(sf::Vector2f{ 580,170 });
        bandana.rotate(180);
        bandanados.setFillColor(sf::Color::Red);
        bandanados.setPosition(sf::Vector2f{ 250,112 });
        bandanatres.setFillColor(sf::Color::Red);
        bandanatres.setPosition(sf::Vector2f{280,150});
        bandanatres.rotate(130);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(Cabeza);
        window.draw(ojodere);
        window.draw(mamaditaderechabrillosa);
        window.draw(irisdere);
        window.draw(Triangle);
        window.draw(cuerpo);
        window.draw(pierna);
        window.draw(pie);
        window.draw(moñouno);
        window.draw(moñodos);
        window.draw(moñotres);
        window.draw(bandana);
        window.draw(bandanados);
        window.draw(bandanatres);
        window.display();
    }

    return 0;
}