int __thiscall sub_101C5390(unsigned __int16 *this)
{
  int result; // eax
  int v2; // esi
  __int16 i; // di
  __int16 v4; // dx
  int v5; // eax
  unsigned __int16 v6; // ax
  int v7; // edx
  int v8; // eax

  result = this[24];
  if ( (_WORD)result )
  {
    v2 = result - 1;
    for ( i = -1; v2 >= 0; i = v4 )
    {
      v4 = v2;
      v5 = 12 * (unsigned __int16)v2--;
      *(_WORD *)(v5 + *(_DWORD *)this + 10) = i;
      *(_WORD *)(v5 + *(_DWORD *)this + 8) = v4;
    }
    this[22] = 0;
    v6 = this[12];
    if ( v6 != 0xFFFF )
    {
      v7 = *((_DWORD *)this + 3);
      do
      {
        v8 = 10 * v6;
        *(_WORD *)(v7 + v8) = -1;
        *(_WORD *)(*((_DWORD *)this + 3) + v8 + 2) = -1;
        *(_WORD *)(*((_DWORD *)this + 3) + v8 + 4) = 0;
        v7 = *((_DWORD *)this + 3);
        v6 = *(_WORD *)(v7 + v8 + 8);
      }
      while ( v6 != 0xFFFF );
    }
    result = 0;
    this[23] = 0;
  }
  return result;
}
