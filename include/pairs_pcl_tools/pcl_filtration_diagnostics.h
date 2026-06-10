#pragma once

#include <memory>

#include <rclcpp/rclcpp.hpp>
#include <pairs_modules_msgs/msg/pcl_tools_diagnostics.hpp>

namespace pairs_pcl_tools
{

  class PclFiltrationDiagnostics
  {
  public:
    PclFiltrationDiagnostics(const rclcpp::Node::SharedPtr& node);
    void publish(const pairs_modules_msgs::msg::PclToolsDiagnostics& msg);

  private:
    const rclcpp::Node::SharedPtr m_nh_;
    rclcpp::Publisher<pairs_modules_msgs::msg::PclToolsDiagnostics>::SharedPtr m_pub_diagnostics_;
  };


}  // namespace pairs_pcl_tools