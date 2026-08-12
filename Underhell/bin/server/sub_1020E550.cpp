int __thiscall sub_1020E550(void *this)
{
  int result; // eax
  int *v3; // ecx

  if ( *((_BYTE *)this + 1640) )
  {
    *((float *)this + 27) = *((float *)this + 407);
    result = *((_DWORD *)this + 62);
    if ( result != *((_DWORD *)this + 409) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v3 = (int *)*((_DWORD *)this + 6);
        if ( v3 )
          sub_100194B0(v3, 248);
      }
      result = *((_DWORD *)this + 409);
      *((_DWORD *)this + 62) = result;
    }
    *((_BYTE *)this + 1640) = 0;
  }
  if ( !*((_BYTE *)this + 1728) )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 904))(this);
  return result;
}
