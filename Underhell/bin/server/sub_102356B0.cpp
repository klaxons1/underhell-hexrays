_DWORD *__thiscall sub_102356B0(_DWORD *this)
{
  char *v2; // edi

  v2 = (char *)(this + 1);
  this[1] = &IEventRegisterCallback::`vftable';
  *this = &CServerNetworkProperty::`vftable';
  this[1] = &CServerNetworkProperty::`vftable';
  this[13] = -1;
  sub_1024D6D0(this + 14);
  *((_BYTE *)this + 76) &= ~1u;
  this[3] = 0;
  this[2] = 0;
  this[12] = 0;
  *((_WORD *)this + 9) = 0;
  sub_1024D8C0(&unk_106B3290, v2);
  return this;
}
