int __cdecl sub_103D36A0(int a1, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = sub_100D6340(1016);
  v3 = v2;
  if ( v2 )
  {
    sub_103D31A0(v2);
    *(float *)(v3 + 1008) = 0.0;
    *(_DWORD *)v3 = &CPointCombineBallLauncher::`vftable';
    *(_BYTE *)(v3 + 800) = 1;
    *(_DWORD *)(v3 + 1004) = 0;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
