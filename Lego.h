#include <iostream>
#include <string>

class Lego {
public:
    virtual void assemble(const std::string& description) = 0;
    virtual const std::string& getDescription() const = 0;
};