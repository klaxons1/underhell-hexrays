int __cdecl sub_10130AC0(float *a1, float *a2, int a3, int a4, int a5, int a6, float a7)
{
  float v8[3]; // [esp+4h] [ebp-18h] BYREF
  float v9[3]; // [esp+10h] [ebp-Ch] BYREF

  v9[0] = *a2;
  v9[1] = a2[1];
  v9[2] = a2[2] + 0.1;
  v8[0] = *a1;
  v8[1] = a1[1];
  v8[2] = a1[2] + 0.1;
  return (*(int (__thiscall **)(int, float *, float *, int, int, int, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
           dword_1041316C,
           v8,
           v9,
           a3,
           a4,
           a5,
           a6,
           LODWORD(a7));
}
