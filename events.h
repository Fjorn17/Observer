#ifndef EVENTS_H
#define EVENTS_H

#include <list>
#include <string>

#include "observer.h"

typedef std::string string;


//Subject
class Event {
public:
	virtual void attachObserver(Observer *observer) = 0;
	virtual void detachObserver(Observer *observer) = 0;
	virtual void notifyObserver() = 0;

protected:
	std::list<Observer*> observers;
	string message;
};

class OnMouseDown : Event {
public:
	OnMouseDown();

	void attachObserver(Observer* observer) override;
	void detachObserver(Observer* observer) override;
	void notifyObserver() override;

};

#endif // !OBSERVER_H