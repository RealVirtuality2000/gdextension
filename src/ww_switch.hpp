#ifndef WW_SWITCH_HPP
#define WW_SWITCH_HPP

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

class WWSwitch : public Node {
    GDCLASS(WWSwitch, Node);

protected:
    static void _bind_methods();

public:
    WWSwitch();
    ~WWSwitch();

    void _ready() override;
    void _process(double delta) override;

    void set_switch(const String& switch_group, const String& switch_state);
};

#endif // WW_SWITCH_HPP
