#include "ns3/log.h"
#include "testapp.h"

NS_LOG_COMPONENT_DEFINE ("TestApplication");

namespace ns3 {

NS_OBJECT_ENSURE_REGISTERED (TestApplication);

TypeId
TestApplication::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::TestApplication")
    .SetParent<Application> ()
    .AddConstructor<TestApplication> ();
  return tid;
}

TestApplication::TestApplication ()
{
  NS_LOG_FUNCTION (this);
}

TestApplication::~TestApplication ()
{
  NS_LOG_FUNCTION (this);
}

void
TestApplication::StartApplication (void)
{
  NS_LOG_FUNCTION (this);
  NS_LOG_UNCOND ("Hello World!");
}

void
TestApplication::StopApplication (void)
{
  NS_LOG_FUNCTION (this);
  NS_LOG_UNCOND ("Goodbye World!");
}

} // namespace ns3
