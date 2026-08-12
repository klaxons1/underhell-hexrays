int __thiscall sub_100D3450(void *this, int a2)
{
  int *v3; // ecx
  int v4; // edi
  int *v6; // ecx
  int v7; // [esp+14h] [ebp+8h]

  if ( a2 )
  {
    v4 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  }
  else
  {
    v7 = *((_DWORD *)this + 296);
    if ( v7 )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v3 = (int *)*((_DWORD *)this + 6);
        if ( v3 )
          sub_100194B0(v3, 1184);
      }
      *((_DWORD *)this + 296) = 0;
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 1016))(this, v7);
    v4 = -1;
  }
  if ( *((_DWORD *)this + 280) != v4 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_DWORD *)this + 280) = v4;
      return sub_100D8500(this);
    }
    v6 = (int *)*((_DWORD *)this + 6);
    if ( v6 )
      sub_100194B0(v6, 1120);
    *((_DWORD *)this + 280) = v4;
  }
  return sub_100D8500(this);
}
