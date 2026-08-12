bool __cdecl sub_101DCB30(int a1, float *a2, float *a3)
{
  double v3; // st1
  double v4; // st6
  double v5; // st1
  double v6; // st2
  double v7; // st4
  double v8; // st3
  double v9; // st5
  double v10; // st4
  float v12; // [esp+0h] [ebp-Ch] BYREF
  float v13; // [esp+4h] [ebp-8h]
  float v14; // [esp+8h] [ebp-4h]

  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)a1 + 188))(a1, &v12, 0);
  v3 = v12 - *a2;
  v4 = v3 * v3;
  v5 = v13 - a2[1];
  v6 = v14 - a2[2];
  v7 = v13 - a3[1];
  v8 = v12 - *a3;
  v9 = v8 * v8 + v7 * v7;
  v10 = v14 - a3[2];
  return v10 * v10 + v9 > v6 * v6 + v5 * v5 + v4;
}
