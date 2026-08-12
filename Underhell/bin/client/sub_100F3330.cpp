float **__cdecl sub_100F3330(float **a1, int a2)
{
  float *v2; // esi
  float *v3; // ecx
  float **result; // eax

  v2 = (float *)sub_100DDA40(260);
  if ( v2 )
  {
    sub_100F2A50(v2, a2);
    v2[63] = 16.0;
    *(_DWORD *)v2 = &CEmberEffect::`vftable';
    v3 = v2;
    v2[64] = 64.0;
  }
  else
  {
    v3 = 0;
  }
  result = a1;
  *((_DWORD *)v3 + 59) |= 2u;
  ++*((_DWORD *)v3 + 62);
  *a1 = v3;
  return result;
}
