void __thiscall sub_1024AAA0(float *this)
{
  double v2; // st7
  double v3; // st6
  double v4; // st7
  int v5; // ecx

  sub_10189470(this);
  if ( byte_106B4F38 )
  {
    sub_10189470(this);
    return;
  }
  v2 = *(float *)(dword_106B77A4 + 44) * 60.0;
  if ( 0.0 == v2 )
  {
    v4 = 0.0;
  }
  else
  {
    v3 = v2;
    v4 = 0.0;
    if ( v3 <= *(float *)(dword_106B31C8 + 12) )
    {
LABEL_12:
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 536))(this);
      return;
    }
  }
  if ( *(float *)(dword_106B2E14 + 44) != v4 )
  {
    v5 = 0;
    if ( dword_106C6860 > 0 )
    {
      while ( (double)dword_106C65E0[v5] < *(float *)(dword_106B2E14 + 44) )
      {
        if ( ++v5 >= dword_106C6860 )
          return;
      }
      goto LABEL_12;
    }
  }
}
