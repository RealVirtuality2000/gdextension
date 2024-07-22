#include "waapi_picker.hpp"
#include <iostream>

//WAAPIPicker::WAAPIPicker() : client(new AK::WwiseAuthoringAPI::Client()) {}

WAAPIPicker::~WAAPIPicker() {
    //disconnect();
    //delete client;
}

//bool WAAPIPicker::connect() {
//    return client->Connect("127.0.0.1", 8080);
//}
//
//void WAAPIPicker::disconnect() {
//    if (client->IsConnected()) {
//        client->Disconnect();
//    }
//}
//
//std::vector<std::string> WAAPIPicker::get_soundbanks() {
//    std::vector<std::string> soundbanks;
//
//    if (!client->IsConnected()) {
//        std::cerr << "WAAPI is not connected" << std::endl;
//        return soundbanks;
//    }
//
//    AK::WwiseAuthoringAPI::AkJson results;
//    client->Call(
//        ak::wwise::core::soundbank::getInfo,
//        AK::WwiseAuthoringAPI::AkJson(AK::WwiseAuthoringAPI::AkJson::Map()),
//        results,
//        AK::WwiseAuthoringAPI::AkJson(AK::WwiseAuthoringAPI::AkJson::Map())
//    );
//
//    auto banks = results["soundbanks"].GetArray();
//    for (auto& bank : banks) {
//        soundbanks.push_back(bank["name"].GetString());
//    }
//
//    return soundbanks;
//}
