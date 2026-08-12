void *__thiscall sub_103E9380(void *this)
{
  int *v2; // ecx
  void *result; // eax
  int *v4; // ecx

  sub_103EBA20();
  *((float *)this + 488) = 0.0;
  *(_DWORD *)this = &CPropHL2Buggy::`vftable';
  *((_DWORD *)this + 280) = &CPropHL2Buggy::`vftable';
  *((_DWORD *)this + 371) = &CPropHL2Buggy::`vftable';
  *((_DWORD *)this + 372) = &CPropHL2Buggy::`vftable';
  *((_WORD *)this + 974) = 0;
  *((_DWORD *)this + 492) = -1;
  *((_DWORD *)this + 489) = 0;
  *((_DWORD *)this + 493) = 5;
  *((_DWORD *)this + 498) = -1;
  *((_DWORD *)this + 495) = 0;
  *((_DWORD *)this + 499) = 5;
  *((_DWORD *)this + 504) = -1;
  *((_DWORD *)this + 501) = 0;
  *((_DWORD *)this + 505) = 5;
  *((_DWORD *)this + 510) = -1;
  *((_DWORD *)this + 507) = 0;
  *((_DWORD *)this + 511) = 5;
  *((_DWORD *)this + 513) = -1;
  *((_DWORD *)this + 514) = -1;
  *((_DWORD *)this + 515) = -1;
  *((_DWORD *)this + 516) = -1;
  *((_DWORD *)this + 518) = -1;
  *((_DWORD *)this + 519) = -1;
  if ( *((_BYTE *)this + 1689) != 1 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v2 = (int *)*((_DWORD *)this + 6);
      if ( v2 )
        sub_100194B0(v2, 1689);
    }
    *((_BYTE *)this + 1689) = 1;
  }
  result = this;
  if ( *((_BYTE *)this + 1688) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_BYTE *)this + 1688) = 0;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 1688);
      *((_BYTE *)this + 1688) = 0;
      return this;
    }
  }
  return result;
}
