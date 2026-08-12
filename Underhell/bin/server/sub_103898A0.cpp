double __thiscall sub_103898A0(_DWORD *this, float a2, float a3, float a4)
{
  bool v5; // cl
  double v6; // st7

  if ( sub_1004AE70(this, 0, 1) && sub_1004AE70(this, 14, 15) )
    return 0.0;
  if ( a2 < 600.0 || a3 < 300.0 )
    return 0.0;
  v5 = sub_10389850(this);
  v6 = v5 ? 0.70700002 : (float)0.866;
  if ( a4 > v6 || a4 < -0.40000001 )
    return 0.0;
  if ( v5 )
    return 1.0;
  return 2.0;
}
