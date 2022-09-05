#include <iostream>
#include <events.h>
#include <observer.h>

 
int main() {
	OnMouseDown onMouseDown = new OnMouseDown("El ratón ha sido presionado ");
	Printer printer = new Printer(onMouseDown);
	Printer printer2 = new Printer(onMouseDown);

	onMouseDown.notifyObservers();

	printer2.removeMeFromTheList();
	onMouseDown.notifyObservers();

	delete onMouseDown;
	delete printer;
	delete printer2;
}