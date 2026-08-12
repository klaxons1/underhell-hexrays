int __thiscall sub_1005BEA0(_BYTE *this)
{
  int v2; // eax

  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 52))(this);
  v2 = sub_1007DB30(100000);
  if ( !sub_10023D10(*((_DWORD **)this + 1), v2) )
    return (this[17] == 0) + 100000;
  this[17] = 0;
  return 100001;
}
