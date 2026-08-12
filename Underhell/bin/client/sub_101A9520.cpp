int __cdecl sub_101A9520(float *a1, float *a2, float a3)
{
  float v4; // [esp+0h] [ebp-5Ch]
  float v5; // [esp+Ch] [ebp-50h]
  int v6; // [esp+28h] [ebp-34h]

  sub_1017B5F0((int)a2, a1, a2, a2, (int)a3);
  *(float *)&v6 = (float)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
  v5 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
  v4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
  return sub_1008DCF0(a1, a2, v4, 16.0, 32.0, v5, 32.0, 48.0, 0.75, 1.0, COERCE_FLOAT_(0.0), 0.40000001, v6, 0);
}
