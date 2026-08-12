int __cdecl sub_100D9880(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 208))(a2);
  if ( !v3 || *(_BYTE *)(v3 + 1024) )
    return 0;
  else
    return a3;
}
