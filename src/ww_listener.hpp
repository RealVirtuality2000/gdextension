#ifndef WW_LISTENER_HPP
#define WW_LISTENER_HPP

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

class WWListener : public Node {
    GDCLASS(WWListener, Node);

protected:
    static void _bind_methods();

public:
    WWListener();
    ~WWListener();

    void _ready() override;
    void _process(double delta) override;

    void set_listener_position(const Vector3& position);
};

#endif // WW_LISTENER_HPP
