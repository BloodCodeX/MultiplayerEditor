#pragma once
#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>

using namespace geode::prelude;

class JoinPopup : public geode::Popup<> {
protected:
    bool setup() override;
    void onConnect(cocos2d::CCObject*);
public:
    static JoinPopup* create();
};
