int __cdecl sub_10038080(int a1)
{
  int v1; // ecx

  if ( a1 && (v1 = *(_DWORD *)(a1 + 12)) != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 20))(v1);
  else
    return 0;
}
