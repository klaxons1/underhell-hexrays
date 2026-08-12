int __thiscall sub_1023CCF0(unsigned __int8 (__cdecl **this)(int, int), int a2)
{
  unsigned __int8 (__cdecl *v3)(int, int); // ebp
  int v4; // esi

  v3 = this[4];
  if ( v3 == (unsigned __int8 (__cdecl *)(int, int))-1 )
    return -1;
  do
  {
    v4 = 44 * (_DWORD)v3;
    if ( (*this)(a2, (int)this[1] + 44 * (_DWORD)v3 + 16) )
    {
      if ( (dword_1047CB08 & 1) == 0 )
      {
        dword_1047CB08 |= 1u;
        dword_1047CAF8 = -1;
        dword_1047CAFC = -1;
        dword_1047CB00 = -1;
        dword_1047CB04 = 1;
      }
      v3 = (unsigned __int8 (__cdecl *)(int, int))*((_DWORD *)this[1] + 11 * (_DWORD)v3);
    }
    else
    {
      if ( !(*this)((int)this[1] + v4 + 16, a2) )
        return (int)v3;
      if ( (dword_1047CB08 & 1) == 0 )
      {
        dword_1047CB08 |= 1u;
        dword_1047CAF8 = -1;
        dword_1047CAFC = -1;
        dword_1047CB00 = -1;
        dword_1047CB04 = 1;
      }
      v3 = *(unsigned __int8 (__cdecl **)(int, int))((char *)this[1] + v4 + 4);
    }
  }
  while ( v3 != (unsigned __int8 (__cdecl *)(int, int))-1 );
  return (int)v3;
}
