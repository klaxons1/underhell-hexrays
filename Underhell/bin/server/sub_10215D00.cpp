int __thiscall sub_10215D00(_WORD *this)
{
  int result; // eax
  unsigned __int16 v2; // dx
  int v3; // esi
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // dx
  __int16 v6; // ax

  result = 0xFFFF;
  if ( this[10] != 0xFFFF )
  {
    v2 = this[6];
    if ( v2 != 0xFFFF )
    {
      do
      {
        v3 = *(_DWORD *)this + 8 * v2;
        v4 = *(_WORD *)(v3 + 6);
        *(_WORD *)(v3 + 4) = v2;
        if ( v4 == 0xFFFF )
          v5 = this[8];
        else
          v5 = v4;
        *(_WORD *)(v3 + 6) = v5;
        v2 = v4;
      }
      while ( v4 != 0xFFFF );
    }
    v6 = this[6];
    if ( v6 != -1 )
      this[8] = v6;
    result = 0;
    *((_DWORD *)this + 3) = -1;
    this[9] = 0;
  }
  return result;
}
