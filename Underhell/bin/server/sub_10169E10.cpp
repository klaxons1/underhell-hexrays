int __thiscall sub_10169E10(void *this, int a2)
{
  int v3; // esi
  int result; // eax
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  double v8; // [esp-4h] [ebp-10h]

  if ( !*((_DWORD *)this + 905) )
  {
    if ( *((_DWORD *)this + 216) != COERCE_INT(1.0) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v6 = (int *)*((_DWORD *)this + 6);
        if ( v6 )
          sub_100194B0(v6, 864);
      }
      *((float *)this + 216) = 1.0;
    }
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 728))(this);
    if ( *((_DWORD *)this + 216) != COERCE_INT(0.0) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v7 = (int *)*((_DWORD *)this + 6);
        if ( v7 )
          sub_100194B0(v7, 864);
      }
      *((float *)this + 216) = 0.0;
    }
    LODWORD(v8) = *((_DWORD *)this + 226);
    Msg("sequence: %d, frame %.0f\n", *((_DWORD *)this + 227), v8);
    return 0;
  }
  v3 = *((_DWORD *)this + 227) + 1;
  if ( !sub_100BE590((int)this, v3) )
    v3 = 0;
  sub_100C3330((int)this, v3);
  if ( *((_DWORD *)this + 226) == COERCE_INT(0.0) )
    return 0;
  if ( *((_BYTE *)this + 84) )
  {
    *((_BYTE *)this + 88) |= 1u;
    *((float *)this + 226) = 0.0;
    return 0;
  }
  else
  {
    v5 = (int *)*((_DWORD *)this + 6);
    if ( v5 )
      sub_100194B0(v5, 904);
    result = 0;
    *((float *)this + 226) = 0.0;
  }
  return result;
}
