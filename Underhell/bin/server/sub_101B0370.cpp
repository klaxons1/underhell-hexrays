float *__cdecl sub_101B0370(float *a1, int a2, int a3)
{
  float *result; // eax
  float v4[3]; // [esp+0h] [ebp-18h] BYREF
  float v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)a2 + 216))(a2, v5, 0);
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)a3 + 216))(a3, v4, 0);
  result = a1;
  *a1 = v5[0] - v4[0];
  a1[1] = v5[1] - v4[1];
  a1[2] = v5[2] - v4[2];
  return result;
}
