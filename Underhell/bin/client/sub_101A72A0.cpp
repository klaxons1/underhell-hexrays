int __thiscall sub_101A72A0(int this, float a2, float *a3, int a4)
{
  double v4; // st7
  double v5; // st7
  int v6; // ecx
  double v7; // st6
  double v8; // st5
  double v9; // st4
  double v10; // st6
  double v11; // st5
  double v12; // st5
  double v13; // st5
  float v15; // [esp+0h] [ebp-E8h]
  _BYTE v16[64]; // [esp+4h] [ebp-E4h] BYREF
  int v17[16]; // [esp+44h] [ebp-A4h] BYREF
  float v18[16]; // [esp+84h] [ebp-64h] BYREF
  float v19; // [esp+C4h] [ebp-24h]
  float v20; // [esp+C8h] [ebp-20h]
  float v21; // [esp+CCh] [ebp-1Ch]
  float v22; // [esp+D0h] [ebp-18h]
  float v23; // [esp+D4h] [ebp-14h]
  float v24; // [esp+D8h] [ebp-10h]
  int v25; // [esp+DCh] [ebp-Ch] BYREF
  float v26; // [esp+E0h] [ebp-8h]
  float v27; // [esp+E4h] [ebp-4h]
  float v28; // [esp+F0h] [ebp+8h]

  v4 = a2 - *(float *)(this + 60);
  v28 = v4;
  if ( v4 > *(float *)(this + 52) )
  {
    v4 = *(float *)(this + 52);
    v28 = *(float *)(this + 52);
  }
  if ( *(_BYTE *)(this + 76) || *(_BYTE *)(this + 112) )
  {
    v11 = *(float *)(this + 72) * v4;
    *a3 = v11 * *(float *)(this + 80) + *(float *)(this + 4);
    a3[1] = *(float *)(this + 84) * v11 + *(float *)(this + 8);
    v12 = v11 * *(float *)(this + 88) + *(float *)(this + 12);
    a3[2] = v12;
    a3[2] = v12 + (*(float *)(this + 68) * 0.5 * v4 + *(float *)(this + 64)) * v4;
    v13 = *(float *)(this + 88) * 0.0;
    v19 = *(float *)(this + 84) - v13;
    v20 = v13 - *(float *)(this + 80);
    v21 = *(float *)(this + 80) * 0.0 - 0.0 * *(float *)(this + 84);
    v22 = *(float *)(this + 80) * -1.0;
    v23 = -1.0 * *(float *)(this + 84);
    v24 = -((v4 * *(float *)(this + 68) + *(float *)(this + 64)) / *(float *)(this + 72));
    off_103EDFEC();
    *(float *)&v25 = v23 * v21 - v20 * v24;
    v26 = v19 * v24 - v21 * v22;
    v18[0] = v22;
    v18[4] = v23;
    v18[8] = v24;
    v18[1] = v19;
    v18[5] = v20;
    v18[9] = v21;
    v18[2] = *(float *)&v25;
    v18[6] = v26;
    v18[10] = v20 * v22 - v23 * v19;
  }
  else
  {
    v5 = v4 - *(float *)(this + 92);
    v6 = this + 40;
    v28 = v5;
    v7 = *(float *)(v6 + 16);
    v8 = *(float *)(v6 - 12) * v7;
    v9 = *(float *)(v6 - 8) * v7;
    v10 = v7 * *(float *)(v6 - 4);
    *a3 = v8 * v5 + *(float *)(v6 - 24);
    a3[1] = v9 * v5 + *(float *)(v6 - 20);
    a3[2] = v5 * v10 + *(float *)(v6 - 16);
    sub_101F1F10(v6, v18);
  }
  *(float *)&v25 = 1.0;
  v26 = 0.0;
  v27 = 0.0;
  v15 = v28 * 90.0;
  sub_101F2440((int)v17, (int)&v25, v15);
  sub_101F1FF0(v18, v17, v16);
  return sub_101ED7B0(v16, a4);
}
