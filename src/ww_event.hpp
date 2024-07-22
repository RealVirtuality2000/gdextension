#ifndef WW_EVENT_HPP
#define WW_EVENT_HPP

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

class WWEvent : public Node {
    GDCLASS(WWEvent, Node);

protected:
    static void _bind_methods();

public:
    WWEvent();
    ~WWEvent();

    void _ready() override;
    void _process(double delta) override;

    void post_event(const String& event_name);
    void stop_event(const String& event_name);
};

#endif // WW_EVENT_HPP
