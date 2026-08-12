int __cdecl sub_100A4440(int a1, float *a2, float *a3, float *a4, _WORD *a5, _DWORD *a6, _DWORD *a7, _DWORD *a8)
{
  int v8; // edi
  double v9; // st6
  double v10; // st7
  int v11; // ecx
  int result; // eax

  v8 = sub_1009B7D0((int *)a1);
  *a2 = *(float *)a1;
  a2[1] = *(float *)(a1 + 4);
  a2[2] = *(float *)(a1 + 8);
  *a3 = *(float *)(a1 + 12);
  a3[1] = *(float *)(a1 + 16);
  a3[2] = *(float *)(a1 + 20);
  *a5 = *(_WORD *)(a1 + 72);
  *a7 = *(_DWORD *)(a1 + 80);
  *a8 = *(_DWORD *)(a1 + 84);
  v9 = a2[1] - a3[1];
  v10 = a2[2] - a3[2];
  *a4 = *a2 - *a3;
  a4[1] = v9;
  a4[2] = v10;
  off_103EDFEC();
  v11 = *(unsigned __int16 *)((*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_10436258 + 20))(*(__int16 *)(a1 + 72)) + 72);
  result = v8;
  *a6 = v11;
  return result;
}
