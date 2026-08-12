void __cdecl sub_104044B0(int a1, int a2)
{
  if ( a2 )
    *(_DWORD *)(a1 + 892) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(a1 + 892) = -1;
}
