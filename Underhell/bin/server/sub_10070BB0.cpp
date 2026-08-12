bool __thiscall sub_10070BB0(int this)
{
  bool result; // al
  unsigned int v2; // eax
  int *v3; // ecx

  result = 1;
  if ( !*(_DWORD *)(this + 828) && *(float *)(this + 864) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    v2 = *(_DWORD *)(this + 860);
    if ( v2 == -1 )
      return 0;
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 860) & 0xFFF) + 1];
    if ( v3[1] != v2 >> 12 || !*v3 )
      return 0;
  }
  return result;
}
