int __cdecl sub_101AA130(float *a1)
{
  float v2; // [esp+0h] [ebp-50h]
  float v3; // [esp+20h] [ebp-30h]

  v3 = (float)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
  v2 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
  return sub_1008DCF0(
           a1,
           a1 + 6,
           v2,
           24.0,
           32.0,
           0.0,
           0.75,
           1.0,
           0.0,
           0.40000001,
           (float *)LODWORD(v3),
           0.0,
           360,
           COERCE_INT(0.0));
}
