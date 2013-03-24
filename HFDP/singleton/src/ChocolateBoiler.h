#ifndef _CHOCOLATEBOILER_H_
#define _CHOCOLATEBOILER_H_

class ChocolateBoiler 
{
public:
    ~ChocolateBoiler();

    static ChocolateBoiler* getInstance();
    static void delInstance();

    void fill();
    void drain();
    void boil();
    bool isEmpty() const;
    bool isBoiled() const;

private:
    ChocolateBoiler();
    ChocolateBoiler& operator=(ChocolateBoiler&);

private:
    bool                        d_empty;
    bool                        d_boiled;
    static ChocolateBoiler*     d_instance;
};

#endif
