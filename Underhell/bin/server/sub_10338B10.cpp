int __cdecl sub_10338B10(int a1, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = sub_100D6340(1400);
  v3 = v2;
  if ( v2 )
  {
    sub_103F8440(v2);
    *(_DWORD *)v3 = &CMattsPipe::`vftable';
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
