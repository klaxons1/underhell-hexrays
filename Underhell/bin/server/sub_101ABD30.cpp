int __thiscall sub_101ABD30(void *this)
{
  int result; // eax
  int *v3; // ecx

  nullsub_4();
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 100))(this);
  if ( *((_DWORD *)this + 203) != -1 )
  {
    result = (int)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_DWORD *)this + 203) = -1;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        result = sub_100194B0(v3, 812);
      *((_DWORD *)this + 203) = -1;
    }
  }
  return result;
}
