int __thiscall sub_100C1E20(unsigned __int8 (__cdecl **this)(int, int), int a2)
{
  unsigned __int8 (__cdecl *v3)(int, int); // ebx
  int v4; // esi

  v3 = this[4];
  if ( v3 == (unsigned __int8 (__cdecl *)(int, int))-1 )
    return -1;
  do
  {
    v4 = 32 * (_DWORD)v3;
    if ( (*this)(a2, (int)this[1] + 32 * (_DWORD)v3 + 16) )
    {
      if ( (dword_10430764 & 1) == 0 )
      {
        dword_10430764 |= 1u;
        dword_10430754 = -1;
        dword_10430758 = -1;
        dword_1043075C = -1;
        dword_10430760 = 1;
      }
      v3 = (unsigned __int8 (__cdecl *)(int, int))*((_DWORD *)this[1] + 8 * (_DWORD)v3);
    }
    else
    {
      if ( !(*this)((int)this[1] + v4 + 16, a2) )
        return (int)v3;
      if ( (dword_10430764 & 1) == 0 )
      {
        dword_10430764 |= 1u;
        dword_10430754 = -1;
        dword_10430758 = -1;
        dword_1043075C = -1;
        dword_10430760 = 1;
      }
      v3 = *(unsigned __int8 (__cdecl **)(int, int))((char *)this[1] + v4 + 4);
    }
  }
  while ( v3 != (unsigned __int8 (__cdecl *)(int, int))-1 );
  return (int)v3;
}
