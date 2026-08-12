int __cdecl sub_103ABBB0(int a1, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = sub_100D6340(4024);
  v3 = v2;
  if ( v2 )
  {
    sub_103ABA30(v2);
    *(_DWORD *)v3 = &CNPC_ClawScanner::`vftable';
    *(_DWORD *)(v3 + 2104) = &CNPC_ClawScanner::`vftable';
    *(_DWORD *)(v3 + 3620) = &CNPC_ClawScanner::`vftable';
    *(_DWORD *)(v3 + 3680) = &CNPC_ClawScanner::`vftable';
    *(_BYTE *)(v3 + 3968) = 1;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
