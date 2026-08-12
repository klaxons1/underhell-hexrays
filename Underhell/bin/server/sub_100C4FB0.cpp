int __thiscall sub_100C4FB0(_DWORD *this, int a2, float a3, float a4)
{
  int v4; // edx
  int v5; // esi
  int result; // eax

  if ( a2 >= 0 && a2 < this[283] )
  {
    v4 = 76 * a2;
    v5 = this[280];
    if ( (*(_BYTE *)(v5 + 76 * a2) & 1) != 0 )
    {
      if ( a3 <= 0.0 )
        *(float *)(v5 + v4 + 36) = 100.0;
      else
        *(float *)(v5 + v4 + 36) = *(float *)(v5 + v4 + 20) / a3;
      result = this[280];
      *(float *)(result + v4 + 40) = a4;
      *(_DWORD *)(this[280] + 76 * a2) |= 4u;
    }
  }
  return result;
}
