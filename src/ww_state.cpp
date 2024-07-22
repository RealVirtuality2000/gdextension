#include "ww_state.hpp"
#include <AK/SoundEngine/Common/AkSoundEngine.h>

using namespace godot;

void WWState::set_state(const String& state_group, const String& state) {
    AKRESULT result = AK::SoundEngine::SetState(state_group.utf8().get_data(), state.utf8().get_data());
    if (result != AK_Success) {
        // Fehlerbehandlung
        UtilityFunctions::print("Failed to set state: " + state + " in group: " + state_group);
    }
    else {
        UtilityFunctions::print("Set state: " + state + " in group: " + state_group);
    }
}

void WWState::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_state", "state_group", "state"), &WWState::set_state);
}

WWState::WWState()
{
}

WWState::~WWState()
{
}

void WWState::_ready()
{
}

void WWState::_process(double delta)
{
}