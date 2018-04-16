// beverage.h
// 2018-04-17
// kdj6724@naver.com
class CaffeineBeverage {
public:
  void PrepareRecipe();
  virtual void Brew() = 0;
  virtual void AddCondiment() = 0;
  virtual void BoilWater();
  virtual void PourInCup();
};

class Coffee : public CaffeineBeverage {
public:
  virtual void Brew();
  virtual void AddCondiment();
};

class Tea : public CaffeineBeverage {
public:
  virtual void Brew();
  virtual void AddCondiment();
};
