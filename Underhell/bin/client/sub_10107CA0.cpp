char sub_10107CA0()
{
  _BYTE *v0; // eax
  _BYTE *v1; // ebx
  int i; // edi
  _BYTE *v3; // esi

  v0 = (_BYTE *)((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC);
  v1 = v0;
  for ( i = 0; i < (int)v1; ++i )
  {
    v0 = (_BYTE *)((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, i);
    v3 = v0;
    if ( v0 )
    {
      LOBYTE(v0) = sub_10034D10(v0);
      if ( (_BYTE)v0 )
        LOBYTE(v0) = (*(int (__thiscall **)(_BYTE *, const char *, int, _DWORD))(*(_DWORD *)v3 + 444))(
                       v3,
                       "RestoreOriginalEntityState",
                       -1,
                       0);
    }
  }
  return (char)v0;
}
