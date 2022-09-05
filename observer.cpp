#include "observer.h"

void Printer::update(string message) {
	this->message = message;
	printMessage();
}

void Printer::printMessage() {
	std::cout << message << std::endl;
}

void Printer::removeMeFromTheList(){
	event.detachObserver(this);
}