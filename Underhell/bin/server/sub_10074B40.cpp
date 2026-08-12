_DWORD *__thiscall sub_10074B40(_DWORD *this, int a2)
{
  char *v3; // edi
  int v4; // eax

  v3 = (char *)(this + 5);
  this[1] = a2;
  this[2] = &CAI_ProxyMovementSink::`vftable';
  this[3] = 0;
  *this = &CAI_LocalNavigator::`vftable';
  this[2] = &CAI_LocalNavigator::`vftable';
  memset(this + 22, 0, 0x38u);
  memset(v3 + 124, 0, 0x38u);
  memset(v3, 0, 0xB4u);
  *((float *)this + 50) = -1.0;
  this[52] = 0;
  if ( sub_10184390(96) )
    v4 = sub_100912C0(a2);
  else
    v4 = 0;
  this[51] = v4;
  *((_BYTE *)this + 16) = 0;
  memset(v3, 0, 0xB4u);
  return this;
}
