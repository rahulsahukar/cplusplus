  #include <iostream>
    using namespace std;
    void empty() throw() 
    {
        cout << "In empty()";
    }
    void with_type() throw(int) 
    {
        cout << "Will throw an int";
        throw(1);
    }
    int main() 
    {
        try 
        {
            empty();
            with_type();
        }
        catch (int) 
        {
            cout << "Caught an int";
        }
    }
