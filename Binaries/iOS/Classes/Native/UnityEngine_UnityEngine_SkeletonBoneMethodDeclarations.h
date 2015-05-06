#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t530;
struct SkeletonBone_t530_marshaled;

void SkeletonBone_t530_marshal(const SkeletonBone_t530& unmarshaled, SkeletonBone_t530_marshaled& marshaled);
void SkeletonBone_t530_marshal_back(const SkeletonBone_t530_marshaled& marshaled, SkeletonBone_t530& unmarshaled);
void SkeletonBone_t530_marshal_cleanup(SkeletonBone_t530_marshaled& marshaled);
