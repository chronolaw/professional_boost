// Copyright (c) 2016
// Author: Chrono Law
#include <std.hpp>
//using namespace std;
using std::cout;
using std::endl;

#include "tcp_server.hpp"

int main()
{
    cout << "server start" << endl;

    tcp_server svr(6677);
    svr.run();
}

