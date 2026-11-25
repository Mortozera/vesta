#pragma once
#include "localization.hpp"
namespace demo {
constexpr bool valid(Language l) { return static_cast<int>(l)>=0 && l<Language::Count; }
}
