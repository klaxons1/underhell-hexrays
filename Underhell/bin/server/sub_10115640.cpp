int __thiscall sub_10115640(int this)
{
  double v2; // st6
  float *v3; // ecx
  double v4; // st6
  double v5; // st7
  double v6; // st5
  double v7; // st5
  double v8; // rt1
  double v9; // st7
  double v10; // st7
  double v11; // rt2
  double v12; // rtt
  double v13; // st5
  double v14; // st7
  float v16; // [esp+0h] [ebp-10h]
  float v17; // [esp+Ch] [ebp-4h] BYREF

  if ( *(float *)(this + 800) <= 0.0 )
    return sub_100EC4A0((int *)this, -1.0, off_106156E0);
  v2 = *(float *)(this + 824);
  v3 = (float *)(this + 840);
  if ( v2 <= *(float *)(this + 840)
    || !*(_BYTE *)(this + 829)
    || 0.0 == *(float *)(this + 824)
    || *(float *)(this + 824) <= (double)*(float *)(this + 808) )
  {
    return sub_100EC4A0((int *)this, -1.0, off_106156E0);
  }
  v4 = 0.0;
  v5 = *(float *)(this + 800);
  v6 = 1.0;
  if ( *(float *)(this + 808) > 0.0 )
  {
    v7 = *(float *)(this + 808) / *(float *)(this + 824);
    if ( v7 <= 0.99000001 )
    {
      if ( v7 < 0.0 )
        v7 = 0.0;
    }
    else
    {
      v7 = 0.99000001;
    }
    v8 = (1.0 - v7) * *(float *)(this + 800);
    v6 = 1.0;
    v5 = v8;
  }
  v9 = (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 816)) / v5;
  if ( v6 >= v9 )
  {
    v11 = v6;
    v6 = v9;
    v10 = v11;
    if ( v6 < 0.0 )
      v6 = 0.0;
  }
  else
  {
    v10 = v6;
  }
  v12 = v6;
  v13 = v10;
  v14 = v12;
  if ( v13 >= *(float *)(this + 808) )
  {
    if ( *(float *)(this + 808) >= 0.0 )
      v4 = *(float *)(this + 808);
  }
  else
  {
    v4 = v13;
  }
  *(float *)(this + 808) = v4;
  v17 = v14 * (*(float *)(this + 824) - *(float *)(this + 808)) + *(float *)(this + 808);
  sub_10115580(v3, &v17);
  v16 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, v16, off_106156E0);
}
