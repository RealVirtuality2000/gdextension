#include "ww_switch.hpp"
#include <AK/SoundEngine/Common/AkSoundEngine.h>

using namespace godot;

void WWSwitch::set_switch(const String& switch_group, const String& switch_state) {
    AKRESULT result = AK::SoundEngine::SetSwitch(switch_group.utf8().get_data(), switch_state.utf8().get_data(), AK_INVALID_GAME_OBJECT);
    if (result != AK_Success) {
        // Fehlerbehandlung
        UtilityFunctions::print("Failed to set switch: " + switch_state + " in group: " + switch_group);
    }
    else {
        UtilityFunctions::print("Set switch: " + switch_state + " in group: " + switch_group);
    }
}

void WWSwitch::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_switch", "switch_group", "switch_state"), &WWSwitch::set_switch);
}

WWSwitch::WWSwitch()
{
}

WWSwitch::~WWSwitch()
{
}

void WWSwitch::_ready()
{
}

void WWSwitch::_process(double delta)
{
}
