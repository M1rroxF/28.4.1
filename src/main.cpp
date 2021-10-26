#include <iostream>
#include <vector> // vector<>
#include <fstream> // ofstream, ifstream
#include <string> // stoi()
#include <cstdlib> // rand()
#include <map> // map<>
#include <ctime> // time_t, tm*
#include <iomanip> // get_time(), put_time(), get_time()
#include <thread>
#include <mutex>

using namespace std;

vector<int> places(6, -1);
mutex all_func;

void go(int speed, int num)
{

    this_thread::sleep_for(chrono::seconds(100 / speed));

    all_func.lock();
    cout << "the " << num << " swimmer swam 100 meters" << endl;
    all_func.unlock();

    for (int i = 0; i < 6; i++) {
        if (places[i] == -1) {

            all_func.lock();
            places[i] = num;
            all_func.unlock();
            return;
        }
    }
}

int main()
{
    vector<int> speed(6);
    for (int i = 1; i < 7; i++)
    {
        cout << "Enter speed " << i << " swimmer: ";
        cin >> speed[i-1];
    }

    thread swim_1 (go, speed[0], 1);
    thread swim_2 (go, speed[1], 2);
    thread swim_3 (go, speed[2], 3);
    thread swim_4 (go, speed[3], 4);
    thread swim_5 (go, speed[4], 5);
    thread swim_6 (go, speed[5], 6);

    swim_1.join();
    swim_2.join();
    swim_3.join();
    swim_4.join();
    swim_5.join();
    swim_6.join();

    cout << endl;
    for (int i = 1; i < 7; i++)
    {
        cout << i << " place: " << places[i-1] << endl;
    }
}