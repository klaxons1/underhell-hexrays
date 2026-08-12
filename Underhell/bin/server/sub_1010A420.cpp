void __thiscall sub_1010A420(int this, float a2, char a3)
{
  double v4; // st7
  int v5; // ecx
  bool v6; // sf
  double v7; // st7
  float v8[3]; // [esp+8h] [ebp-Ch] BYREF

  sub_100D8290((float *)this, 0.1);
  v4 = a2;
  v5 = *(_DWORD *)(this + 1284);
  v6 = v5 < 0;
  if ( v5 > 0 )
  {
    if ( v4 >= 1.0 )
    {
      sub_100D7260((float *)this, &flt_106F1CB4);
      sub_100E11A0(this, (float *)(this + 1260));
      sub_1010DD80(this, this, 0.0);
      return;
    }
    v6 = v5 < 0;
  }
  if ( v6 && v4 <= 0.0 )
  {
    sub_100D7260((float *)this, &flt_106F1CB4);
    sub_100E11A0(this, (float *)(this + 1248));
    sub_1010DD80(this, this, 0.0);
  }
  else
  {
    if ( a3 )
      sub_1010A310((_DWORD *)this);
    v7 = (double)*(int *)(this + 1284) * *(float *)(this + 108);
    v8[0] = *(float *)(this + 840) * v7;
    v8[1] = *(float *)(this + 844) * v7;
    v8[2] = v7 * *(float *)(this + 848);
    sub_100D7260((float *)this, v8);
    *(_DWORD *)(this + 4) = sub_10109890;
  }
}
