/* * Copyright (c) 2014, 2015                                          Zhang Xianyi
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>
#include <openvml_reference.h>

void OpenVML_FUNCNAME_REF(vsAdd)(const VML_INT n, const float * a, const float * b, float *y)
{
  VML_INT i;

  if (n<=0) return;
  if (a==NULL || b==NULL || y==NULL) return;

  for(i=0; i<n; i++) {
    y[i]=a[i]+b[i];
  }
}

void OpenVML_FUNCNAME_REF(vdAdd)(const VML_INT n, const double * a, const double * b, double *y)
{
  VML_INT i;

  if (n<=0) return;
  if (a==NULL || b==NULL || y==NULL) return;

  for(i=0; i<n; i++) {
    y[i]=a[i]+b[i];
  }
}

void OpenVML_FUNCNAME_REF(vcAdd)(const VML_INT n, const float * a, const float * b, float *y)
{
  VML_INT i;

  if (n<=0) return;
  if (a==NULL || b==NULL || y==NULL) return;

  for(i=0; i<2*n; i++) {
    y[i]=a[i]+b[i];
  }
}

void OpenVML_FUNCNAME_REF(vzAdd)(const VML_INT n, const double * a, const double * b, double *y)
{
  VML_INT i;

  if (n<=0) return;
  if (a==NULL || b==NULL || y==NULL) return;

  for(i=0; i<2*n; i++) {
    y[i]=a[i]+b[i];
  }
}

