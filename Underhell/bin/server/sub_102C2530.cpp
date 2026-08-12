int __thiscall sub_102C2530(unsigned __int8 (__cdecl **this)(int, int), int a2)
{
  unsigned __int8 (__cdecl *v3)(int, int); // edi
  int v4; // esi

  v3 = this[4];
  if ( v3 == (unsigned __int8 (__cdecl *)(int, int))-1 )
    return -1;
  do
  {
    v4 = 48 * (_DWORD)v3;
    if ( (*this)(a2, (int)this[1] + 48 * (_DWORD)v3 + 16) )
    {
      if ( (dword_106DE034 & 1) == 0 )
      {
        dword_106DE034 |= 1u;
        dword_106DE024 = -1;
        dword_106DE028 = -1;
        dword_106DE02C = -1;
        dword_106DE030 = 1;
      }
      v3 = (unsigned __int8 (__cdecl *)(int, int))*((_DWORD *)this[1] + 12 * (_DWORD)v3);
    }
    else
    {
      if ( !(*this)((int)this[1] + v4 + 16, a2) )
        return (int)v3;
      if ( (dword_106DE034 & 1) == 0 )
      {
        dword_106DE034 |= 1u;
        dword_106DE024 = -1;
        dword_106DE028 = -1;
        dword_106DE02C = -1;
        dword_106DE030 = 1;
      }
      v3 = *(unsigned __int8 (__cdecl **)(int, int))((char *)this[1] + v4 + 4);
    }
  }
  while ( v3 != (unsigned __int8 (__cdecl *)(int, int))-1 );
  return (int)v3;
}
