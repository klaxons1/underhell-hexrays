float *__thiscall sub_102CAC30(int this, float *a2, float *a3)
{
  long double v3; // st7
  long double v4; // st6
  long double v5; // st5
  long double v6; // st4
  double v7; // st3
  float *result; // eax
  int v9; // edx
  int v10; // ecx

  v3 = *a3 - *(float *)(this + 716);
  v4 = a3[1] - *(float *)(this + 720);
  v5 = a3[2] - *(float *)(this + 724);
  v6 = v4 * v4 + v3 * v3;
  v7 = v5 * v5 + v6;
  result = a2;
  if ( *(float *)(this + 1024) * *(float *)(this + 1024)
     + *(float *)(this + 1020) * *(float *)(this + 1020)
     + *(float *)(this + 1028) * *(float *)(this + 1028) < v7 )
  {
    *a2 = -((atan2(-*(float *)(this + 1028), sqrt(v7 - *(float *)(this + 1028) * *(float *)(this + 1028)))
           + atan2(v5, sqrt(v6)))
          * 57.29578);
    a2[1] = (atan2(*(float *)(this + 1024), sqrt(v7 - *(float *)(this + 1024) * *(float *)(this + 1024))) + atan2(v4, v3))
          * 57.29578;
    a2[2] = 0.0;
  }
  else
  {
    *a2 = *(float *)(this + 728);
    v9 = *(_DWORD *)(this + 732);
    v10 = *(_DWORD *)(this + 736);
    *((_DWORD *)a2 + 1) = v9;
    *((_DWORD *)a2 + 2) = v10;
  }
  return result;
}
