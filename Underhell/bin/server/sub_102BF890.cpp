int __thiscall sub_102BF890(void *this)
{
  int *v2; // ecx
  int *v3; // ecx

  nullsub_4();
  if ( *((_DWORD *)this + 201) != COERCE_INT(1.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v2 = (int *)*((_DWORD *)this + 6);
      if ( v2 )
        sub_100194B0(v2, 804);
    }
    *((float *)this + 201) = 1.0;
  }
  if ( *((_BYTE *)this + 800) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        sub_100194B0(v3, 800);
    }
    *((_BYTE *)this + 800) = 0;
  }
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 100))(this);
}
