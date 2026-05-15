#pragma once
#include "yavog/vulkan/setup/Instance.hpp"
#include "yavog/vulkan/setup/ValidationLayer.hpp"
#include "yavog/vulkan/setup/Device.hpp"
#include "yavog/vulkan/setup/CommandPool.hpp"
#include "yavog/vulkan/window/Window.hpp"
#include "yavog/vulkan/window/GraphicsQueue.hpp"
#include "yavog/vulkan/window/Swapchain.hpp"
#include "yavog/vulkan/window/RenderSync.hpp"
#include "yavog/server/World.hpp"
#include "GameFolder.hpp"

class Game2
{
public:
    Instance instance;
    InstanceSettings instanceSettings;
    Window window;
    ValidationLayer validationLayer;
    DeviceSettings deviceSettings;
    Device device;
    GraphicsQueue queue;
    Swapchain swapchain;
    CommandPool commandPool;    
    RenderSync render;

    GameFolder gf;
    World2 world;
    
    
    std::filesystem::path projectBaseDir;
    Game2(std::filesystem::path projectBaseDir);
    ~Game2();
};
