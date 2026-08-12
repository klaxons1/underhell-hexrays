int __thiscall sub_101157C0(int this)
{
  float *v2; // ecx
  double v3; // st6
  double v4; // st5
  bool v5; // c0
  bool v6; // c3
  double v7; // st5
  double v8; // st5
  double v9; // rt0
  double v10; // st6
  double v11; // st6
  double v12; // rt1
  double v13; // rt2
  double v14; // st5
  double v15; // st6
  double v16; // st7
  double v17; // rtt
  float v19; // [esp+0h] [ebp-10h]
  float v20; // [esp+Ch] [ebp-4h] BYREF

  if ( *(float *)(this + 804) <= 0.0 )
    return sub_100EC4A0((int *)this, -1.0, off_106156E4);
  v2 = (float *)(this + 840);
  if ( *(float *)(this + 840) <= 0.0
    || *(_BYTE *)(this + 829)
    || 0.0 == *(float *)(this + 824)
    || *(float *)(this + 812) <= 0.0 )
  {
    return sub_100EC4A0((int *)this, -1.0, off_106156E4);
  }
  v3 = *(float *)(this + 804);
  v4 = *(float *)(this + 824);
  v5 = v4 < *(float *)(this + 812);
  v6 = v4 == *(float *)(this + 812);
  v7 = 1.0;
  if ( !v5 && !v6 )
  {
    v8 = *(float *)(this + 812) / *(float *)(this + 824);
    if ( v8 <= 1.0 )
    {
      if ( v8 < 0.0099999998 )
        v8 = 0.0099999998;
    }
    else
    {
      v8 = 1.0;
    }
    v9 = v8 * *(float *)(this + 804);
    v7 = 1.0;
    v3 = v9;
  }
  v10 = (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 820)) / v3;
  if ( v7 >= v10 )
  {
    v12 = v7;
    v7 = v10;
    v11 = v12;
    if ( v7 < 0.0 )
      v7 = 0.0;
  }
  else
  {
    v11 = v7;
  }
  v13 = v7;
  v14 = v11;
  v15 = v13;
  if ( v14 >= *(float *)(this + 812) )
  {
    v17 = v14;
    v14 = 0.0;
    v16 = v17;
    if ( *(float *)(this + 812) >= 0.0 )
      v14 = *(float *)(this + 812);
  }
  else
  {
    v16 = v14;
  }
  *(float *)(this + 812) = v14;
  v20 = v14 * (v16 - v15);
  sub_10115580(v2, &v20);
  v19 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, v19, off_106156E4);
}
