_DWORD *__thiscall sub_101792A0(_DWORD *this, char a2)
{
  int v3; // edx

  v3 = *((unsigned __int16 *)this + 4);
  *this = &C_EnvelopeFX::`vftable';
  this[1] = &C_EnvelopeFX::`vftable';
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)off_103DCDDC + 4))(off_103DCDDC, v3);
  *this = &IHandleEntity::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
