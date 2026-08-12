void __cdecl sub_101FB2A0(int a1)
{
  int v1; // ecx
  int v2; // eax

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 424);
    if ( v1 )
    {
      if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v1 + 76))(v1) & 4) != 0 )
      {
        v2 = sub_10261B20();
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 1476))(v2, a1);
      }
    }
  }
}
