#pragma once 
#include "yavog/vulkan/Header.hpp"
#include "yavog/vulkan/setup/Queue.hpp"
#include "yavog/vulkan/window/Window.hpp"

class GraphicsQueue:public Queue
{
    vk::raii::SurfaceKHR* surface;
    using Queue::create;
public:
    void create(Window& window,DeviceSettings& deviceSettings);
    virtual bool isQueueFamilySuitable(vk::QueueFamilyProperties const & qfp, size_t queueFamilyIndex, vk::raii::PhysicalDevice& physicalDevice) override;   
};//game.