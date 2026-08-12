BOOL __thiscall sub_100D17A0(int this, int a2)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  BOOL result; // eax

  result = 0;
  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 1240) )
  {
    v2 = *(_DWORD *)(this + 1244);
    if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1244) & 0xFFF) + 1], v3[1] != v2 >> 12) )
      v4 = 0;
    else
      v4 = *v3;
    if ( v4 != a2 )
      return 1;
  }
  return result;
}
