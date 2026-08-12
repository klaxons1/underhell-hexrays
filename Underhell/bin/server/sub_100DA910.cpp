int __thiscall sub_100DA910(_DWORD *this, int *a2)
{
  int *v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // edi
  int v7; // eax
  bool v8; // zf

  v3 = (int *)this[6];
  if ( *((_BYTE *)this + 304) )
  {
    if ( v3 )
      v4 = *v3;
    else
      LOBYTE(v4) = 0;
  }
  else
  {
    ++dword_10697284;
    LOBYTE(v4) = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
    --dword_10697284;
  }
  if ( (v4 & 0x20) != 0 )
    return 32;
  if ( (v4 & 8) != 0 )
    return 8;
  if ( (v4 & 0x10) != 0 )
    return 16;
  v6 = sub_100AC640(*a2);
  if ( !sub_10249D60(*(_DWORD *)(v6 + 440)) )
    return 32;
  v7 = sub_10249D60(*(_DWORD *)(v6 + 440));
  v8 = (*(unsigned __int8 (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)v7 + 736))(v7, v6, this) == 0;
  result = 8;
  if ( v8 )
    return 32;
  return result;
}
