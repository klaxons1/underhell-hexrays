void __thiscall sub_101C6F70(int this, float *a2)
{
  float v3; // edx
  float v4; // eax
  double v6; // st7
  int v7; // edx
  float *v8; // ecx
  double v9; // st7
  double v10; // st5
  float v11; // edx
  float v12[3]; // [esp+14h] [ebp-18h] BYREF
  float v13; // [esp+20h] [ebp-Ch] BYREF
  float v14; // [esp+24h] [ebp-8h]
  float v15; // [esp+28h] [ebp-4h]
  float v16; // [esp+34h] [ebp+8h]

  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v3 = *(float *)(this + 480);
  v4 = *(float *)(this + 484);
  v13 = *(float *)(this + 476);
  v6 = v13 + *(float *)(this + 464);
  v14 = v3;
  v7 = dword_106B31C8;
  v8 = (float *)(this + 464);
  v15 = v4;
  *a2 = v6 * *(float *)(dword_106B31C8 + 16);
  a2[1] = (*(float *)(this + 468) + v14) * *(float *)(v7 + 16);
  if ( (*(_BYTE *)(this + 256) & 1) != 0 )
  {
    a2[2] = *(float *)(this + 472) * *(float *)(v7 + 16);
  }
  else
  {
    v9 = *(float *)(this + 552);
    if ( 0.0 == v9 )
      v9 = 1.0;
    v10 = v15 - v9 * *(float *)(dword_106B6F0C + 44) * *(float *)(v7 + 16);
    v16 = v10;
    a2[2] = ((v15 + v10) * 0.5 + *(float *)(this + 472)) * *(float *)(v7 + 16);
    v11 = *(float *)(this + 468);
    v12[0] = *v8;
    v12[1] = v11;
    v12[2] = 0.0;
    sub_100D9710(v8, v12);
    v15 = v16;
    sub_100DD660(this, &v13);
    sub_101C4870(this);
  }
}
