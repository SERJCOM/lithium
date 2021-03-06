#include "window.h"

Window::Window(int sizeX, int sizeY) {
	window.create(sf::VideoMode(sizeX, sizeY), "OpenGL", sf::Style::Default, sf::ContextSettings(32));
	window.setVerticalSyncEnabled(true);
	window.setActive(true);
}

Window::Window() {
	window.create(sf::VideoMode(720, 1280), "OpenGL", sf::Style::Default, sf::ContextSettings(32));
	window.setVerticalSyncEnabled(true);
	window.setActive(true);
}

void Window::Display() {
	window.display();
}

float Window::GetWindowHeight() {
	return window.getSize().y;
}

float Window::GetWindowWidth() {
	return window.getSize().x;
}