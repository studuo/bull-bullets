#ifndef DEF_OBJECT
#define DEF_OBJECT
#include <string>
using namespace std;

class Object {
    private:
    string name;
    int stack;
    int maxStack;

    public:
    void checkStack(Object &object) {
        // Check if object can contain new object
    }
};

#endif
