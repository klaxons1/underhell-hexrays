void __thiscall sub_10267690(int this)
{
  unsigned int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  unsigned int v7; // esi

  sub_10147220(this + 1124);
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 876))(this) )
    sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  v2 = *(_DWORD *)(this + 1696);
  if ( v2 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 1696) & 0xFFF) + 2] == v2 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 1696) & 0xFFF) + 1] )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 340))(this);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 156))(v3);
  }
  if ( 0.0 != *(float *)(this + 1716) )
  {
    sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    v4 = *(_DWORD *)(this + 1700);
    if ( v4 != -1 )
    {
      v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 1700) & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 1700) & 0xFFF) + 2] == *(_DWORD *)(this + 1700) >> 12
        && *v5
        && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1716) )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1700) & 0xFFF) + 2] == v4 >> 12 )
          v6 = *v5;
        else
          v6 = 0;
        (*(void (__thiscall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)v6 + 148))(
          v6,
          "TurnOff",
          this,
          this,
          0);
        *(float *)(this + 1716) = 0.0;
        v7 = *(_DWORD *)(this + 1700);
        if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
          sub_1025FAC0(0);
        else
          sub_1025FAC0(off_1061BE18[4 * (v7 & 0xFFF) + 1]);
      }
    }
  }
}
