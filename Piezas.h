#include <Lego.h>

class Piso : public Lego {
public:
    void assemble(const std::string& description) override {
        std::cout << "Construyendo el piso usando la pieza " + description << std::endl;
    }

    const std::string& getDescription() const override {
        static const std::string description = "piso";
        return description;
    }
};

class Pared : public Lego {
public:
    Pared(Lego* dependency) : dependency_(dependency) {}

    void assemble(const std::string& description) override {
        std::cout << "Construyendo una pared usando la pieza " + description << std::endl;
    }

    const std::string& getDescription() const override {
        static const std::string description = "pared";
        return description;
    }

    Lego* getDependency() const {
        return dependency_;
    }

private:
    Lego* dependency_;
};


class Puerta : public Lego {
public:
    Puerta(Lego* dependency) : dependency_(dependency) {}

    void assemble(const std::string& description) override {
        std::cout << "Agregando una puerta usando la pieza " + description << std::endl;
    }

    const std::string& getDescription() const override {
        static const std::string description = "puerta";
        return description;
    }

    Lego* getDependency() const {
        return dependency_;
    }

private:
    Lego* dependency_;
};

class Techo : public Lego {
public:
    Techo(Lego* dependency) : dependency_(dependency) {}

    void assemble(const std::string& description) override {
        std::cout << "Colocando el techo usando la pieza " + description << std::endl;
    }

    const std::string& getDescription() const override {
        static const std::string description = "techo";
        return description;
    }

    Lego* getDependency() const {
        return dependency_;
    }

private:
    Lego* dependency_;
};