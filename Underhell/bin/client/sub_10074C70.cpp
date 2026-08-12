int __cdecl sub_10074C70(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int result; // eax
  int v6; // esi
  int v7; // eax

  v4 = sub_100E8590();
  result = (*(int (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 8))(v4, a4, 100, 0, 0, 0);
  v6 = result;
  if ( result )
  {
    v7 = sub_100E8590();
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 12))(v7, v6);
  }
  return result;
}
