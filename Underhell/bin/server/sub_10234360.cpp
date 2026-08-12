float *__cdecl sub_10234360(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_100D6340(3708);
  v3 = v2;
  if ( v2 )
  {
    sub_10041230(v2);
    *(_DWORD *)v3 = &CScriptedTarget::`vftable';
    *((_DWORD *)v3 + 526) = &CScriptedTarget::`vftable';
    v3[918] = NAN;
    v3[915] = 0.0;
    *((_DWORD *)v3 + 919) = 5;
    v3[924] = NAN;
    v3[921] = 0.0;
    *((_DWORD *)v3 + 925) = 5;
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
