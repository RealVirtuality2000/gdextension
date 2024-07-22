#ifndef WW_ENVIRONMENT_HPP
#define WW_ENVIRONMENT_HPP

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

class WWEnvironment : public Node {
    GDCLASS(WWEnvironment, Node);

protected:
    static void _bind_methods();

public:
    WWEnvironment();
    ~WWEnvironment();

    void _ready() override;
    void _process(double delta) override;

    void set_environment(const String& environment_name);
    void set_aux_send(const String& aux_bus_name, float value);
};

#endif // WW_ENVIRONMENT_HPP
