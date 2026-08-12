char __thiscall sub_10380C00(int this, float a2)
{
  double v2; // st7
  int v3; // eax
  bool v4; // zf

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3640) )
  {
    v3 = *(_DWORD *)(this + 2380);
    if ( v3 == 6 )
    {
      v2 = 150.0;
    }
    else if ( v3 == dword_106E98B0 )
    {
      v2 = 150.0;
    }
    else
    {
      v2 = 500.0;
    }
  }
  else
  {
    v2 = 75.0;
  }
  v4 = *(_BYTE *)(this + 3664) == 0;
  *(float *)(this + 800) = v2;
  if ( v4 )
    sub_10380940((float *)this, a2, (float *)(this + 716), 1);
  else
    sub_10380940((float *)this, a2, (float *)(this + 3624), 1);
  return 1;
}
