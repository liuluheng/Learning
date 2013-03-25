#ifndef _HOTTUB_H_
#define _HOTTUB_H_

class Hottub 
{
public:
    Hottub();
    virtual ~Hottub();

    void on();
    void off();
    void bubblesOn();
	void bubblesOff();
	void jetsOn(); 
	void jetsOff();
	void setTemperature(int temperature);
	void heat();
    void cool();

private:
    bool            d_on;
    int             d_temperature;
};

#endif
