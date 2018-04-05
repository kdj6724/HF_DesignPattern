// subject.h
// 2018-04-04
// kdj6724@naver.com
#ifndef CH2_SUBJECT_H_
#define CH2_SUBJECT_H_
#include <memory>
#include "observer.h"
class Observer;
class Subject {
public:
  virtual void RegisterObserver(Observer* o) = 0;
  virtual void RemoveObserver(Observer* o) = 0;
  virtual void NotifyObserver() = 0;
};
#endif
