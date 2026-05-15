#include "yavog/gui/GuiComponent.hpp"
#include "yavog/gui/GuiScreen.hpp"

class SinglePlayerMenu:public GuiScreen{
public:
    TextGui   underConstruction;
    TextGui   back;

    TextGui* hoveredText = nullptr;

    SinglePlayerMenu(GuiSystem& guiSystem);
    virtual ~SinglePlayerMenu();

    void create()override;
    void draw(CommandBuffer& CB, glm::vec2 mouse)override;
    bool receive(const Event& event)override;
};