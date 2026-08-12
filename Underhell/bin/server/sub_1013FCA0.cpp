void __thiscall sub_1013FCA0(_BYTE *this)
{
  int v2; // edx
  float v3[3]; // [esp+20h] [ebp-18h] BYREF
  float v4[3]; // [esp+2Ch] [ebp-Ch] BYREF

  nullsub_4(this);
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 100))(this);
  if ( this[225] )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 480))(this, this + 225);
    this[225] = 0;
  }
  sub_10112C00((int)(this + 320), 0);
  sub_100EAB80(this, 32);
  v4[0] = 8.0;
  v4[1] = 8.0;
  v4[2] = 8.0;
  v3[0] = -8.0;
  v3[1] = -8.0;
  v3[2] = 0.0;
  sub_1025F360(this, v3, v4);
  v2 = *((_DWORD *)this + 63) >> 11;
  *((float *)this + 208) = *((float *)this + 207) * 0.05;
  *((float *)this + 207) = 0.0;
  if ( (v2 & 1) != 0 )
    sub_100DAE60((int)this);
  sub_1013F6E0(
    (int)this,
    (float *)this + 145,
    *((float *)this + 206),
    *((float *)this + 212),
    *((float *)this + 203),
    *((_DWORD *)this + 62),
    *((_DWORD *)this + 202));
  if ( this[853] )
  {
    this[852] = 0;
    if ( *((float *)this + 207) > 0.0 )
      sub_1013F370((int)this);
  }
  else
  {
    this[852] = 1;
  }
}
