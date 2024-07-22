#include "ww_environment.hpp"
#include <AK/SoundEngine/Common/AkSoundEngine.h>

using namespace godot;

void WWEnvironment::set_environment(const String& environment_name) {
    // This is a placeholder function. Replace with actual environment setting logic.
    UtilityFunctions::print("Set environment: " + environment_name);
}

void WWEnvironment::set_aux_send(const String& aux_bus_name, float value) {
    AkAuxSendValue auxSend;
    auxSend.listenerID = AK_INVALID_GAME_OBJECT;
    auxSend.auxBusID = AK::SoundEngine::GetIDFromString(aux_bus_name.utf8().get_data());
    auxSend.fControlValue = value;

    AKRESULT result = AK::SoundEngine::SetGameObjectAuxSendValues(AK_INVALID_GAME_OBJECT, &auxSend, 1);
    if (result != AK_Success) {
        // Fehlerbehandlung
        UtilityFunctions::print("Failed to set aux send for: " + aux_bus_name);
    }
    else {
        UtilityFunctions::print("Set aux send for: " + aux_bus_name + " with value: " + String::num(value));
    }
}

void WWEnvironment::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_environment", "environment_name"), &WWEnvironment::set_environment);
    ClassDB::bind_method(D_METHOD("set_aux_send", "aux_bus_name", "value"), &WWEnvironment::set_aux_send);
}

WWEnvironment::WWEnvironment()
{
}

WWEnvironment::~WWEnvironment()
{
}

void WWEnvironment::_ready()
{
}

void WWEnvironment::_process(double delta)
{
}
