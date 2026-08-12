int __thiscall sub_1013CA50(_DWORD *this)
{
  int v2; // edx
  int v3; // ecx
  double v4; // st7
  int result; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  sub_10112C00((int)(this + 80), 0);
  sub_100EAB80(this, 32);
  sub_100E0970((int)this, v2, 0, 0);
  v3 = this[62];
  v4 = (double)(this[200] - 50) * 0.6;
  if ( (v3 & 0x800) != 0 )
  {
    if ( v4 < 1.0 )
      v4 = 1.0;
  }
  else if ( v4 < 10.0 )
  {
    v4 = 10.0;
  }
  if ( (v3 & 0x1000) != 0 )
  {
    if ( v4 > 200.0 )
      v4 = 200.0;
  }
  else if ( v4 > 50.0 )
  {
    v4 = 50.0;
  }
  result = (int)v4;
  this[202] = (int)v4;
  this[207] = -1;
  return result;
}
