#ifndef OBSERVER_H
#define OBSERVER_H

#include<iostream>
#include <string>
#include "events.h"

typedef std::string string;

class Observer {
public:
	virtual void update(string message) = 0;
	virtual void removeMeFromTheList() = 0;
protected:
	string _message;
	Event _event;
};

class Printer : Observer {
public:
	Printer(string myEvent) :_event(myEvent){
		this->_event.attachObserver(this);
	};

	void update(string message) override;
	void removeMeFromTheList() override;
private:
	void printMessage();
};

#endif // !OBSERVER_H
