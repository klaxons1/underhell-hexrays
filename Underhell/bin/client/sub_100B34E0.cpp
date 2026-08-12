int __thiscall sub_100B34E0(_BYTE *this)
{
  int v1; // ecx

  *(_DWORD *)this = &C_HLTVCamera::`vftable';
  this[4] = 0;
  *((_DWORD *)this + 38) = &CUserCmd::`vftable';
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((float *)this + 41) = 0.0;
  *((float *)this + 42) = 0.0;
  *((float *)this + 43) = 0.0;
  *((_DWORD *)this + 47) = 0;
  *((float *)this + 44) = 0.0;
  this[192] = 0;
  *((float *)this + 45) = 0.0;
  *((_DWORD *)this + 49) = 0;
  *((float *)this + 46) = 0.0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 0;
  this[212] = 0;
  *((_DWORD *)this + 57) = 0;
  sub_100B2F10((int)this);
  *(_DWORD *)(v1 + 84) = 0;
  *(_BYTE *)(v1 + 88) = 0;
  return v1;
}
