#include "EKF_node_main.cpp"

int main(int argc, char **argv)
{
  ros::init(argc, argv,"EKF");
  ros::NodeHandle nh, nh_private("~");
  EKF::EKFNode ekf_node(nh, nh_private);
  ros::spin();
  return 0;
}
