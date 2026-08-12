char __thiscall sub_100D1980(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edi

  if ( this[298] == -1 && this[299] == -1 || ((*(int (__thiscall **)(_DWORD *))(*this + 1244))(this) & 1) != 0 )
  {
    LOBYTE(v2) = 1;
  }
  else
  {
    v3 = this[280];
    if ( v3 != -1
      && off_1061BE18[4 * (this[280] & 0xFFF) + 2] == v3 >> 12
      && (v4 = off_1061BE18[4 * (this[280] & 0xFFF) + 1]) != 0
      && (v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4)) != 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 320))(v5) )
    {
      if ( (int)this[300] > 0
        || sub_100CF5D0(v5, this[298])
        || (int)this[301] > 0
        || (v2 = sub_100CF5D0(v5, this[299])) != 0 )
      {
        LOBYTE(v2) = 1;
      }
    }
    else
    {
      LOBYTE(v2) = 0;
    }
  }
  return v2;
}
