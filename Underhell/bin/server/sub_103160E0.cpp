bool __thiscall sub_103160E0(float *this)
{
  int v2; // edi
  float *v3; // eax
  double v4; // st6
  double v5; // st5

  if ( ((_DWORD)this[63] & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  if ( this[120] * this[120] + this[119] * this[119] + this[121] * this[121] > 122500.0 )
    return 0;
  v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 576))(v2);
  v4 = v3[1] - this[146];
  v5 = *v3 - this[145];
  return v5 * v5 + v4 * v4 < 122500.0;
}
