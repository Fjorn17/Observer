#ifndef EVENTS_H
#define EVENTS_H

#include <vector>
#include <string>

#include "observer.h"

typedef std::string string;

//Subject
class Event {
private:
	vector<Observer> observers;
public:
	virtual void attach(Observer *observer) = 0;
	virtual void detach(Observer *observer) = 0;
	virtual void notify() = 0;
protected:

};

class OnMouseDown : Event {
public:
	void attach(Observer* observer) override;
	void detach(Observer* observer) override;
	void notify() override;


};

class OnClick : Event {

};

class OnMouseUp : Event {

};

#endif // !OBSERVER_H