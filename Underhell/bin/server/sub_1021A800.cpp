int __cdecl sub_1021A800(int a1)
{
  int v1; // eax
  int v2; // esi

  v1 = sub_10184390(12);
  if ( v1 )
  {
    *(_BYTE *)(v1 + 4) = 0;
    *(_DWORD *)(v1 + 8) = 0;
    v2 = v1;
    *(_DWORD *)v1 = &CRegistry::`vftable';
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 44))(v1, a1);
    return v2;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 44))(0, a1);
    return 0;
  }
}
