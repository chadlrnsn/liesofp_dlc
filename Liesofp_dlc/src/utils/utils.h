#pragma once
#include <globals.h>

namespace utils {
	void UpdateGlobals() noexcept;
	bool IsGameExploitable();

    bool IsAddressReadable(const void* ptr, size_t size);

    template<typename T>
    bool IsPointerReadable(const T* ptr) {
        return IsAddressReadable(ptr, sizeof(T));
    }

}

