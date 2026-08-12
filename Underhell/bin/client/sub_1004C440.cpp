_DWORD *__thiscall sub_1004C440(_DWORD *this, char a2)
{
  int v3; // eax

  v3 = *((unsigned __int16 *)this + 596);
  *this = &C_EnvProjectedTexture::`vftable';
  this[1] = &C_EnvProjectedTexture::`vftable';
  this[2] = &C_EnvProjectedTexture::`vftable';
  this[3] = &C_EnvProjectedTexture::`vftable';
  if ( (_WORD)v3 != 0xFFFF )
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)off_103DD080 + 80))(off_103DD080, v3);
    *((_WORD *)this + 596) = -1;
  }
  sub_1003D350((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
