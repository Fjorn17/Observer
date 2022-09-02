#ifndef OBSERVER_H
#define OBSERVER_H

#include <vector>

#include "observer.h"

typedef Observer:Observer Observer;

class Event {
private:
	vector<Observer> observers;
public:
	virtual void attach(Observer observer) = 0;
	virtual void detach(Observer observer) = 0;
	virtual void notify() = 0;
};

#endif // !OBSERVER_H