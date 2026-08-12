int __thiscall sub_10261970(_DWORD *this, int a2)
{
  int v3; // eax
  unsigned __int8 v4; // al
  char v5; // dl
  char v6; // dl
  int v7; // eax

  v3 = this[86];
  if ( v3 == a2 )
  {
    v4 = *((_BYTE *)this + 376);
    v5 = (v4 ^ (2 * ~(v4 >> 1))) & 2;
  }
  else
  {
    this[87] = v3;
    v4 = *((_BYTE *)this + 376);
    v5 = (v4 ^ (2 * v4)) & 4;
  }
  v6 = v4 ^ v5;
  v7 = *this;
  *((_BYTE *)this + 376) = v6;
  (*(void (__thiscall **)(_DWORD *, int))(v7 + 820))(this, a2);
  return (*(int (__thiscall **)(_DWORD *))(*this + 824))(this);
}
