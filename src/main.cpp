#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/MenuLayer.hpp>
class $modify(MyMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}
		moveButtonsRow();
		return true;
	}

	void moveButtonsRow() {
		CCMenu menu = this->getChildByID("bottom-menu");
	}
};