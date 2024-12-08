#ifndef __SCRIPTS_MENU_H__
#define __SCRIPTS_MENU_H__

#include "MenuItemInterface.h"


class ScriptsMenu : public MenuItemInterface {
public:
    void optionsMenu(void);
    void drawIcon(float scale);
    String getName(void);

private:
    String _name = "JS Interpreter";

};

#endif
