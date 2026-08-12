char __stdcall sub_10107D70(int a1)
{
  _BYTE *v1; // eax
  _BYTE *v2; // ebx
  int i; // edi
  _BYTE *v4; // esi

  v1 = (_BYTE *)sub_100422D0();
  if ( v1 )
  {
    v1 = (_BYTE *)(*(int (__thiscall **)(int *))(*off_103DC72C[0] + 68))(off_103DC72C[0]);
    if ( v1 )
    {
      v1 = (_BYTE *)((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC);
      v2 = v1;
      for ( i = 0; i < (int)v2; ++i )
      {
        v1 = (_BYTE *)((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, i);
        v4 = v1;
        if ( v1 )
        {
          LOBYTE(v1) = sub_10034D10(v1);
          if ( (_BYTE)v1 )
            LOBYTE(v1) = (*(int (__thiscall **)(_BYTE *, const char *, int, _DWORD))(*(_DWORD *)v4 + 444))(
                           v4,
                           "RestoreEntityToPredictedFrame",
                           a1,
                           0);
        }
      }
    }
  }
  return (char)v1;
}
