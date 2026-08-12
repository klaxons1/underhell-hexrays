bool __thiscall sub_100697A0(_DWORD *this, int a2, char a3)
{
  int v5; // edi

  if ( !this[531] )
    return !a2 || a2 == 1000000000;
  v5 = a2;
  if ( a2 < 1000000000 )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
    v5 = sub_1007DB30(a2);
  }
  if ( a3 )
    return v5 == this[532];
  else
    return *(_DWORD *)this[531] == v5;
}
