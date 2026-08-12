int __thiscall sub_1010BC20(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v6; // esi

  v3 = this[12];
  this[14] = 0;
  if ( v3 )
  {
    v4 = 0;
    do
    {
      this[14] = ++v4;
      v3 = *(_DWORD *)(v3 + 48);
    }
    while ( v3 );
  }
  if ( !(*(int (__thiscall **)(int, const char *, _DWORD *, _DWORD, int, int))(*(_DWORD *)a2 + 24))(
          a2,
          "EventQueue",
          this,
          0,
          dword_10614A34,
          dword_10614A38) )
    return 0;
  v6 = this[12];
  if ( v6 )
  {
    while ( (*(int (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 24))(
              a2,
              "PEvent",
              v6,
              0,
              dword_10614A4C,
              dword_10614A50) )
    {
      v6 = *(_DWORD *)(v6 + 48);
      if ( !v6 )
        return 1;
    }
    return 0;
  }
  return 1;
}
