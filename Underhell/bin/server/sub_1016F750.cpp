_BYTE *__thiscall sub_1016F750(_BYTE *this)
{
  _BYTE *result; // eax

  result = this;
  this[4] = 0;
  *((_DWORD *)this + 2) = &CBaseGameSystemPerFrame::`vftable';
  *((_DWORD *)this + 3) = &IHLTVDirector::`vftable';
  *(_DWORD *)this = &CHLTVDirector::`vftable';
  *((_DWORD *)this + 2) = &CHLTVDirector::`vftable';
  *((_DWORD *)this + 3) = &CHLTVDirector::`vftable';
  *((_DWORD *)this + 100) = 0;
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 103) = 0;
  *((_WORD *)this + 208) = -1;
  *((_WORD *)this + 209) = 0;
  *((_WORD *)this + 210) = -1;
  *((_WORD *)this + 211) = -1;
  *((_DWORD *)this + 106) = *((_DWORD *)this + 101);
  *((float *)this + 5) = 30.0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 14) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 16) = 0;
  if ( !*((_DWORD *)this + 100) )
    *((_DWORD *)this + 100) = sub_1016BE90;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 99) = 0;
  return result;
}
