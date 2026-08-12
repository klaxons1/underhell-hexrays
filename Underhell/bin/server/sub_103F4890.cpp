float *__cdecl sub_103F4890(int a1, int a2)
{
  int v2; // eax
  float *v3; // esi

  v2 = sub_100D6340(1412);
  v3 = (float *)v2;
  if ( v2 )
  {
    sub_102B0D60(v2);
    v3[352] = 0.0;
    *(_DWORD *)v3 = &CWeaponAlyxGun::`vftable';
    v3[303] = 60.0;
    v3[305] = 2048.0;
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
