// This file is part of the Interface Reconstruction Library (IRL),
// a library for interface reconstruction and computational geometry operations.
//
// Copyright (C) 2019 Robert Chiodi <robert.chiodi@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef IRL_C_INTERFACE_GEOMETRY_POLYHEDRONS_CAPPED_DODECAHEDRON_VARIATIONS_C_CAPPED_DODECAHEDRON_LTLT_H_
#define IRL_C_INTERFACE_GEOMETRY_POLYHEDRONS_CAPPED_DODECAHEDRON_VARIATIONS_C_CAPPED_DODECAHEDRON_LTLT_H_

#include "irl/geometry/polyhedrons/capped_dodecahedron_variations/capped_dodecahedron_LTLT.h"

extern "C" {

struct c_CapDod_LTLT {
  IRL::CappedDodecahedron_LTLT* obj_ptr = nullptr;
};

void c_CapDod_LTLT_new(c_CapDod_LTLT* a_self);
void c_CapDod_LTLT_delete(c_CapDod_LTLT* a_self);
void c_CapDod_LTLT_construct(c_CapDod_LTLT* a_self, const double* a_dodecahedron);
void c_CapDod_LTLT_adjustCapToMatchVolume(c_CapDod_LTLT* a_self,
                                     const double* a_correct_signed_volume);
void c_CapDod_LTLT_getBoundingPts(const c_CapDod_LTLT* a_self, double* a_lower_pt,
                             double* a_upper_pt);
void c_CapDod_LTLT_getPt(const c_CapDod_LTLT* a_self, const int* a_index, double* a_pt);
}

#endif // IRL_C_INTERFACE_GEOMETRY_POLYHEDRONS_CAPPED_DODECAHEDRON_VARIATIONS_C_CAPPED_DODECAHEDRON_LTLT_H_
