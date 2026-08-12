int __thiscall sub_10009730(unsigned __int8 (__cdecl **this)(int, int), int a2)
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
      if ( (dword_10401160 & 1) == 0 )
      {
        dword_10401160 |= 1u;
        dword_10401150 = -1;
        dword_10401154 = -1;
        dword_10401158 = -1;
        dword_1040115C = 1;
      }
      v3 = (unsigned __int8 (__cdecl *)(int, int))*((_DWORD *)this[1] + 6 * (_DWORD)v3);
    }
    else
    {
      if ( !(*this)((int)this[1] + v4 + 16, a2) )
        return (int)v3;
      if ( (dword_10401160 & 1) == 0 )
      {
        dword_10401160 |= 1u;
        dword_10401150 = -1;
        dword_10401154 = -1;
        dword_10401158 = -1;
        dword_1040115C = 1;
      }
      v3 = *(unsigned __int8 (__cdecl **)(int, int))((char *)this[1] + v4 + 4);
    }
  }
  while ( v3 != (unsigned __int8 (__cdecl *)(int, int))-1 );
  return (int)v3;
}
