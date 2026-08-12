char *__cdecl sub_10271E50(int a1, int a2, int a3, int a4, int a5)
{
  char *v5; // esi
  int v6; // ebx
  int *v7; // ecx
  char *result; // eax
  int *v9; // ecx

  v5 = sub_100E3960(a1, &flt_106F1CA8, &flt_106F1CB4, a3);
  v6 = (*(int (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)dword_106B3230 + 32))(
         dword_106B3230,
         1,
         a2,
         -1,
         0);
  if ( *((_DWORD *)v5 + 203) != v6 )
  {
    if ( v5[84] )
    {
      v5[88] |= 1u;
    }
    else
    {
      v7 = (int *)*((_DWORD *)v5 + 6);
      if ( v7 )
        sub_100194B0(v7, 812);
    }
    *((_DWORD *)v5 + 203) = v6;
  }
  sub_100EACE0((unsigned __int16 *)v5, a3, 1);
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v5 + 76))(v5, a4);
  result = v5;
  if ( *((_DWORD *)v5 + 204) != a5 )
  {
    if ( v5[84] )
    {
      v5[88] |= 1u;
      *((_DWORD *)v5 + 204) = a5;
    }
    else
    {
      v9 = (int *)*((_DWORD *)v5 + 6);
      if ( v9 )
        sub_100194B0(v9, 816);
      *((_DWORD *)v5 + 204) = a5;
      return v5;
    }
  }
  return result;
}
