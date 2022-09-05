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
	string message;
	Event event;
};

class Printer : Observer {
public:
	Printer(string message) :message(message){};
	void update(string message) override;
	void removeMeFromTheList() override;
private:
	void printMessage();
};

#endif // !OBSERVER_H
