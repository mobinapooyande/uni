#include <iostream>
#include <thread>
#include <array>
using namespace std;
void func(int i) {
  cout <<"hello"<< i << endl;}
int main() {
  array<thread,6> threads;
  for (int i = 0; i < 6; ++i) {
    threads[i]=thread(func, i + 1);}
  for (auto& th:threads) {
    th.join();}
return 0;}
