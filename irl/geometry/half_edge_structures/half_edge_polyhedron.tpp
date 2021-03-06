// This file is part of the Interface Reconstruction Library (IRL),
// a library for interface reconstruction and computational geometry operations.
//
// Copyright (C) 2019 Robert Chiodi <robert.chiodi@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef IRL_GEOMETRY_HALF_EDGE_STRUCTURES_HALF_EDGE_POLYHEDRON_TPP_
#define IRL_GEOMETRY_HALF_EDGE_STRUCTURES_HALF_EDGE_POLYHEDRON_TPP_

namespace IRL {

template <class PtType, class VertexType, class HalfEdgeType, class FaceType,
          UnsignedIndex_t kMaxHalfEdges, UnsignedIndex_t kMaxVertices,
          UnsignedIndex_t kMaxFaces>
SegmentedHalfEdgePolyhedron<FaceType, VertexType>
HalfEdgePolyhedron<PtType, VertexType, HalfEdgeType, FaceType, kMaxHalfEdges,
                   kMaxVertices, kMaxFaces>::generateSegmentedPolyhedron(void) {
  SegmentedHalfEdgePolyhedron<FaceType, VertexType> a_polyhedron;
  this->setSegmentedPolyhedron(&a_polyhedron);
  return a_polyhedron;
}

template <class PtType, class VertexType, class HalfEdgeType, class FaceType,
          UnsignedIndex_t kMaxHalfEdges, UnsignedIndex_t kMaxVertices,
          UnsignedIndex_t kMaxFaces>
template <class SegmentedType>
void HalfEdgePolyhedron<
    PtType, VertexType, HalfEdgeType, FaceType, kMaxHalfEdges, kMaxVertices,
    kMaxFaces>::setSegmentedPolyhedron(SegmentedType *a_polytope) {
  a_polytope->setNumberOfFaces(this->getNumberOfInitialFaces());
  auto begin_segmented_face_iter = &(a_polytope->getFacePointer(0));
  auto base_face_iter = &(this->getFace(0));
  auto base_face_iter_end =
      &(this->getFace(this->getNumberOfInitialFaces() - 1)) + 1;
  while (base_face_iter != base_face_iter_end) {
    *(begin_segmented_face_iter++) = (base_face_iter++);
  }

  a_polytope->setNumberOfVertices(this->getNumberOfInitialVertices());
  auto begin_segmented_vertex_iter = &(a_polytope->getVertexPointer(0));
  auto base_vertex_iter = &(this->getVertex(0));
  auto base_vertex_iter_end =
      &(this->getVertex(this->getNumberOfInitialVertices() - 1)) + 1;
  while (base_vertex_iter != base_vertex_iter_end) {
    *(begin_segmented_vertex_iter++) = (base_vertex_iter++);
  }
}

} // namespace IRL

#endif // SRC_GEOMETRY_HALF_EDGE_STRUCTURES_HALF_EDGE_POLYHEDRON_TPP_
