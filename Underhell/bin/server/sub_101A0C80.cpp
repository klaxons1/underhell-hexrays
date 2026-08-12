double __cdecl sub_101A0C80(float *a1)
{
  _BYTE v2[20]; // [esp+4h] [ebp-B4h] BYREF
  float v3; // [esp+18h] [ebp-A0h]
  float v4; // [esp+30h] [ebp-88h]
  int v5; // [esp+50h] [ebp-68h]
  _BYTE v6[20]; // [esp+58h] [ebp-60h] BYREF
  float v7; // [esp+6Ch] [ebp-4Ch]
  float v8; // [esp+84h] [ebp-34h]
  float v9; // [esp+ACh] [ebp-Ch] BYREF
  float v10; // [esp+B0h] [ebp-8h]
  float v11; // [esp+B4h] [ebp-4h]
  int savedregs; // [esp+B8h] [ebp+0h] BYREF

  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2] - 2048.0;
  sub_1002A5F0((int)&savedregs, (int)a1, a1, &v9, 147467, 0, 0, (int)v6);
  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2] - 2048.0;
  sub_1002A5F0((int)&savedregs, (int)a1, a1, &v9, 33701899, 0, 0, (int)v2);
  if ( v8 > (double)v4 && v5 && (*(_DWORD *)(v5 + 256) & 0x1000000) != 0 )
    return v3;
  else
    return v7;
}
