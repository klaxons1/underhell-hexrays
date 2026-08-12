char __thiscall sub_100457E0(_DWORD *this, int a2)
{
  int v3; // edi

  v3 = sub_100696D0(a2);
  if ( !v3 )
    return 0;
  this[532] = (*(int (__thiscall **)(_DWORD *, int))(*this + 1308))(this, a2);
  sub_100445B0((int)this, v3);
  return 1;
}
