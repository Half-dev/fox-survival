#include <SFML/Graphics.hpp>


int main()
{

	sf::ContextSettings settings;
	settings.antialiasingLevel = 0;
	sf::RenderWindow window(sf::VideoMode(500, 600), "SFMLworks");

	sf::CircleShape  rectangle(50.f);
	rectangle.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();


		}

		window.clear();
		window.draw(rectangle);
		window.display();
	}

	return 0;
}