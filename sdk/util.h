#pragma once
#include <winnt.h>
#include <memoryapi.h>

namespace util {
    inline bool IsAddressReadable(const void* ptr, size_t size) {
        MEMORY_BASIC_INFORMATION mbi;
        if (VirtualQuery(ptr, &mbi, sizeof(mbi)) == 0)
            return false;
        if (mbi.State != MEM_COMMIT)
            return false;
        if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS))
            return false;
        return (reinterpret_cast<uintptr_t>(ptr) + size) <= (reinterpret_cast<uintptr_t>(mbi.BaseAddress) + mbi.RegionSize);
    }

    template<typename T>
    bool IsPointerReadable(const T* ptr) {
        return IsAddressReadable(ptr, sizeof(T));
    }

}