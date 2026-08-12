int __thiscall sub_102B74A0(int this, float a2)
{
  unsigned int v2; // eax
  int *v3; // ecx

  if ( *(float *)(dword_106B31C8 + 12) - a2 > *(float *)(this + 1192) )
    return 0;
  v2 = *(_DWORD *)(this + 1188);
  if ( v2 == -1 )
    return 0;
  v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1188) & 0xFFF) + 1];
  if ( v3[1] != v2 >> 12 )
    return 0;
  else
    return *v3;
}
