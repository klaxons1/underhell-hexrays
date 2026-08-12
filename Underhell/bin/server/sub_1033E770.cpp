char __thiscall sub_1033E770(float *this, int a2, int a3, int a4)
{
  double v5; // st6
  double v6; // st7
  _BYTE v8[12]; // [esp+4h] [ebp-18h] BYREF
  float v9[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( a2 != dword_106EBC7C )
    return sub_1001E230(this, a2, a3, a4);
  if ( a4 == (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
  {
    sub_104222B0(this + 182, v9, 0, v8);
    v5 = 10.0 * v9[2];
    v6 = v9[1] * 10.0;
    this[1049] = v9[0] * 10.0;
    this[1050] = v6;
    this[1051] = v5;
    sub_10023CB0((char *)this, 77);
    sub_10044510((int)this, (int)"Failed to kick over turret");
  }
  return 1;
}
