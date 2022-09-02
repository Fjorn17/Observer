#ifndef OBSERVER_H
#define OBSERVER_H

#include<iostream>
#include <string>

typedef std::string string;

class Observer {
public:
	virtual ~Observer() {};
	virtual void update(string message) = 0;
};

class Printer : Observer {
private:
	string message;
public:
	Printer(string message) :message(message){};
	void update(string message) override;
};

#endif // !OBSERVER_H
