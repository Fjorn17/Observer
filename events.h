#ifndef OBSERVER_H
#define OBSERVER_H

#include <vector>

#include "observer.h"

typedef Observer:Observer Observer;

class Event {
private:
	vector<Observer> observers;
public:
	void attach(Observer observer);
	void detach(Observer observer);
	void notify();
};

#endif // !OBSERVER_H