char __thiscall sub_1007CA50(_DWORD *this)
{
  _BYTE *v2; // ebx
  int v3; // eax
  char v4; // bl
  int v6; // [esp+8h] [ebp-8h]
  char v7; // [esp+Fh] [ebp-1h]

  v2 = (_BYTE *)this[1];
  v7 = 0;
  if ( !v2[2321] )
  {
    v6 = *(_DWORD *)v2;
    v3 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 368))(v2);
    (*(void (__thiscall **)(_BYTE *, int))(v6 + 1496))(v2, v3);
  }
  if ( sub_10023D10(v2, 21) )
  {
    v4 = 1;
  }
  else
  {
    if ( !sub_10023D10(v2, 30) && !sub_10023D10(v2, 39) && !sub_10023D10(v2, 27) && !sub_10023D10(v2, 13) )
      v7 = 1;
    v4 = v7;
  }
  if ( sub_100CF460(this[1])
    || ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 1672))(this[1]) & 0x20000) != 0
    || ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 1672))(this[1]) & 0x40000) != 0 )
  {
    return v4;
  }
  else
  {
    return 0;
  }
}
