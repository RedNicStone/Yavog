#pragma once
#include "yavog/vulkan/setup/Instance.hpp"
#include "yavog/vulkan/setup/ValidationLayer.hpp"
#include "yavog/vulkan/setup/Device.hpp"
#include "yavog/vulkan/setup/CommandPool.hpp"
#include "yavog/vulkan/window/Window.hpp"
#include "yavog/vulkan/window/GraphicsQueue.hpp"
#include "yavog/vulkan/window/Swapchain.hpp"
#include "yavog/vulkan/window/RenderSync.hpp"
#include "yavog/vulkan/window/DepthBuffer.hpp"

class Vulkan{
public:
    Instance instance;
    InstanceSettings instanceSettings;
    ValidationLayer validationLayer;
    Window window;
    DeviceSettings deviceSettings;
    Device device;
    GraphicsQueue queue;
    Swapchain swapchain;
    CommandPool commandPool;    
    RenderSync render;
    DepthBuffer depthBuffer;

    Vulkan();
    ~Vulkan();
};