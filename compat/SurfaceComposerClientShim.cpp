// SPDX-License-Identifier: Apache-2.0
#include <gui/SurfaceComposerClient.h>

// Stock WFD calls the pre-Android 17 signature, without ownerUid.
android::sp<android::IBinder> createVirtualDisplayLegacy(
        const std::string& name, bool secure, bool optimizeForPower,
        const std::string& uniqueId, float refreshRate)
        asm("_ZN7android21SurfaceComposerClient20createVirtualDisplayERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbbS9_f");

android::sp<android::IBinder> createVirtualDisplayLegacy(
        const std::string& name, bool secure, bool optimizeForPower,
        const std::string& uniqueId, float refreshRate) {
    return android::SurfaceComposerClient::createVirtualDisplay(
            name, secure, optimizeForPower, uniqueId,
            android::gui::Uid::INVALID.val(), refreshRate);
}
