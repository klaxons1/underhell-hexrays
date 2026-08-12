int __thiscall sub_10109500(int this)
{
  double v3; // st7
  float v4; // [esp+0h] [ebp-1Ch]
  float v5; // [esp+4h] [ebp-18h]
  float v6[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( sub_10108630(this, this + 728) > 0.0 )
  {
    v3 = -*(float *)(this + 1288);
    v6[0] = *(float *)(this + 840) * v3;
    v6[1] = *(float *)(this + 844) * v3;
    v6[2] = v3 * *(float *)(this + 848);
    sub_100D7260((float *)this, v6);
    sub_100D8290((float *)this, 0.1);
    sub_100EC3F0((_DWORD *)this, (int)sub_10108BA0, 0.0, 0);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
    return sub_100EC4A0((int *)this, v5, 0);
  }
  else
  {
    sub_100D7260((float *)this, &flt_106F1CB4);
    sub_100E11A0(this, (float *)(this + 1248));
    if ( *(_BYTE *)(this + 1280) )
    {
      if ( 0.0 != *(float *)(this + 1124) )
      {
        v4 = 0.0;
        sub_10108AE0((int *)(this + 1124), SLOBYTE(v4), 0, this);
      }
    }
    sub_100D8290((float *)this, -1.0);
    *(_DWORD *)(this + 4) = 0;
    sub_100EC4A0((int *)this, -1.0, 0);
    return sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  }
}
