unsigned __int8 (__cdecl **__thiscall sub_100C0DC0(
        unsigned __int8 (__cdecl **this)(int, int),
        int a2,
        unsigned __int8 (__cdecl **a3)(int, int),
        _BYTE *a4))(int, int)
{
  unsigned __int8 (__cdecl **result)(int, int); // eax
  unsigned __int8 (__cdecl *v6)(int, int); // edi
  int v7; // esi
  unsigned __int8 (__cdecl *v8)(int, int); // eax

  result = a3;
  v6 = this[4];
  *a3 = (unsigned __int8 (__cdecl *)(int, int))-1;
  *a4 = 0;
  while ( v6 != (unsigned __int8 (__cdecl *)(int, int))-1 )
  {
    *a3 = v6;
    v7 = 32 * (_DWORD)v6;
    if ( (*this)(a2, (int)this[1] + 32 * (_DWORD)v6 + 16) )
    {
      *a4 = 1;
      if ( (dword_10430764 & 1) == 0 )
      {
        dword_10430764 |= 1u;
        dword_10430754 = -1;
        dword_10430758 = -1;
        dword_1043075C = -1;
        dword_10430760 = 1;
      }
      v8 = this[1];
      v6 = (unsigned __int8 (__cdecl *)(int, int))*((_DWORD *)v8 + 8 * (_DWORD)v6);
      result = (unsigned __int8 (__cdecl **)(int, int))((char *)v8 + v7);
    }
    else
    {
      *a4 = 0;
      if ( (dword_10430764 & 1) == 0 )
      {
        dword_10430764 |= 1u;
        dword_10430754 = -1;
        dword_10430758 = -1;
        dword_1043075C = -1;
        dword_10430760 = 1;
      }
      result = (unsigned __int8 (__cdecl **)(int, int))((char *)this[1] + v7);
      v6 = result[1];
    }
  }
  return result;
}
