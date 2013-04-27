#ifndef TEST_APPLICATION_H
#define TEST_APPLICATION_H

#include "ns3/application.h"

namespace ns3 {

class TestApplication : public Application
{

public:
  static TypeId GetTypeId (void);

  TestApplication ();
  virtual ~TestApplication ();

private:

  virtual void StartApplication (void);
  virtual void StopApplication (void);

};

}

#endif //TEST_APPLICATION_H
