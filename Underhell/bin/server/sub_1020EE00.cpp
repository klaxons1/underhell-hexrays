float *__cdecl sub_1020EE00(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_100D6340(1740);
  v3 = v2;
  if ( v2 )
  {
    sub_1020CE30(v2);
    v3[434] = 0.0;
    *(_DWORD *)v3 = &CPhysicsPropRespawnable::`vftable';
    *((_DWORD *)v3 + 280) = &CPhysicsPropRespawnable::`vftable';
    *((_DWORD *)v3 + 281) = &CPhysicsPropRespawnable::`vftable';
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
