void __thiscall sub_102B8270(int this)
{
  unsigned int v2; // eax
  void (__noreturn ***v3)(); // eax
  int v4; // eax
  int v5; // edi

  sub_10112C00(this + 320, 0);
  if ( *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 0;
  }
  v2 = *(_DWORD *)(this + 1136);
  if ( v2 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 1136) & 0xFFF) + 2] == v2 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 1136) & 0xFFF) + 1] )
  {
    sub_102B7B10((float *)this, 0, 0, 0, 0, 0);
  }
  if ( *(_DWORD *)(this + 1164) )
  {
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, *(_DWORD *)(this + 1164));
  }
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 632))(this, 0.5);
  v5 = v4;
  if ( *(_DWORD *)(this + 1184) == 1 )
  {
    if ( !v4 )
      v5 = this;
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1013D590((float *)(this + 580), (float *)(this + 704), v5, 150, 125, 1, 0, 2, 0.0, 0, 0, -1);
    sub_1025FAC0(this);
  }
  else
  {
    if ( !v4 )
      v5 = this;
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1013D530((float *)(this + 580), (float *)(this + 704), v5, 150, 125, 1, 0.0, 0, 0, -1);
    sub_1025FAC0(this);
  }
}
