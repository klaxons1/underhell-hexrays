void __cdecl sub_102232A0(int a1, float *a2, int a3, int a4)
{
  double v5; // st7
  int v6; // ecx
  float v7; // [esp+1Ch] [ebp-18h]
  float v8[3]; // [esp+28h] [ebp-Ch] BYREF
  float v9; // [esp+40h] [ebp+Ch]

  v5 = *(float *)(a3 + 24);
  v6 = 17 * *(_DWORD *)(a3 + 36);
  v8[0] = *(float *)(a1 + 68 * *(_DWORD *)(a3 + 36) + 88);
  v8[1] = *(float *)(a1 + 4 * v6 + 92);
  v8[2] = *(float *)(a1 + 4 * v6 + 96);
  v7 = v5;
  v9 = ((double (__stdcall *)(int, float *, _DWORD))*(_DWORD *)(**((_DWORD **)off_103EE614 + 60) + 56))(
         a4,
         v8,
         LODWORD(v7));
  *a2 = sub_100260E0(v9, *(float *)a3, *(float *)(a3 + 4), *(float *)(a3 + 8), *(float *)(a3 + 12));
  a2[1] = sub_100260E0(v9, *(float *)a3, *(float *)(a3 + 4), *(float *)(a3 + 16), *(float *)(a3 + 20));
}
