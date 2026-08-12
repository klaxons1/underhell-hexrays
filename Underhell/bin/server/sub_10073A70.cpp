int __thiscall sub_10073A70(_DWORD *this)
{
  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, "models/player.mdl");
  this[419] = 0;
  sub_10027A90((int)this, 0);
  sub_10112C00(2);
  sub_101129A0(*((unsigned __int16 *)this + 178) | 4);
  sub_100E0970(3, 0);
  if ( this[55] != 50 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
    this[55] = 50;
  }
  *((_BYTE *)this + 3620) = 0;
  return sub_100EAB80(this, 32);
}
