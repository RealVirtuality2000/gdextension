#include "ww_listener2d.hpp"
#include <AK/SoundEngine/Common/AkSoundEngine.h>

using namespace godot;

void WWListener2D::set_listener_position(const Vector2& position) {
    //AkListenerPosition listenerPos;
    //listenerPos.Position.X = position.x;
    //listenerPos.Position.Y = position.y;
    //listenerPos.Position.Z = 0; // Assuming 2D position, z is set to 0
    //AK::SoundEngine::SetPosition(AK_INVALID_GAME_OBJECT, listenerPos);
    //UtilityFunctions::print("Set 2D listener position: " + position.to_string());
}

void WWListener2D::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_listener_position", "position"), &WWListener2D::set_listener_position);
}

WWListener2D::WWListener2D()
{
}

WWListener2D::~WWListener2D()
{
}

void WWListener2D::_ready()
{
}

void WWListener2D::_process(double delta)
{
}
