#ifndef DND_SPECIALIZATION_H
#define DND_SPECIALIZATION_H
#include <iostream>

class Specialization{
private:
    // The name of the specialization
    std::string _name;

    //base functions which
    //all specs have in common
    virtual void attack();

    virtual void defend();
public:
    // Spells for fire mages
    virtual void Fire_ball() { }
    virtual void Fire_nova() { }
    virtual void Pyro_blast() { }

    //default constructor
    Specialization();

    void do_attack();

    void do_defend();

    //explicit - keyword used for single
    // Argument - the name of the specialization
    explicit Specialization (const std::string&);

    // get-ers
    std::string get_name () const;
};


//[DERIVED CLASSES]:

// Wizzard

class Wizzard : public Specialization{
public:
    //default constructor
    Wizzard();

    //virtual overwritten functions
    virtual void Fire_ball() { }

    virtual void Fire_novs() { }

    virtual void Pyro_blast() { }

    void cast_poof();

    void attack() override;

    void defend() override;
};

// Wizzard - derived classes

// Fire wizzard
class Fire_wizzard : public Wizzard{
public:
    virtual void Fire_ball () final;
    virtual void Fire_nova() final;
    virtual void Pyro_blast() final;
};

#endif //DND_SPECIALIZATION_H