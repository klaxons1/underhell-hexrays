int __thiscall sub_10008A10(_DWORD *this)
{
  int result; // eax
  BOOL v3; // ecx
  int v4; // esi
  int v5; // edi

  result = this[7];
  if ( result != -1 )
  {
    v3 = this[2] > 0;
    v4 = v3 - 1;
    if ( v3 )
    {
      do
      {
        if ( v4 >= 0 && v4 < this[2] && v4 <= result )
        {
          if ( (dword_10690170 & 1) == 0 )
          {
            dword_10690170 |= 1u;
            dword_10690160 = -1;
            dword_10690164 = -1;
            dword_10690168 = -1;
            dword_1069016C = 1;
          }
          if ( *(_DWORD *)(this[1] + 40 * v4) != v4 )
          {
            v5 = 40 * v4;
            sub_102375F0(this[1] + 40 * v4 + 20);
            *(_DWORD *)(this[1] + v5 + 4) = this[6];
            *(_DWORD *)(v5 + this[1]) = v4;
            this[6] = v4;
          }
        }
        result = this[7];
        if ( v4 == result )
          break;
        if ( ++v4 < 0 || v4 >= this[2] )
          v4 = -1;
      }
      while ( v4 != -1 );
    }
    this[4] = -1;
    this[5] = 0;
  }
  return result;
}
