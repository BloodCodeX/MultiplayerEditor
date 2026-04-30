#include "Popups.hpp"

using namespace geode::prelude;

bool JoinSessionPopup::setup() {
    auto winSize = CCDirector::sharedDirector()->getWinSize();
    
    this->m_title->setString("Join Session");

    return true;
}

void JoinSessionPopup::onConnect(CCObject* sender) {
    this->onClose(sender);
}

JoinSessionPopup* JoinSessionPopup::create() {
    auto ret = new JoinSessionPopup();
    if (ret && ret->initAnchored(240.f, 160.f)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}
