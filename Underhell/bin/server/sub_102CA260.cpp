char __thiscall sub_102CA260(_DWORD *this, float *a2)
{
  char *v2; // eax
  float *v3; // esi

  v2 = (char *)this[346];
  if ( !v2 )
    return 0;
  v3 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( !v3 )
    return 0;
  if ( ((_DWORD)v3[63] & 0x800) != 0 )
    sub_100DAE60((int)v3);
  *a2 = v3[145];
  a2[1] = v3[146];
  a2[2] = v3[147];
  return 1;
}
