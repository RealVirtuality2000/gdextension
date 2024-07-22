#include "ww_bank.hpp"
#include <AK/SoundEngine/Common/AkSoundEngine.h>

using namespace godot;

void WWBank::load_bank(const String& bank_name) {
    AkBankID bankID;
    AKRESULT result = AK::SoundEngine::LoadBank(bank_name.utf8().get_data(), bankID, AkBankType_User);
    if (result != AK_Success) {
        // Fehlerbehandlung
    }
}

void WWBank::unload_bank(const String& bank_name) {
    AkBankID bankID;
    AKRESULT result = AK::SoundEngine::UnloadBank(bank_name.utf8().get_data(), NULL, AkBankType_User);
    if (result != AK_Success) {
        // Fehlerbehandlung
    }
}

Array WWBank::get_waapi_soundbanks() {
    Array banks;
    //if (!waapi_picker.connect()) {
    //    UtilityFunctions::print("Failed to connect to WAAPI.");
    //    return banks;
    //}
    //auto soundbanks = waapi_picker.get_soundbanks();
    //for (const auto& bank : soundbanks) {
    //    banks.append(String(bank.c_str()));
    //}
    //waapi_picker.disconnect();
    return banks;
}

void WWBank::load_bank_from_waapi(int index) {
    Array banks = get_waapi_soundbanks();
    if (index < 0 || index >= banks.size()) {
        UtilityFunctions::print("Invalid bank index.");
        return;
    }
    String bank_name = banks[index];
    load_bank(bank_name);
}

void WWBank::unload_bank_from_waapi(int index) {
    Array banks = get_waapi_soundbanks();
    if (index < 0 || index >= banks.size()) {
        UtilityFunctions::print("Invalid bank index.");
        return;
    }
    String bank_name = banks[index];
    unload_bank(bank_name);
}

void WWBank::_bind_methods() {
    ClassDB::bind_method(D_METHOD("load_bank", "bank_name"), &WWBank::load_bank);
    ClassDB::bind_method(D_METHOD("unload_bank", "bank_name"), &WWBank::unload_bank);
    ClassDB::bind_method(D_METHOD("get_waapi_soundbanks"), &WWBank::get_waapi_soundbanks);
    ClassDB::bind_method(D_METHOD("load_bank_from_waapi", "index"), &WWBank::load_bank_from_waapi);
    ClassDB::bind_method(D_METHOD("unload_bank_from_waapi", "index"), &WWBank::unload_bank_from_waapi);

}

WWBank::WWBank()
{
}

WWBank::~WWBank()
{
}

void WWBank::_ready()
{
}

void WWBank::_process(double delta)
{
}