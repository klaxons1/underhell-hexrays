unsigned int __thiscall sub_10204F30(int this, int a2)
{
  unsigned int result; // eax
  int *v4; // ecx
  double v5; // st7
  unsigned int v6; // eax
  int v7; // ecx

  result = *(_DWORD *)(this + 800);
  if ( result != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
    result >>= 12;
    if ( v4[1] == result )
    {
      if ( *v4 )
      {
        v5 = *(float *)(this + 820) + *(float *)(dword_106B31C8 + 12);
        *(_DWORD *)(this + 812) = -2;
        *(float *)(this + 816) = v5;
        v6 = *(_DWORD *)(this + 800);
        if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v6 >> 12 )
          v7 = 0;
        else
          v7 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
        *(_DWORD *)(this + 808) = sub_10204D90(this, v7, *(float *)(this + 804), 1);
        return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
      }
    }
  }
  return result;
}
