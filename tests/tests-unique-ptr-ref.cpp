#include <memory>
#include <iostream>

class ABC {
    public:
        std::unique_ptr<int> _ptr;
        std::unique_ptr<int> &getPtr() { return _ptr; }
        void setPtr(std::unique_ptr<int> ptr) { _ptr = std::move(ptr); }
};

int main(void)
{
    ABC obj;
    obj.setPtr(std::make_unique<int>(10));
    { 
        std::unique_ptr<int> &ptr = obj.getPtr(); // if remove ref, it give compilation error
        std::cout << *ptr << std::endl;
    }
    std::cout << *obj.getPtr() << std::endl;
    return 0;
}
