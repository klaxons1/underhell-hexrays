BOOL __stdcall sub_103D1BD0(int a1, int a2, float *a3)
{
  BOOL result; // eax
  int v4; // ecx

  sub_1025F2C0(a3);
  (***(void (__thiscall ****)(_DWORD, char *))(a2 + 28))(*(_DWORD *)(a2 + 28), (char *)a3 + 24);
  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(a2 + 28) + 4))(*(_DWORD *)(a2 + 28), (char *)a3 + 12);
  a3[9] = a3[7] * a3[4] + a3[6] * a3[3] + a3[8] * a3[5];
  *a3 = a3[3] - *(float *)(a2 + 12 * a1 + 32);
  a3[1] = a3[4] - *(float *)(a2 + 12 * a1 + 36);
  result = a1 == 0;
  a3[2] = a3[5] - *(float *)(a2 + 12 * a1 + 40);
  v4 = *(_DWORD *)(a2 + 4 * result + 104);
  a3[11] = 0.0099999998;
  *((_DWORD *)a3 + 19) = v4;
  return result;
}
