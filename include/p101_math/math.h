#ifndef LIBP101_MATH_MATH_H
#define LIBP101_MATH_MATH_H

/*
 * Copyright 2026 D'Arcy Smith.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 */

#include <p101_env/env.h>
#include <p101_error/attributes.h>

#ifdef __cplusplus
extern "C"
{
#endif

    double p101_j0(const struct p101_env *env, struct p101_error *err, double x);
    double p101_j1(const struct p101_env *env, struct p101_error *err, double x);
    double p101_jn(const struct p101_env *env, struct p101_error *err, int n, double x);
    double p101_y0(const struct p101_env *env, struct p101_error *err, double x);
    double p101_y1(const struct p101_env *env, struct p101_error *err, double x);
    double p101_yn(const struct p101_env *env, struct p101_error *err, int n, double x);

#ifdef __cplusplus
}
#endif

#endif    // LIBP101_MATH_MATH_H
