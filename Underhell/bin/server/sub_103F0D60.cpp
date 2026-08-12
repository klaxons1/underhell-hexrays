int __thiscall sub_103F0D60(unsigned int *this, float a2, float a3, float a4)
{
  unsigned int v5; // eax
  unsigned int *v6; // ebx
  int *v7; // ecx
  _DWORD *v8; // eax
  bool v9; // c0
  double v10; // st7
  double v11; // st6
  double v12; // st5
  char v13; // cl
  int v14; // eax
  unsigned int *v15; // ecx
  int v16; // esi
  int result; // eax
  float v18[3]; // [esp+Ch] [ebp-30h] BYREF
  int v19[3]; // [esp+18h] [ebp-24h] BYREF
  int v20[3]; // [esp+24h] [ebp-18h] BYREF
  float v21; // [esp+30h] [ebp-Ch]
  float v22; // [esp+34h] [ebp-8h]
  float v23; // [esp+38h] [ebp-4h]

  v5 = this[239];
  v6 = this + 239;
  if ( v5 == -1 )
    return 0;
  v7 = &off_1061BE18[4 * (this[239] & 0xFFF) + 1];
  if ( v7[1] != v5 >> 12 )
    return 0;
  if ( !*v7 )
    return 0;
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    return 0;
  v8 = (_DWORD *)sub_10261B20();
  if ( !v8 )
    return 0;
  sub_100F5A30(v8, (int)v18, 0, 0);
  sub_100BF1B0(this - 280, "cargo", (int)v20, (float *)v19, 0, 0);
  v21 = *(float *)v20 - a2;
  v22 = *(float *)&v20[1] - a3;
  v23 = *(float *)&v20[2] - a4;
  v9 = off_10689714() < 180.0;
  v10 = v23;
  v11 = v22;
  v12 = v21;
  if ( !v9 )
    goto LABEL_9;
  if ( *(float *)&v19[1] * v11 + v12 * *(float *)v19 + *(float *)&v19[2] * v10 < 0.1 )
    v13 = 1;
  else
LABEL_9:
    v13 = 0;
  if ( !v13 || v10 * v18[2] + v11 * v18[1] + v12 * v18[0] <= 0.97500002 )
    return 0;
  v14 = sub_1026A890(v6);
  v15 = this - 280;
  v16 = v14;
  sub_103F0C10(v15);
  result = v16;
  *v6 = -1;
  return result;
}
