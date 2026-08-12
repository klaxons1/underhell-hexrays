char __stdcall sub_10107D00(int a1, int a2)
{
  char *v2; // eax
  char *v3; // ebx
  int i; // edi
  char *v5; // esi

  v2 = (char *)sub_100422D0();
  if ( v2 )
  {
    v2 = (char *)(*(int (__thiscall **)(int *))(*off_103DC72C[0] + 68))(off_103DC72C[0]);
    if ( v2 )
    {
      v2 = (char *)((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC);
      v3 = v2;
      for ( i = 0; i < (int)v3; ++i )
      {
        v2 = (char *)((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, i);
        v5 = v2;
        if ( v2 )
        {
          LOBYTE(v2) = sub_10034D10(v2);
          if ( (_BYTE)v2 )
            LOBYTE(v2) = sub_1003C6B0(v5, a1, a2);
        }
      }
    }
  }
  return (char)v2;
}
