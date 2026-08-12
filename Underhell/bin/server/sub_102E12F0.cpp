int __thiscall sub_102E12F0(void *this, int a2)
{
  int result; // eax
  int *v4; // ecx

  if ( *((_BYTE *)this + 5040) )
  {
    result = (int)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        result = sub_100194B0(v4, 5040);
    }
    *((_BYTE *)this + 5040) = 0;
  }
  if ( *((_BYTE *)this + 5061) )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1272))(this);
  return result;
}
