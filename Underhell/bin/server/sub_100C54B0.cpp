int __thiscall sub_100C54B0(_DWORD *this)
{
  int result; // eax
  int v2; // esi
  int v3; // edx
  int v4; // eax

  result = this[283];
  v2 = 0;
  if ( result > 0 )
  {
    v3 = 0;
    do
    {
      if ( v2 >= 0 && v2 < result )
      {
        v4 = this[280];
        if ( (*(_BYTE *)(v3 + v4) & 1) != 0 )
        {
          *(float *)(v4 + v3 + 36) = *(float *)(v4 + v3 + 20) * 5.0;
          *(float *)(this[280] + v3 + 40) = 0.0;
          *(_DWORD *)(this[280] + v3) |= 4u;
        }
      }
      result = this[283];
      ++v2;
      v3 += 76;
    }
    while ( v2 < result );
  }
  return result;
}
