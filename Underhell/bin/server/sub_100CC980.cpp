char *__thiscall sub_100CC980(char *this)
{
  char *v2; // ebx
  unsigned int v3; // eax
  int *v4; // ecx
  int i; // edi
  int *v6; // ecx

  sub_100F23C0();
  *(_DWORD *)this = &CBaseCombatCharacter::`vftable';
  *((_DWORD *)this + 440) = 0;
  *((_DWORD *)this + 441) = 0;
  *((_DWORD *)this + 442) = 0;
  *((_DWORD *)this + 443) = 0;
  *((_DWORD *)this + 444) = 0;
  v2 = this + 1908;
  memset(this + 1908, 0xFFu, 0xC0u);
  *((_DWORD *)this + 525) = -1;
  *((float *)this + 437) = 0.0;
  v3 = *((_DWORD *)this + 525);
  if ( v3 != -1
    && off_1061BE18[4 * (*((_DWORD *)this + 525) & 0xFFF) + 2] == v3 >> 12
    && off_1061BE18[4 * (*((_DWORD *)this + 525) & 0xFFF) + 1] )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 2100);
    }
    *((_DWORD *)this + 525) = -1;
  }
  sub_100CF580(this);
  for ( i = 0; i < 48; ++i )
  {
    if ( *(_DWORD *)&v2[4 * i] != -1 )
    {
      if ( this[84] )
      {
        this[88] |= 1u;
      }
      else
      {
        v6 = (int *)*((_DWORD *)this + 6);
        if ( v6 )
          sub_100194B0(v6, 4 * i + 1908);
      }
      *(_DWORD *)&v2[4 * i] = -1;
    }
  }
  this[1712] = 1;
  *((float *)this + 426) = 1.0;
  this[1668] = 0;
  this[1669] = *(_DWORD *)(dword_1069675C + 48) != 0;
  return this;
}
