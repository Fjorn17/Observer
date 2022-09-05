#include "events.h"

OnMouseDown::OnMouseDown(string message) {
	this->_message = message;
}

void OnMouseDown::attachObserver(Observer* observer) {
	_observers.push_back(observer);
}

void OnMouseDown::detachObserver(Observer* observer) {
	_observers.remove(observer);
}
void OnMouseDown::notifyObservers() {
	for (auto observer : _observers) {
		observer->update(_message);
	}
}