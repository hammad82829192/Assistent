#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        FLAlertLayer::create(
            "Auto Deco Mod",
            "Mod geladen!",
            "OK"
        )->show();

        return true;
    }
};
