#ifndef WW_LISTENER2D_HPP
#define WW_LISTENER2D_HPP

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

class WWListener2D : public Node {
    GDCLASS(WWListener2D, Node);

protected:
    static void _bind_methods();

public:
    WWListener2D();
    ~WWListener2D();

    void _ready() override;
    void _process(double delta) override;

    void set_listener_position(const Vector2& position);
};

#endif // WW_LISTENER2D_HPP
