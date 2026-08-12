int __thiscall sub_10384710(int this, float *a2)
{
  double v3; // st6
  double v4; // st6
  double v5; // st6
  int result; // eax
  int v7; // edx
  _BYTE v8[48]; // [esp+0h] [ebp-C0h] BYREF
  int v9; // [esp+30h] [ebp-90h]
  float v10[12]; // [esp+54h] [ebp-6Ch] BYREF
  int v11; // [esp+84h] [ebp-3Ch]
  int v12; // [esp+88h] [ebp-38h]
  float v13; // [esp+8Ch] [ebp-34h]
  float v14; // [esp+90h] [ebp-30h]
  float v15; // [esp+94h] [ebp-2Ch]
  int v16; // [esp+98h] [ebp-28h]
  __int16 v17; // [esp+9Ch] [ebp-24h]
  int v18; // [esp+A0h] [ebp-20h]
  int v19; // [esp+A4h] [ebp-1Ch]
  int v20; // [esp+A8h] [ebp-18h]
  char v21; // [esp+ACh] [ebp-14h]
  float v22[3]; // [esp+B4h] [ebp-Ch] BYREF
  int savedregs; // [esp+C0h] [ebp+0h] BYREF

  v10[3] = 0.0;
  v17 = 0;
  v10[4] = 0.0;
  v10[5] = 0.0;
  v10[9] = 0.0;
  v10[10] = 0.0;
  v10[11] = 0.0;
  v14 = 0.0;
  v12 = 0;
  v15 = 0.0;
  v16 = 0;
  v3 = *a2;
  v18 = 0;
  v10[0] = v3;
  v19 = 0;
  v4 = a2[1];
  v20 = 0;
  v10[1] = v4;
  v21 = 0;
  v5 = a2[2];
  v11 = 0;
  v10[2] = v5;
  v10[6] = 0.0;
  v10[7] = 0.0;
  v10[8] = 1.0;
  v13 = 8.0;
  LOBYTE(result) = sub_100E87E0((_BYTE *)this);
  if ( (result & 0x30) != 0 )
    goto LABEL_7;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v7 = *(_DWORD *)(this + 252);
  v22[0] = *(float *)(this + 580);
  v22[1] = *(float *)(this + 584);
  v22[2] = *(float *)(this + 588) - 256.0;
  if ( (v7 & 0x800) != 0 )
    sub_100DAE60(this);
  sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), v22, 48, this, 0, (int)v8);
  result = v9;
  if ( (v9 & 0x30) != 0 )
  {
LABEL_7:
    if ( (result & 0x10) != 0 )
      v11 |= 1u;
    return sub_1028E890((int)"watersplash", (int)v10);
  }
  return result;
}
