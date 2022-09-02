#ifndef OBSERVER_H
#define OBSERVER_H

#include<iostream>
#include <string>

typedef std::string string;

class Observer {
public:
	virtual ~Observer() {};
	virtual void update() = 0;
};

#endif // !OBSERVER_H
