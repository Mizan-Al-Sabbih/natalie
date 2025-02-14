#pragma once

#include <assert.h>

#include "natalie/class_object.hpp"
#include "natalie/encoding_object.hpp"
#include "natalie/forward.hpp"
#include "natalie/global_env.hpp"
#include "natalie/macros.hpp"
#include "natalie/object.hpp"

namespace Natalie {

class VoidPObject : public Object {
public:
    VoidPObject(void *ptr)
        : Object { Object::Type::VoidP, GlobalEnv::the()->Object() }
        , m_void_ptr { ptr } { }

    void *void_ptr() { return m_void_ptr; }
    void set_void_ptr(void *ptr) { m_void_ptr = ptr; }

private:
    void *m_void_ptr { nullptr };
};

}
