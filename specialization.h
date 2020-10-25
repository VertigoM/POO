#ifndef DND_SPECIALIZATION_H
#define DND_SPECIALIZATION_H

class Specialization{
private:
    std::string _name;
    virtual void atack();
    virtual void defend();
public:
    Specialization();
    void do_atack();
    void do_defend();
    //explicit - keyword used for single
    //argument constructors
    explicit Specialization (const std::string&);
    std::string get_name () const;
};

Specialization::Specialization() = default;

Specialization::Specialization (const std::string& name):
    _name(name){ }

std::string Specialization::get_name () const{
    return this -> _name;
}

void Specialization::atack() {
    std::cout << "Smacc." << std::endl;
}

void Specialization::defend() {
    std::cout << "Protecc" << std::endl;
}

void Specialization::do_atack() { atack(); }

void Specialization::do_defend() { defend(); }

class Wizzard : public Specialization{
public:
    Wizzard();
    void atack() override;
    void defend() override;
};

void Wizzard::atack() {
    std::cout << "Smacc with the cane." << std::endl;
}

void Wizzard::defend() {
    std::cout << "Protecc with the mantle" << std::endl;
}

/*class Fire_wizzard : public Wizzard{
public:

};
*/

Wizzard::Wizzard():
    Specialization("Wizzard") { }

/*void Wizzard::cast_poof() {
    std::cout << "Makes something go POOF";
}

void Fire_wizzard::Fire_ball() {
    std::cout << "Fireball! A small ball of flames hurls through the air.";
}

void Fire_wizzard::Fire_nova() {
    std::cout << "Fire nova! A sea of flames starts engulfing everything around the pyromaniac!";
}

void Fire_wizzard::Pyro_blast() {
    std::cout << "Pyroblast! A humongous fire sphere starts forming above the fire archmage. This is the end!";
}
*/
#endif //DND_SPECIALIZATION_H
