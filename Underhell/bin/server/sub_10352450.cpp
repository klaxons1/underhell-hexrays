void __thiscall sub_10352450(float *this)
{
  double v2; // st6
  double v3; // st7
  double v4; // st4
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st6
  double v10; // st7

  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 2276))(this)
      && this[952] + 5.0 > *(float *)(dword_106B31C8 + 12) )
    {
      if ( ((_DWORD)this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      v2 = this[956] - this[146];
      v3 = this[957] - this[147];
      this[949] = this[955] - this[145];
      this[950] = v2;
      this[951] = v3;
      off_10689714();
      return;
    }
LABEL_14:
    off_10689714();
    return;
  }
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v4 = this[906] - this[146];
  v5 = v4 * v4;
  v6 = this[905] - this[145];
  v7 = v5;
  v8 = this[907] - this[147];
  if ( v6 * v6 + v7 + v8 * v8 <= 1.0 )
  {
    (*(void (__thiscall **)(float *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(
      this,
      (_DWORD *)this + 949,
      0,
      0);
    goto LABEL_14;
  }
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v9 = this[906] - this[146];
  v10 = this[907] - this[147];
  this[949] = this[905] - this[145];
  this[950] = v9;
  this[951] = v10;
  off_10689714();
}
