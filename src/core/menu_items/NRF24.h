#ifndef __NRF24_MENU_H__
#define __NRF24_MENU_H__

#include "MenuItemInterface.h"


class NRF24Menu : public MenuItemInterface {
public:
    void optionsMenu(void);
    void drawIcon(float scale);
    String getName(void);

private:
    String _name = "NRF24";
};

#endif
