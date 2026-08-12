int __thiscall sub_1026F750(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // edx

  v2 = this[93];
  this[95] = 0;
  this[96] = 0;
  if ( v2 )
  {
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v2 + 156))(v2, this);
    if ( sub_100DDA40(100) )
      v3 = sub_1027D150(" 4");
    else
      v3 = 0;
    v4 = this[93];
    this[95] = v3;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 172))(v4, this);
  }
  else if ( *((_BYTE *)this + 376) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 868))(this, 1);
    v5 = (_DWORD *)sub_100DDA40(104);
    v6 = v5 ? sub_1026EC30(v5, (int)this) : 0;
    v7 = *this;
    this[96] = v6;
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD *, int))(v7 + 836))(this, 0, v6, 6);
    if ( *((_BYTE *)this + 376) )
      *((_BYTE *)this + 377) = 0;
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 988))(this, 0);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 944))(this, 0);
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 788))(this, 3);
}
