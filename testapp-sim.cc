#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/applications-module.h"
#include "ns3/object-factory.h"
#include "ns3/testapp.h"

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("TestExample");

int
main (int argc, char *argv[])
{
  NodeContainer nodes;
  nodes.Create (1);

  Ptr<TestApplication> testApp;
  ObjectFactory factory;
  factory.SetTypeId ("ns3::TestApplication");
  
  testApp = factory.Create<TestApplication> ();
  Ptr<Node> node = nodes.Get (0);
  node->AddApplication (testApp);

  ApplicationContainer apps;
  apps.Add (testApp);
  apps.Start (Seconds (1.0));
  apps.Stop (Seconds (2.0));

  Simulator::Run ();
  Simulator::Destroy ();
  return 0;
}
