int __cdecl sub_1027FF00(int a1, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = sub_100D6340(1424);
  v3 = v2;
  if ( v2 )
  {
    sub_102B0D60(v2);
    *(float *)(v3 + 1212) = 0.0;
    *(_DWORD *)v3 = &CWeaponSMGMP7::`vftable';
    *(float *)(v3 + 1220) = 1400.0;
    *(_BYTE *)(v3 + 1209) = 0;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
