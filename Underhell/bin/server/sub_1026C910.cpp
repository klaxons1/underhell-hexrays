int __thiscall sub_1026C910(_DWORD *this, int a2, char *String2, int a4)
{
  int v5; // eax

  if ( !*((_BYTE *)this + 104) )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 244))(this);
    *((_BYTE *)this + 104) = 1;
  }
  v5 = sub_1026BAD0(this, String2);
  if ( v5 < 0 || v5 >= this[9] || a4 )
    return -1;
  else
    return sub_1026BA60(this, a2, v5);
}
