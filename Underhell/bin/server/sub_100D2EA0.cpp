int __thiscall sub_100D2EA0(void *this)
{
  bool v2; // zf
  int (__thiscall *v3)(void *); // edx
  int v4; // ebx
  int *v5; // ecx
  int *v6; // ecx
  int (__thiscall *v7)(void *); // edx
  int result; // eax
  int v9; // edi
  int *v10; // ecx
  int *v11; // ecx

  v2 = (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 1272))(this) == 0;
  v3 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 1224);
  if ( v2 )
  {
    *((_DWORD *)this + 294) = v3(this);
    if ( *((_DWORD *)this + 300) != -1 )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v6 = (int *)*((_DWORD *)this + 6);
        if ( v6 )
          sub_100194B0(v6, 1200);
      }
      *((_DWORD *)this + 300) = -1;
    }
  }
  else
  {
    v4 = v3(this);
    if ( *((_DWORD *)this + 300) != v4 )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
        *((_DWORD *)this + 300) = v4;
      }
      else
      {
        v5 = (int *)*((_DWORD *)this + 6);
        if ( v5 )
          sub_100194B0(v5, 1200);
        *((_DWORD *)this + 300) = v4;
      }
    }
  }
  v2 = (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 1276))(this) == 0;
  v7 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 1228);
  if ( v2 )
  {
    result = v7(this);
    *((_DWORD *)this + 295) = result;
    if ( *((_DWORD *)this + 301) != -1 )
    {
      result = (int)this;
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
        *((_DWORD *)this + 301) = -1;
      }
      else
      {
        v11 = (int *)*((_DWORD *)this + 6);
        if ( v11 )
          result = sub_100194B0(v11, 1204);
        *((_DWORD *)this + 301) = -1;
      }
    }
  }
  else
  {
    result = v7(this);
    v9 = result;
    if ( *((_DWORD *)this + 301) != result )
    {
      result = (int)this;
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
        *((_DWORD *)this + 301) = v9;
      }
      else
      {
        v10 = (int *)*((_DWORD *)this + 6);
        if ( v10 )
          result = sub_100194B0(v10, 1204);
        *((_DWORD *)this + 301) = v9;
      }
    }
  }
  return result;
}
