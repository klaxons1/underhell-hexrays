int __thiscall sub_100702E0(float *this)
{
  (*(void (__thiscall **)(float *, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, this + 230, 0, 0);
  if ( 360.0 != this[229] )
    this[229] = cos(this[229] * 0.5 * 0.017453292);
  return sub_10112C00(0);
}
