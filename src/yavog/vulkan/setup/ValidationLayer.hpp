#pragma once
#include "yavog/vulkan/Header.hpp"
#include "yavog/vulkan/setup/Instance.hpp"

class ValidationLayer
{
    const std::vector<char const*> validationLayers = {
        "VK_LAYER_KHRONOS_validation"
    };

#ifdef NDEBUG
    bool enableValidationLayers = false;
#else
    bool enableValidationLayers = true;
#endif
public:
    ValidationLayer(InstanceSettings* settings);
    ~ValidationLayer();
};