char __thiscall sub_10107BB0(_DWORD *this, int a2, int a3)
{
  int *v3; // eax
  int *v4; // ebx
  int i; // edi
  int *v6; // esi

  this[7] = a3;
  if ( (*(int (__thiscall **)(int *))(*off_103DC72C[0] + 68))(off_103DC72C[0]) )
  {
    v3 = (int *)sub_100422D0();
    if ( v3 )
    {
      v3 = (int *)((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC);
      v4 = v3;
      for ( i = 0; i < (int)v4; ++i )
      {
        v3 = (int *)((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, i);
        v6 = v3;
        if ( v3 )
        {
          LOBYTE(v3) = sub_10034D10(v3);
          if ( (_BYTE)v3 )
            LOBYTE(v3) = sub_10034D20(v6, a2);
        }
      }
    }
  }
  else
  {
    LOBYTE(v3) = (unsigned __int8)sub_10107B20();
  }
  return (char)v3;
}
