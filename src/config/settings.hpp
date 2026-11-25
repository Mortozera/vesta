#pragma once
#include "misc.hpp"
namespace demo {
class Settings {
 Language language_=Language::English;
public:
 void select(Language l) { language_=valid(l)?l:Language::English; }
 Language language() const { return language_; }
 std::string_view text(std::string_view key) const { return translate(language_,key); }
};
}
