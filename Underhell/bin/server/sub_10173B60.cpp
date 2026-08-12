int __thiscall sub_10173B60(void *this)
{
  int result; // eax
  int *v3; // ecx
  int *v4; // ecx

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 104))(this, "models/items/FMRadio.mdl");
  if ( *((_DWORD *)this + 55) != 10 )
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 464))(this, (int)this + 220);
    *((_DWORD *)this + 55) = 10;
  }
  result = sub_10177C60(this);
  if ( *((_BYTE *)this + 1232) )
  {
    if ( *((_DWORD *)this + 212) != 1 )
    {
      result = (int)this;
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
        *((_DWORD *)this + 212) = 1;
      }
      else
      {
        v3 = (int *)*((_DWORD *)this + 6);
        if ( v3 )
          result = sub_100194B0(v3, 848);
        *((_DWORD *)this + 212) = 1;
      }
    }
  }
  else if ( *((_DWORD *)this + 212) )
  {
    result = (int)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_DWORD *)this + 212) = 0;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        result = sub_100194B0(v4, 848);
      *((_DWORD *)this + 212) = 0;
    }
  }
  return result;
}
