int __thiscall sub_10184200(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax

  sub_10241570(a2);
  v3 = this[78];
  if ( v3 )
  {
    sub_10279030(this[78]);
    sub_10034930(v3);
  }
  if ( sub_100DDA40(24) )
    v4 = sub_102790E0(0);
  else
    v4 = 0;
  this[78] = v4;
  sub_10183620((int)(this + 97));
  memset(this + 79, 0, 0x48u);
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 904))(this, a2);
}
