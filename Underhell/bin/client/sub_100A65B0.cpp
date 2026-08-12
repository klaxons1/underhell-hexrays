void __cdecl sub_100A65B0(char a1, int a2, int a3, int a4, float *a5)
{
  float *v5; // esi
  float *v6; // edi
  double v7; // st6
  double v8; // st7
  double v9; // st6
  float v10[3]; // [esp+8h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int, float *, char *, int))(*(_DWORD *)dword_1041315C + 4))(dword_1041315C, v10, &a1, 1);
  v5 = a5;
  v6 = (float *)a4;
  sub_100A64D0(v10, a4, a5);
  if ( v5 )
  {
    v7 = *v5 * 4.0;
    if ( v7 > 1.0 )
      v7 = 1.0;
    *v5 = v7;
    if ( v7 < 0.25 )
      *v5 = 0.25;
  }
  if ( v6 )
  {
    v8 = 0.25 * v6[2] + 0.75;
    v9 = v6[1] * 0.25 + 0.75;
    *v6 = *v6 * 0.25 + 0.75;
    v6[1] = v9;
    v6[2] = v8;
  }
}
