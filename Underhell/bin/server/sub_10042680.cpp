double __thiscall sub_10042680(_DWORD *this)
{
  double v2; // st7
  double v4; // st7
  float v5; // [esp+4h] [ebp-4h]

  v2 = sub_100827D0(this[647]);
  v5 = v2;
  if ( v2 < 0.0 )
    return -1.0;
  v4 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 720))(this);
  if ( v4 <= 0.0 || v5 <= 0.0 )
    return 0.0;
  else
    return v5 / v4;
}
