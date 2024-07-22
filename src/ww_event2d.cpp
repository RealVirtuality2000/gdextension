#include "ww_event2d.hpp"
#include <AK/SoundEngine/Common/AkSoundEngine.h>

using namespace godot;

void WWEvent2D::post_event(const String& event_name) {
    AkPlayingID playingID = AK::SoundEngine::PostEvent(event_name.utf8().get_data(), AK_INVALID_GAME_OBJECT);
    if (playingID == AK_INVALID_PLAYING_ID) {
        // Fehlerbehandlung
        UtilityFunctions::print("Failed to post event: " + event_name);
    }
    else {
        UtilityFunctions::print("Posted event: " + event_name);
    }
}

void WWEvent2D::stop_event(const String& event_name) {
    AK::SoundEngine::ExecuteActionOnEvent(event_name.utf8().get_data(), AK::SoundEngine::AkActionOnEventType_Stop);
    UtilityFunctions::print("Stopped event: " + event_name);
}

void WWEvent2D::_bind_methods() {
    ClassDB::bind_method(D_METHOD("post_event", "event_name"), &WWEvent2D::post_event);
    ClassDB::bind_method(D_METHOD("stop_event", "event_name"), &WWEvent2D::stop_event);
}

WWEvent2D::WWEvent2D()
{
}

WWEvent2D::~WWEvent2D()
{
}

void WWEvent2D::_ready()
{
}

void WWEvent2D::_process(double delta)
{
}