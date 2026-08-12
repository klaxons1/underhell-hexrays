char *__thiscall sub_100AEED0(char *this)
{
  char *result; // eax

  sub_100D36C0("CGameStats");
  *((float *)this + 605) = -1.0;
  *((float *)this + 606) = -1.0;
  *(_DWORD *)this = &CBaseGameStats_Driver::`vftable';
  *((float *)this + 607) = 0.0;
  this[2412] = 0;
  *((_DWORD *)this + 604) = 0;
  *((_DWORD *)this + 608) = 0;
  sub_1022D3E0(this + 2436);
  *((float *)this + 622) = 0.0;
  this[2492] = 0;
  *((float *)this + 624) = 0.0;
  *((_DWORD *)this + 613) = -1;
  *(_DWORD *)(this + 2473) = 0x1000000;
  *((_DWORD *)this + 625) = &CUserCmd::`vftable';
  *((_DWORD *)this + 641) = 0;
  *((_DWORD *)this + 642) = 0;
  *((_DWORD *)this + 643) = 0;
  *((_DWORD *)this + 645) = 0;
  *((float *)this + 628) = 0.0;
  *((float *)this + 629) = 0.0;
  *((float *)this + 630) = 0.0;
  result = this;
  *((float *)this + 631) = 0.0;
  *((float *)this + 632) = 0.0;
  *((float *)this + 633) = 0.0;
  this[2584] = 0;
  *((_DWORD *)this + 648) = 0;
  this[2456] = 0;
  *((_DWORD *)this + 620) = 0;
  *((_DWORD *)this + 621) = 0;
  *((_DWORD *)this + 626) = 0;
  *((_DWORD *)this + 627) = 0;
  *((float *)this + 628) = 0.0;
  *((float *)this + 629) = 0.0;
  *((float *)this + 630) = 0.0;
  *((_DWORD *)this + 634) = 0;
  *((float *)this + 631) = 0.0;
  this[2540] = 0;
  *((float *)this + 632) = 0.0;
  *((_DWORD *)this + 636) = 0;
  *((_DWORD *)this + 637) = 0;
  *((float *)this + 633) = 0.0;
  *((_DWORD *)this + 638) = 0;
  this[2560] = 0;
  *((_DWORD *)this + 639) = 0;
  *((_DWORD *)this + 644) = 0;
  return result;
}
