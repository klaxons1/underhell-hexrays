_DWORD *__thiscall sub_100F9A90(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  unsigned int v8; // eax

  v2 = this[206];
  if ( v2
    && v2 != 3
    && sub_100F9600(this)
    && (v3 = *(_DWORD *)dword_106B31D0,
        v4 = sub_100F9600(this),
        v5 = (*(int (__thiscall **)(int, int))(v3 + 76))(dword_106B31D0, v4),
        (v6 = sub_100AC640(v5)) != 0) )
  {
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      sub_100DAE60(v6);
    return (_DWORD *)(v6 + 580);
  }
  else
  {
    v8 = this[77];
    if ( v8 != -1 && off_1061BE18[4 * (this[77] & 0xFFF) + 2] == v8 >> 12 && off_1061BE18[4 * (this[77] & 0xFFF) + 1] )
    {
      if ( (dword_106998DC & 1) == 0 )
        dword_106998DC |= 1u;
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      sub_10421B40(this + 237, this + 125, &unk_106998D0);
      return &unk_106998D0;
    }
    else
    {
      return this + 237;
    }
  }
}
