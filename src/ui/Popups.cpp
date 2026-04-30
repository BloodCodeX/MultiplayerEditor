#include "Popups.hpp"

bool JoinSessionPopup::setup(){
    auto winSize = CCDirector::sharedDirector()->getWinSize();
   this->m_title->setString("Join Session");

    return true;
}

void JoinSessionPopup::onConnect(CCObject *){
    this->onClose(this);
}

JoinSessionPopup* JoinSessionPopup::create() {
    auto ret = new JoinSessionPopup();
    if (ret && ret->init(240.f, 160.f)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}
