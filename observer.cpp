#include "observer.h"

void Printer::update(string message) {
	this->_message = message;
	printMessage();
}

void Printer::printMessage() {
	std::cout << _message << std::endl;
}

void Printer::removeMeFromTheList(){
	event.detachObserver(this);
}