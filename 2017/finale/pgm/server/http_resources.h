// Copyright 2017 Milan Straka, Czech Republic.
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "common.h"

class HttpResources {
 public:
  static bool get_resource(const string& name, string_piece& value, string* mime = nullptr);
};
