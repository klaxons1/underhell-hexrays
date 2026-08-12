void __thiscall sub_10223D20(_DWORD *this, __int64 a2)
{
  const char *v3; // eax
  int i; // edi
  _DWORD *v5; // eax
  int j; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax

  if ( this[244] )
  {
    v3 = (const char *)this[201];
    if ( !v3 )
      v3 = String;
    sub_1022F660("%s : %8.2f:  clearing events\n", (char)v3);
    for ( i = 0; i < sub_1041CB40(this[244]); ++i )
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*this + 896))(this, i);
      if ( v5 )
        sub_100EEFE0(v5, a2, SHIDWORD(a2));
    }
    for ( j = 0; j < sub_1016BFC0((_DWORD *)a2); ++j )
    {
      v7 = sub_1041CBF0(j);
      v8 = v7;
      if ( v7 && sub_10418360(v7) == 11 && !(unsigned __int8)sub_1041CAA0(a2) )
      {
        v9 = sub_104185B0(v8);
        if ( v9 )
          sub_10223D20(v9, HIDWORD(a2));
      }
    }
  }
}
