float *__cdecl sub_1027D4B0(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_100D6340(1412);
  v3 = v2;
  if ( v2 )
  {
    sub_100D4A70(v2);
    v3[303] = 0.0;
    *((_BYTE *)v3 + 1388) = 1;
    v3[305] = 1400.0;
    *((_BYTE *)v3 + 1127) = 0;
    *(_DWORD *)v3 = &CWeaponSniper::`vftable';
    *((_BYTE *)v3 + 1209) = 0;
    *((_BYTE *)v3 + 1408) = 0;
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
