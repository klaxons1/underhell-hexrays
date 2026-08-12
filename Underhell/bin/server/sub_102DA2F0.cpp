char __stdcall sub_102DA2F0(int a1)
{
  char result; // al
  int v2; // eax

  if ( !*(_DWORD *)(dword_106DEB2C + 48) )
    return 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 284))(a1);
  if ( result )
  {
    v2 = sub_100D7680(a1);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 1672))(v2) >= 0;
  }
  return result;
}
