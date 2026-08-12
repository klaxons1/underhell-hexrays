int __thiscall sub_1010BB40(_DWORD *this, int a2)
{
  int v4; // esi

  if ( !(*(int (__thiscall **)(int, const char *, _DWORD *, _DWORD, int, int))(*(_DWORD *)a2 + 24))(
          a2,
          "Value",
          this,
          0,
          dword_10614A14,
          dword_10614A18) )
    return 0;
  v4 = this[5];
  if ( v4 )
  {
    while ( (*(int (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 24))(
              a2,
              "EntityOutput",
              v4,
              0,
              dword_106149FC,
              dword_10614A00) )
    {
      v4 = *(_DWORD *)(v4 + 24);
      if ( !v4 )
        return 1;
    }
    return 0;
  }
  return 1;
}
