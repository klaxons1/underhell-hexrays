bool __thiscall sub_102E84A0(int this, int a2)
{
  float v3; // ecx
  float *v4; // eax
  double v5; // st5
  double v6; // st6
  double v7; // st6
  float v9[3]; // [esp+8h] [ebp-48h] BYREF
  float v10[3]; // [esp+14h] [ebp-3Ch] BYREF
  float v11[3]; // [esp+20h] [ebp-30h] BYREF
  float v12; // [esp+2Ch] [ebp-24h]
  float v13; // [esp+30h] [ebp-20h]
  float v14; // [esp+34h] [ebp-1Ch]
  float v15; // [esp+38h] [ebp-18h]
  float v16; // [esp+3Ch] [ebp-14h]
  float v17; // [esp+40h] [ebp-10h]
  float v18; // [esp+44h] [ebp-Ch]
  float v19; // [esp+48h] [ebp-8h]
  float v20; // [esp+4Ch] [ebp-4h]

  if ( !a2 )
    return 0;
  sub_1014EC90(a2, v10);
  sub_1014ECE0(a2, v9);
  sub_10424670(*(_DWORD *)(this + 8) + 152, v9, v10, v11, 0);
  v3 = *(float *)(this + 28);
  v18 = *(float *)(this + 24);
  v4 = *(float **)(this + 8);
  v20 = 0.0;
  v19 = v3;
  v5 = v4[39] - 8.0 * v3;
  v6 = v4[40];
  v12 = v11[0] - (v4[38] - v18 * 8.0);
  v15 = v12;
  v13 = v11[1] - v5;
  v16 = v13;
  v14 = v11[2] - v6;
  v17 = 0.0;
  off_10689714();
  off_10689714();
  v7 = *(_DWORD *)(dword_106E1804 + 48) ? -0.99 : 0.0;
  return v7 <= v16 * v19 + v18 * v15 + v17 * v20;
}
