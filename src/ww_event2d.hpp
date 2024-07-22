#ifndef WW_EVENT2D_HPP
#define WW_EVENT2D_HPP

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

class WWEvent2D : public Node {
    GDCLASS(WWEvent2D, Node);

protected:
    static void _bind_methods();

public:
    WWEvent2D();
    ~WWEvent2D();

    void _ready() override;
    void _process(double delta) override;

    void post_event(const String& event_name);
    void stop_event(const String& event_name);
};

#endif // WW_EVENT2D_HPP
