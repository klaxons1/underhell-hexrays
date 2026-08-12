int __thiscall sub_10087F70(_WORD *this)
{
  int result; // eax
  unsigned __int16 v2; // si
  int v3; // edx
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // si
  __int16 v6; // ax

  result = 0xFFFF;
  if ( this[10] != 0xFFFF )
  {
    v2 = this[6];
    if ( v2 != 0xFFFF )
    {
      do
      {
        v3 = *(_DWORD *)this + 10 * v2;
        v4 = *(_WORD *)(v3 + 8);
        *(_WORD *)(v3 + 6) = v2;
        if ( v4 == 0xFFFF )
          v5 = this[8];
        else
          v5 = v4;
        *(_WORD *)(v3 + 8) = v5;
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
