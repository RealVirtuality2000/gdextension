#ifndef WW_BANK_HPP
#define WW_BANK_HPP

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <AK/SoundEngine/Common/AkTypes.h>
#include <godot_cpp/variant/utility_functions.hpp>
#include "waapi_picker.hpp"

using namespace godot;

class WWBank : public Node {
    GDCLASS(WWBank, Node);

private:
	WAAPIPicker waapi_picker;
protected:
    static void _bind_methods();

public:
    WWBank();
    ~WWBank();

    void _ready() override;
    void _process(double delta) override;

    void load_bank(const String& bank_name);
    void unload_bank(const String& bank_name);
    Array get_waapi_soundbanks();
    void load_bank_from_waapi(int index);
    void unload_bank_from_waapi(int index);
};

#endif // WW_BANK_HPP
