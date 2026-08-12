int __thiscall sub_1024EED0(_BYTE *this)
{
  bool v2; // zf

  (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 124))(this, 0);
  v2 = this[360] == 0;
  this[358] = 0;
  this[359] = 0;
  if ( !v2 )
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 300))(this);
  return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 992))(this);
}
