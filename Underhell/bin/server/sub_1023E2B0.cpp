void __thiscall sub_1023E2B0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v4; // eax
  char *v5; // ecx
  int v6; // eax
  char *v7; // ecx

  v2 = a2;
  if ( a2 )
  {
    if ( a2[17] )
    {
      v4 = sub_1023DDA0(a2);
      if ( v4 >= 0 )
      {
        v5 = (char *)v2[11];
        if ( !v5 )
          v5 = (char *)String;
        sub_1023AF30(v4, v2[14], v5);
      }
      v2[17] = 0;
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 16))(this, v2);
    a2 = v2;
    sub_1023E0F0(this + 4, &a2);
    if ( v2[17] )
    {
      v6 = sub_1023DDA0(v2);
      if ( v6 >= 0 )
      {
        v7 = (char *)v2[11];
        if ( !v7 )
          v7 = (char *)String;
        sub_1023AF30(v6, v2[14], v7);
      }
      v2[17] = 0;
    }
  }
}
