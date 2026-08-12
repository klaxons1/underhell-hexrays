char __thiscall sub_1023A6F0(int (__thiscall ***this)(_DWORD), char *String2, int a3)
{
  int v3; // eax

  v3 = sub_10239950(this, String2, 0);
  if ( v3 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 44))(v3, a3);
  else
    return 0;
}
