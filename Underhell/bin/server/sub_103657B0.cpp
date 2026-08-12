int __cdecl sub_103657B0(int a1, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = sub_100D6340(3780);
  v3 = v2;
  if ( v2 )
  {
    sub_103655D0(v2);
    *(_DWORD *)v3 = &CNPC_EnemyFinderCombineCannon::`vftable';
    *(_DWORD *)(v3 + 2104) = &CNPC_EnemyFinderCombineCannon::`vftable';
    *(float *)(v3 + 3760) = *(float *)(dword_106B31C8 + 12);
    *(float *)(v3 + 3764) = -1.0;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
