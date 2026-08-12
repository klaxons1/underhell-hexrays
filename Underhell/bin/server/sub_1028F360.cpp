int __cdecl sub_1028F360(int a1, float a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax

  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a3 + 24));
  if ( dword_106D887C != v6 )
    dword_106D887C = v6;
  if ( dword_106D8880 != a4 )
    dword_106D8880 = a4;
  if ( dword_106D8884 != a5 )
    dword_106D8884 = a5;
  if ( dword_106D8888 != a6 )
    dword_106D8888 = a6;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D8870, a1, a2);
}
