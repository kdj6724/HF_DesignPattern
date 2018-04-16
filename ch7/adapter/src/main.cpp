// main.cpp
// 2018-04-03
// kdj6724@naver.com
#include "child_duck.h"
int main() {
  std::unique_ptr<Duck> mallard(new MallardDuck);
  std::unique_ptr<WildTurkey> turkey(new WildTurkey);
  std::unique_ptr<Duck> turkeyAdapter(new TurkeyAdapter(turkey.get()));
  turkeyAdapter->PerformQuack();

  mallard->PerformQuack();
  mallard->PerformFly();
  mallard->SetFlyBehavior(turkeyAdapter.get());
  mallard->PerformFly();

  return 0;
}
