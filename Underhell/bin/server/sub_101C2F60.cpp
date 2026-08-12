int __thiscall sub_101C2F60(int this, float a2)
{
  double v3; // st7
  int v4; // eax
  float v5; // edx
  float v6; // eax
  double v7; // st7
  float v8; // edx
  float v10[3]; // [esp+14h] [ebp-1Ch] BYREF
  float v11[2]; // [esp+20h] [ebp-10h] BYREF
  float v12; // [esp+28h] [ebp-8h]
  float v13; // [esp+2Ch] [ebp-4h]

  if ( 0.0 == *(float *)(this + 552) )
    v3 = 1.0;
  else
    v3 = *(float *)(this + 552);
  v4 = *(_DWORD *)(this + 252);
  v13 = v3;
  if ( (v4 & 0x1000) != 0 )
    sub_100DAFD0(this);
  v5 = *(float *)(this + 480);
  v6 = *(float *)(this + 484);
  v11[0] = *(float *)(this + 476);
  v12 = v6;
  v11[1] = v5;
  v7 = v6 - v13 * 0.5 * *(float *)(dword_106B6F0C + 44) * a2;
  v12 = v7;
  v12 = v7 + *(float *)(dword_106B31C8 + 16) * *(float *)(this + 472);
  sub_100DD660(this, v11);
  v8 = *(float *)(this + 468);
  v10[0] = *(float *)(this + 464);
  v10[1] = v8;
  v10[2] = 0.0;
  sub_100D9710((float *)(this + 464), v10);
  return sub_101C4870(this);
}
