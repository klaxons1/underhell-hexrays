const char *__thiscall sub_100F9150(void *this, _BYTE *a2, int a3)
{
  int v4; // ebx
  int *v5; // ecx
  const char *result; // eax

  if ( a3 )
    v4 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    v4 = -1;
  if ( *((_DWORD *)this + 292) != v4 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v5 = (int *)*((_DWORD *)this + 6);
      if ( v5 )
        sub_100194B0(v5, 1168);
    }
    *((_DWORD *)this + 292) = v4;
  }
  if ( a2 )
    result = *a2 != 0 ? a2 : 0;
  else
    result = 0;
  if ( result != *((const char **)this + 290) )
  {
    *((_DWORD *)this + 290) = result;
    if ( !result )
      result = String;
    result = (const char *)(*(int (__thiscall **)(void *, const char *))(*(_DWORD *)this + 104))(this, result);
    if ( a3 )
      return (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 1196))(a3);
  }
  return result;
}
