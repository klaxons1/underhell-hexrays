_DWORD *__thiscall sub_100EEC80(_DWORD *this)
{
  int v2; // eax
  int v3; // eax

  this[1] = &IClientRenderable::`vftable';
  *this = &CParticleEffectBinding::`vftable';
  this[1] = &CParticleEffectBinding::`vftable';
  *((_WORD *)this + 4) = -1;
  this[46] = 0;
  this[47] = 0;
  this[48] = 0;
  *((_WORD *)this + 102) = -1;
  this[50] = 0xFFFF;
  v2 = this[46];
  this[49] = -1;
  this[52] = v2;
  this[36] = 0;
  this[35] = 0;
  sub_101F1ED0(this + 3);
  *((_BYTE *)this + 76) = 1;
  this[37] = 3484;
  *((float *)this + 20) = -50.0;
  *((float *)this + 21) = -50.0;
  *((float *)this + 22) = -50.0;
  *((float *)this + 23) = 50.0;
  *((float *)this + 24) = 50.0;
  *((float *)this + 25) = 50.0;
  *((float *)this + 26) = *((float *)this + 20);
  *((float *)this + 27) = *((float *)this + 21);
  *((float *)this + 28) = *((float *)this + 22);
  *((float *)this + 29) = *((float *)this + 23);
  *((float *)this + 30) = *((float *)this + 24);
  *((float *)this + 31) = *((float *)this + 25);
  if ( 0.0 != *((float *)this + 32) )
  {
    v3 = *((unsigned __int16 *)this + 4);
    *((float *)this + 32) = 0.0;
    if ( (_WORD)v3 != 0xFFFF )
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)off_103DCDDC + 48))(off_103DCDDC, v3);
  }
  *((_WORD *)this + 68) = -1;
  this[33] = 0;
  *((_WORD *)this + 106) = 0;
  this[38] = 0;
  this[39] = 0;
  this[40] = 0;
  this[41] = 0;
  this[42] = 0;
  this[43] = 0;
  this[44] = 0;
  this[45] = 0;
  return this;
}
