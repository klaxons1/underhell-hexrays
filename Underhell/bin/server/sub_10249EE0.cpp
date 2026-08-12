void *__thiscall sub_10249EE0(void *this, char *Source, int a3)
{
  int *v4; // ecx
  _DWORD *v5; // ecx
  void *result; // eax
  int *v7; // ecx

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 740))(this);
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 756))(this);
  if ( *((_DWORD *)this + 218) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 872);
    }
    *((_DWORD *)this + 218) = 0;
  }
  if ( *((_BYTE *)this + 84) )
  {
    *((_BYTE *)this + 88) |= 1u;
  }
  else
  {
    v5 = (_DWORD *)*((_DWORD *)this + 6);
    if ( v5 )
    {
      *v5 |= 0x101u;
      *(_WORD *)(sub_10153460(v5) + 2) = 0;
    }
  }
  result = (void *)sub_104299C0((char *)this + 840, Source, 0x20u);
  if ( *((_DWORD *)this + 222) != a3 )
  {
    result = this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_DWORD *)this + 222) = a3;
    }
    else
    {
      v7 = (int *)*((_DWORD *)this + 6);
      if ( v7 )
        result = (void *)sub_100194B0(v7, 888);
      *((_DWORD *)this + 222) = a3;
    }
  }
  return result;
}
