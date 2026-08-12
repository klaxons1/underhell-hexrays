int __thiscall sub_100CCF40(unsigned __int8 (__cdecl **this)(int, int), int a2)
{
  unsigned __int8 (__cdecl *v3)(int, int); // edi
  int v4; // esi

  v3 = this[4];
  if ( v3 == (unsigned __int8 (__cdecl *)(int, int))-1 )
    return -1;
  do
  {
    v4 = 24 * (_DWORD)v3;
    if ( (*this)(a2, (int)this[1] + 24 * (_DWORD)v3 + 16) )
    {
      if ( (dword_10430EA8 & 1) == 0 )
      {
        dword_10430EA8 |= 1u;
        dword_10430E98 = -1;
        dword_10430E9C = -1;
        dword_10430EA0 = -1;
        dword_10430EA4 = 1;
      }
      v3 = (unsigned __int8 (__cdecl *)(int, int))*((_DWORD *)this[1] + 6 * (_DWORD)v3);
    }
    else
    {
      if ( !(*this)((int)this[1] + v4 + 16, a2) )
        return (int)v3;
      if ( (dword_10430EA8 & 1) == 0 )
      {
        dword_10430EA8 |= 1u;
        dword_10430E98 = -1;
        dword_10430E9C = -1;
        dword_10430EA0 = -1;
        dword_10430EA4 = 1;
      }
      v3 = *(unsigned __int8 (__cdecl **)(int, int))((char *)this[1] + v4 + 4);
    }
  }
  while ( v3 != (unsigned __int8 (__cdecl *)(int, int))-1 );
  return (int)v3;
}
