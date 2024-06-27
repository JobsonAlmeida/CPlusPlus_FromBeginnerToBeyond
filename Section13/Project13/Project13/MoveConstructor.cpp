//// Section 13
//// Move Constructor 
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Move {
//private:
//    int* data;
//public:
//    void set_data_value(int d) { *data = d; }
//    int get_data_value() { return *data; }
//    // Constructor
//    Move(int d);
//    // Copy Constructor
//    Move(const Move& source);
//    // Move Constructor
//    Move(Move&& source) noexcept;
//    // Destructor
//    ~Move();
//};
//
//Move::Move(int d)
//{
//    data = new int;
//    *data = d;
//    cout << "Constructor for: " << d << endl;
//}
//
//// Copy ctor
//Move::Move(const Move& source)
//    : Move{ *source.data }
//{
//    cout << "Copy constructor  - deep copy for: " << *data << endl;
//}
//
////Move ctor
//Move::Move(Move&& source) noexcept
//    : data{ source.data }
//{
//    source.data = nullptr;
//    cout << "Move constructor - moving resource: " << *data << endl;
//}
//
//Move::~Move()
//{
//    if (data != nullptr)
//    {
//        cout << "Destructor freeing data for: " << *data << endl;
//    }
//    else
//    {
//        cout << "Destructor freeing data for nullptr" << endl;
//    }
//    delete data;
//}
//
//int main()
//{
//    {
//
//
//        vector<Move> vec;
//
//        Move abc = Move{ 10 };
//
//        std::cout << "---first push_back---\n";
//        vec.push_back(abc);
//        std::cout << "-------------------\n";
//
//        std::cout << "---second push_back---\n";
//        vec.push_back(Move{ 20 });
//        std::cout << "-------------------\n";
//
//        std::cout << "---third push_back---\n";
//        vec.push_back(Move{ 30 });
//        std::cout << "-------------------\n";
//
//        std::cout << "---fourth push_back---\n";
//        vec.push_back(Move{ 40 });
//        std::cout << "-------------------\n";
//
//        std::cout << "---fifth push_back---\n";
//        vec.push_back(Move{ 50 });
//        std::cout << "-------------------\n";
//
//        std::cout << "---sixth push_back---\n";
//        vec.push_back(Move{ 60 });
//        std::cout << "-------------------\n";
//
//        std::cout << "---seventh push_back---\n";
//        vec.push_back(Move{ 70 });
//        std::cout << "-------------------\n";
//
//        std::cout << "---eighth push_back---\n";
//        vec.push_back(Move{ 80 });
//        std::cout << "-------------------\n";
//
//        std::cout << "---nineth push_back---\n";
//        vec.push_back(Move{ 90 });
//        std::cout << "-------------------\n";
//
//        std::cout << "---hundredth push_back---\n";
//        vec.push_back(Move{ 100 });
//        std::cout << "-------------------\n";
//
//        std::cout << "---hundredth first push_back---\n";
//        vec.push_back(Move{ 110 });
//        std::cout << "-------------------\n";
//
//    }
//
//    return 0;
//}
//
