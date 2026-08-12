_DWORD *__thiscall sub_103D0D00(_DWORD *this, char a2)
{
  bool v3; // zf
  const char *v4; // ecx
  int v5; // eax
  char *v7; // [esp-4h] [ebp-8h]

  v3 = this[216] == 0;
  *this = &CAPCController::`vftable';
  if ( !v3 )
  {
    v4 = (const char *)this[216];
    if ( !v4 )
      v4 = String;
    v7 = (char *)v4;
    v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    sub_1023AF30(v5, 6, v7);
  }
  sub_1010BB10(this + 235);
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
