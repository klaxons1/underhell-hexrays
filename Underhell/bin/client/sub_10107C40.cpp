char sub_10107C40()
{
  _BYTE *v0; // eax
  _BYTE *v1; // ebx
  int i; // esi
  _DWORD *v3; // edi

  v0 = (_BYTE *)(*(int (__thiscall **)(int *))(*off_103DC72C[0] + 68))(off_103DC72C[0]);
  if ( v0 )
  {
    v0 = (_BYTE *)sub_100422D0();
    if ( v0 )
    {
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
            LOBYTE(v0) = sub_100362A0(v3);
        }
      }
    }
  }
  return (char)v0;
}
