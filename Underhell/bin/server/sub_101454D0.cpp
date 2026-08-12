void __thiscall sub_101454D0(int this, float a2, float *a3, float a4)
{
  double v4; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st6
  float v10; // [esp+0h] [ebp-24h]
  float v11; // [esp+Ch] [ebp-18h]
  float v12; // [esp+14h] [ebp-10h]
  float v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+20h] [ebp-4h]
  float v15; // [esp+30h] [ebp+Ch]
  float v16; // [esp+34h] [ebp+10h]

  v4 = a4 * 0.0024999999;
  v13 = v4;
  if ( v4 <= 0.0 )
    v6 = -1.0;
  else
    v6 = 1.0;
  v16 = v6;
  v14 = *(float *)(dword_106B141C + 44);
  v7 = sub_10134630(a2, a3[157], a3[158], a3[153], a3[154]) * a3[162];
  *(_BYTE *)(this + 33) = 1;
  v15 = v7;
  v10 = fabs(v13);
  v8 = sub_10134630(v10, v14, 1.0, 0.0, 1.0) * v16;
  v9 = *(float *)(dword_106B31C8 + 16) * v15;
  if ( 0.0 != v9 )
  {
    v12 = v9;
    v11 = v8;
    sub_10424B10(v11, *(float *)(this + 16), v12);
  }
  *(float *)(this + 16) = v8;
}
