char *__thiscall sub_10173C50(char *this)
{
  char *result; // eax
  int *v3; // ecx

  sub_10177830(this);
  *(_DWORD *)this = &CItemFMRadio::`vftable';
  *((_DWORD *)this + 280) = &CItemFMRadio::`vftable';
  *((_WORD *)this + 616) = 0;
  *((_DWORD *)this + 309) = 0;
  *((_WORD *)this + 620) = 0;
  this[1242] = 1;
  result = this;
  if ( *(_DWORD *)(this + 771) != 1693501540 )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
      *(_DWORD *)(this + 771) = 1693501540;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        sub_100194B0(v3, 771);
      *(_DWORD *)(this + 771) = 1693501540;
      return this;
    }
  }
  return result;
}
