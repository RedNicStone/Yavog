#pragma once
#include "yavog/gui/GuiAsset.hpp"
#include "yavog/vulkan/Vulkan.hpp"
#include "yavog/vulkan/setup/CommandBuffer.hpp"
#include "yavog/vulkan/window/Event.hpp"
#include <filesystem>
#include <memory>

class GuiSystem:public InputHandler{
public:
    Vulkan& vulkan;
    GuiAsset assets;
    std::shared_ptr<class GuiScreen> screen;
    
    GuiSystem(Vulkan& vulkan);
    void setScreen(std::shared_ptr<class GuiScreen> newScreen);

    void create(std::filesystem::path projectDir);
    void draw(CommandBuffer& CB);

    virtual bool receive(const Event& event)override;

};