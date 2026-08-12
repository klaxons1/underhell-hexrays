_DWORD *__thiscall sub_100F9650(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi

  if ( this[206] == 2
    && (v2 = this[208], v2 != -1)
    && (v3 = &off_1061BE18[4 * (this[208] & 0xFFF) + 1], off_1061BE18[4 * (this[208] & 0xFFF) + 2] == v2 >> 12)
    && *v3
    && (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(*v3 + 24)) )
  {
    v4 = *(_DWORD *)dword_106B31D0;
    v5 = sub_100F95B0(this);
    v6 = (*(int (__thiscall **)(int, int))(v4 + 76))(dword_106B31D0, v5);
    if ( (v6 || (v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
      && (v7 = *(_DWORD *)(v6 + 12)) != 0
      && (v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7), (v9 = v8) != 0) )
    {
      if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
        sub_100DAE60(v8);
      return (_DWORD *)(v9 + 580);
    }
    else
    {
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      return this + 145;
    }
  }
  else
  {
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    return this + 145;
  }
}
