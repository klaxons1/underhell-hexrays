char __thiscall sub_10394530(_DWORD **this, int a2, float *a3)
{
  float *v4; // edi
  char result; // al
  float v6; // [esp+4h] [ebp-14h]
  _DWORD *v7; // [esp+20h] [ebp+8h]

  dword_106EA24C = 2;
  v4 = (float *)(a2 + 36);
  result = sub_100B32C0(this[704], a2 + 36, 0.0, a3);
  if ( !result )
  {
    v7 = this[704];
    v6 = ((double (__thiscall *)(_DWORD **))(*this)[487])(this);
    result = sub_100B3FD0(v7, v4, (int)v4, 0.0, v6, a3);
  }
  dword_106EA24C = 0;
  return result;
}
