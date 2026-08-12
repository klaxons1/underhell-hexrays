char __thiscall sub_10307200(_DWORD *this)
{
  int v2; // eax
  char result; // al
  _BYTE *v4; // esi

  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  v2 = this[308];
  if ( v2 == 3 )
  {
    (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, "models/grub_nugget_large.mdl");
  }
  else if ( v2 == 2 )
  {
    (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, "models/grub_nugget_medium.mdl");
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, "models/grub_nugget_small.mdl");
  }
  sub_100EAB80(this, 80);
  if ( this[55] != 1 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
    this[55] = 1;
  }
  result = sub_10177C60((int)this);
  v4 = (char *)this + 225;
  if ( *v4 != 2 )
  {
    result = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v4 - 225) + 480))(v4 - 225, v4);
    *v4 = 2;
  }
  return result;
}
