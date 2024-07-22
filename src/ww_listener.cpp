#include "ww_listener.hpp"
#include <AK/SoundEngine/Common/AkSoundEngine.h>

using namespace godot;

void WWListener::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_listener_position", "position"), &WWListener::set_listener_position);
}

WWListener::WWListener()
{
}

WWListener::~WWListener()
{
}

void WWListener::_ready()
{
}

void WWListener::_process(double delta)
{
}

void WWListener::set_listener_position(const Vector3& position) {
    //AkListenerPosition listenerPos;
    //listenerPos.Position.X = position.x;
    //listenerPos.Position.Y = position.y;
    //listenerPos.Position.Z = position.z;
    //AK::SoundEngine::SetPosition(AK_INVALID_GAME_OBJECT, listenerPos);
    //UtilityFunctions::print("Set listener position: " + position.to_string());
}
