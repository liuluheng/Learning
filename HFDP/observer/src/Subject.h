#ifndef _SUBJECT_H_
#define _SUBJECT_H_

class Observer;

class Subject 
{
public:
    Subject(){}
    virtual ~Subject(){}

	virtual void registerObserver(Observer* obs){}
	virtual void removeObserver(Observer* obs){}
	virtual void notifyObservers(){}
};

#endif
