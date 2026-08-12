int __thiscall sub_10242210(_DWORD *this, _BYTE *a2, float *a3)
{
  _BYTE *v3; // eax

  v3 = a2;
  if ( !a2 || !*a2 )
    v3 = 0;
  this[115] = v3;
  sub_100D8500(this);
  sub_100E10C0((int)this, a3);
  return (*(int (__thiscall **)(_DWORD *))(*this + 96))(this);
}
