float *__cdecl sub_1005E000(int a1, int a2)
{
  float *v2; // esi
  float v3; // eax
  void (__thiscall *v4)(float *, int); // edx

  v2 = (float *)sub_100D6340(824);
  if ( v2 )
  {
    sub_100E33C0(0);
    *(_DWORD *)v2 = &CAI_BattleLine::`vftable';
    v2[202] = 0.0;
    v3 = *v2;
    v2[203] = 0.0;
    v4 = *(void (__thiscall **)(float *, int))(LODWORD(v3) + 108);
    v2[204] = 0.0;
    v2[205] = -1.0;
    v4(v2, a2);
    return v2;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
