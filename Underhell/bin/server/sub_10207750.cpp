void __thiscall sub_10207750(int this)
{
  char v2; // al
  double v3; // st7
  double v4; // st6
  float v5; // [esp+0h] [ebp-18h]
  float v6; // [esp+10h] [ebp-8h]

  sub_100DF330((float *)this);
  if ( (*(_DWORD *)(this + 236) & 0x10000000) != 0 )
  {
    v2 = *(_BYTE *)(this + 225);
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        sub_1011BBD0(this, 255, 255, 255, 0, 0.0);
      }
      else
      {
        v5 = (float)*(int *)(this + 220);
        v3 = sub_1001F0E0(v5, 0.0, 100.0, 64.0, 255.0);
        if ( v3 <= 255.0 )
        {
          v4 = 0.0;
          if ( v3 < 0.0 )
            v3 = 0.0;
        }
        else
        {
          v3 = 255.0;
          v4 = 0.0;
        }
        v6 = v4;
        sub_1011BBD0(this, 0, (int)v3, 0, 0, v6);
      }
    }
    else
    {
      sub_1011BBD0(this, 255, 0, 0, 0, 0.0);
    }
  }
}
