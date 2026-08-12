double __thiscall sub_100138E0(_DWORD *this)
{
  double v2; // st7
  double v3; // st6
  float v5; // [esp+4h] [ebp-4h]

  v5 = (float)sub_10012950(this);
  v2 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 952))(this);
  v3 = v5;
  if ( v5 == v2 || v3 < 0.001 )
    return 1.0;
  else
    return v2 / v3;
}
