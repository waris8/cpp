#include <iostream>
#include <thread>

void function_1(){
    std::cout << "hello world" << std::endl;
}

int main(){
    std::thread t1(function_1);  //t1 starts running
    // t1.join();   //main thread waits for t1 to finish
    t1.detach();  //t1 is now free - daemon process


    if(t1.joinable()){  //you can detach or join the child thread only once
        t1.join();
    }
    return 0;
}