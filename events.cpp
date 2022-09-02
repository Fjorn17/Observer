#include "events.h"

OnMouseDown::OnMouseDown(string message) {
	this->message = message;
}

void OnMouseDown::attachObserver(Observer* observer) {
	observers.push_back(observer);
}

void OnMouseDown::detachObserver(Observer* observer) {
	observers.remove(observer);
}
void OnMouseDown::notifyObserver() {
	for (auto observer : observers) {
		observer->update(message);
	}
}