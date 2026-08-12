int __cdecl sub_10144510(float *a1, float *a2, int a3)
{
  unsigned int v3; // edi
  int v4; // eax
  int v5; // esi

  flt_1043BD14 = *a1;
  flt_1043BD18 = a1[1];
  flt_1043BD1C = a1[2];
  flt_1043BD20 = *a2;
  flt_1043BD24 = a2[1];
  flt_1043BD28 = a2[2];
  sub_10135AA0(a1, (int)a2, &flt_1043BD2C, flt_1043BD38, flt_1043BD44, flt_1043C800);
  v3 = a3;
  dword_103E7E94 = a3;
  byte_1043BD08 = 1;
  (*(void (__thiscall **)(int, float **, float **))(*(_DWORD *)dword_10439968 + 108))(dword_10439968, &a2, &a1);
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)dword_10413178 + 132))(dword_10413178, a2, a1);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v5 = v4;
  if ( v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  (*(void (__thiscall **)(int, int, bool))(*(_DWORD *)v5 + 456))(v5, 10, v3 < 2);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
}
