#pragma once
#include "yavog/vulkan/Header.hpp"
#include "yavog/vulkan/setup/CommandBuffer.hpp"
#include "yavog/vulkan/draw/Pipeline.hpp"

class PushConstant{
    vk::ShaderStageFlagBits shaderStages;
    size_t offset;
public:
    vk::PushConstantRange pushConstantRange;

    void create(vk::ShaderStageFlagBits shaderStages,size_t offset,size_t size);

    template<class T>
    void use(CommandBuffer& cb,Pipeline& pipeline,const T& ptr){
        vkCmdPushConstants(*cb.commandBuffer,*pipeline.pipelineLayout,(VkShaderStageFlags)shaderStages,offset,sizeof(T),&ptr);  
    }
};