void __thiscall sub_102C2E00(_DWORD *this)
{
  int v1; // edx
  int v2; // eax
  int v3; // edx

  v1 = this[7];
  if ( v1 != -1 )
  {
    v2 = (this[2] > 0) - 1;
    if ( (int)this[2] > 0 )
    {
      do
      {
        if ( v2 >= 0 && v2 < this[2] && v2 <= v1 )
        {
          if ( (dword_106DE034 & 1) == 0 )
          {
            dword_106DE034 |= 1u;
            dword_106DE024 = -1;
            dword_106DE028 = -1;
            dword_106DE02C = -1;
            dword_106DE030 = 1;
          }
          if ( *(_DWORD *)(this[1] + 48 * v2) != v2 )
          {
            v3 = 6 * v2;
            *(_DWORD *)(this[1] + 8 * v3 + 4) = this[6];
            *(_DWORD *)(this[1] + 8 * v3) = v2;
            this[6] = v2;
          }
        }
        v1 = this[7];
        if ( v2 == v1 )
          break;
        if ( ++v2 < 0 || v2 >= this[2] )
          v2 = -1;
      }
      while ( v2 != -1 );
    }
    this[4] = -1;
    this[5] = 0;
  }
}
