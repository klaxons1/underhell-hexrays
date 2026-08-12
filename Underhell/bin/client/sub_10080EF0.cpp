int __stdcall sub_10080EF0(float a1, int a2)
{
  int v2; // eax

  v2 = sub_100422D0();
  if ( v2 )
    return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 828))(v2, LODWORD(a1), a2);
  else
    return 1;
}
