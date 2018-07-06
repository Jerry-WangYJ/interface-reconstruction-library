// This file is part of the Interface Reconstruction Library (IRL),
// a library for interface reconstruction and computational geometry operations.
//
// Copyright (C) 2019 Robert Chiodi <robert.chiodi@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef SRC_C_INTERFACE_GEOMETRY_POLYHEDRONS_CAPPED_Octahedron_VARIATIONS_C_CAPPED_Octahedron_TTT_H_
#define SRC_C_INTERFACE_GEOMETRY_POLYHEDRONS_CAPPED_Octahedron_VARIATIONS_C_CAPPED_Octahedron_TTT_H_

#include "src/geometry/polyhedrons/capped_octahedron_variations/capped_octahedron_TTT.h"

extern "C" {

struct c_CapOcta_TTT {
  IRL::CappedOctahedron_TTT* obj_ptr = nullptr;
};

void c_CapOcta_TTT_new(c_CapOcta_TTT* a_self);
void c_CapOcta_TTT_delete(c_CapOcta_TTT* a_self);
void c_CapOcta_TTT_construct(c_CapOcta_TTT* a_self, const double* a_octahedron);
void c_CapOcta_TTT_adjustCapToMatchVolume(c_CapOcta_TTT* a_self,
                                     const double* a_correct_signed_volume);
double c_CapOcta_TTT_calculateVolume(const c_CapOcta_TTT* a_self);
void c_CapOcta_TTT_getBoundingPts(const c_CapOcta_TTT* a_self, double* a_lower_pt,
                             double* a_upper_pt);
void c_CapOcta_TTT_printToScreen(const c_CapOcta_TTT* a_self);
void c_CapOcta_TTT_getPt(const c_CapOcta_TTT* a_self, const int* a_index, double* a_pt);
}

#endif  // SRC_C_INTERFACE_GEOMETRY_POLYHEDRONS_CAPPED_Octahedron_VARIATIONS_C_CAPPED_Octahedron_TTT_H_
