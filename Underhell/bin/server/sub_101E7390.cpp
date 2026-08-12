double __thiscall sub_101E7390(_DWORD *this)
{
  double v2; // st7
  double v3; // st6
  float v5; // [esp+4h] [ebp-8h]

  v5 = (float)sub_100F5E70(this);
  v2 = (double)sub_101E7300((int)this);
  v3 = v5;
  if ( v5 == v2 || v3 < 0.001 )
    return 1.0;
  else
    return v2 / v3;
}
