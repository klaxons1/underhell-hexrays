float *__stdcall sub_10034760(int a1, float *a2, float *a3)
{
  float *v3; // eax
  int (__thiscall *v4)(int); // edx
  float *result; // eax

  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
  *a2 = *v3;
  a2[1] = v3[1];
  v4 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 40);
  a2[2] = v3[2];
  result = (float *)v4(a1);
  *a3 = *result;
  a3[1] = result[1];
  a3[2] = result[2];
  return result;
}
