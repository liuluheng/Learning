#ifndef _SUBJECT_H_
#define _SUBJECT_H_

class Observer;

class Subject 
{
public:
    Subject();
    virtual ~Subject();

	virtual void registerObserver(Observer* obs) = 0;
	virtual void removeObserver(Observer* obs) = 0;
	virtual void notifyObservers() = 0;
};

#endif
