void __thiscall sub_103DEE00(void *this, int a2)
{
  int *v3; // ecx

  if ( *((_BYTE *)this + 868) != 1 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        sub_100194B0(v3, 868);
    }
    *((_BYTE *)this + 868) = 1;
  }
  if ( this )
    dword_10680878 = *(_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  else
    dword_10680878 = -1;
}
