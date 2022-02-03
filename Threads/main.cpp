#include <iostream>
#include <thread>

using namespace std;

static bool s_Finished = false;


void DoWork() {
    cout << "Started on thread-id: " << this_thread::get_id() << endl;

    while (!s_Finished) {
        std::cout << "Doing work..." << std::endl;
    }
}

int main() {
    thread worker(DoWork);
    cin.get();
    s_Finished = true;

    worker.join();
    cout << "Finished on thread-id: " << this_thread::get_id() << endl; 

    // Exit program when enter is pressed the second time
    std::cin.get();
}