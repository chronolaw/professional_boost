// Copyright (c) 2016
// Author: Chrono Law
#include <std.hpp>
using namespace std;

#include <boost/iterator/reverse_iterator.hpp>
//using namespace boost;

///////////////////////////////////////

void case1()
{
    char s[] = "hello iterator.";

    // after c++14 there is std::make_reverse_iterator

    std::copy(
            boost::make_reverse_iterator(s +
                char_traits<char>::length(s)),
            boost::make_reverse_iterator(s),
            ostream_iterator<char>(cout));

}

///////////////////////////////////////

int main()
{
    std::cout << "hello reverse_iterator" << std::endl;

    case1();
}


