#ifndef WW_STATE_HPP
#define WW_STATE_HPP

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

class WWState : public Node {
    GDCLASS(WWState, Node);

protected:
    static void _bind_methods();

public:
    WWState();
    ~WWState();

    void _ready() override;
    void _process(double delta) override;

    void set_state(const String& state_group, const String& state);
};

#endif // WW_STATE_HPP
