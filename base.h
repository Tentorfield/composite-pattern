#indef BASE_H
#define BASE_H

class Base {
    public:
        /* Constructors */
        Base() { }
        virtual ~Base() {}
        
        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
        virtual string stringify() = 0;
};

#endif
