char __thiscall sub_102FE410(_DWORD *this)
{
  int v2; // eax
  double v3; // st7
  int v4; // edi
  int v5; // eax
  int v7; // [esp-8h] [ebp-Ch]

  if ( (this[62] & 0x40000) == 0 )
    return sub_10027110(this);
  v7 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 1868))(this);
  v3 = sub_10077680(v2, v7, 1);
  if ( 0.0 == v3 || *(float *)(dword_106B31C8 + 12) - v3 >= 3.0 || !sub_10024070(this, 21) )
    return sub_10027110(this);
  v4 = *this;
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  return (*(int (__thiscall **)(_DWORD *, int))(v4 + 876))(this, v5);
}
