void *__thiscall sub_10116C00(void *this)
{
  int *v2; // ecx
  _DWORD *v4; // ecx

  sub_102585C0();
  *(_DWORD *)this = &CColorCorrectionVolume::`vftable';
  *((_BYTE *)this + 1092) = 1;
  if ( *((_DWORD *)this + 275) != COERCE_INT(1.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v2 = (int *)*((_DWORD *)this + 6);
      if ( v2 )
        sub_100194B0(v2, 1100);
    }
    *((float *)this + 275) = 1.0;
  }
  if ( *((_BYTE *)this + 84) )
  {
    *((_BYTE *)this + 88) |= 1u;
LABEL_9:
    *((_BYTE *)this + 1104) = 0;
    return this;
  }
  v4 = (_DWORD *)*((_DWORD *)this + 6);
  if ( !v4 )
    goto LABEL_9;
  *v4 |= 0x101u;
  *(_WORD *)(sub_10153460(v4) + 2) = 0;
  *((_BYTE *)this + 1104) = 0;
  return this;
}
