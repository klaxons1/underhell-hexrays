_DWORD *__thiscall sub_10068870(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax

  sub_1003D000((int)this);
  *this = &C_SlideshowDisplay::`vftable';
  this[1] = &C_SlideshowDisplay::`vftable';
  this[2] = &C_SlideshowDisplay::`vftable';
  this[3] = &C_SlideshowDisplay::`vftable';
  this[363] = 0;
  this[364] = 0;
  this[365] = 0;
  this[366] = 0;
  this[367] = 0;
  v2 = dword_104110E8;
  v3 = dword_104110E8;
  if ( dword_104110E8 + 1 > dword_104110E0 )
  {
    sub_1010AFF0(dword_104110E8 - dword_104110E0 + 1);
    v2 = dword_104110E8;
  }
  v4 = dword_104110DC;
  dword_104110E8 = v2 + 1;
  v5 = v2 - v3;
  dword_104110EC = dword_104110DC;
  if ( v5 > 0 )
  {
    memcpy((void *)(dword_104110DC + 4 * v3 + 4), (const void *)(dword_104110DC + 4 * v3), 4 * v5);
    v4 = dword_104110DC;
  }
  v6 = (_DWORD *)(v4 + 4 * v3);
  if ( v6 )
    *v6 = this;
  return this;
}
