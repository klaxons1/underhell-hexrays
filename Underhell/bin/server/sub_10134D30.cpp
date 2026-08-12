int __thiscall sub_10134D30(int this, _DWORD *a2)
{
  int result; // eax
  int *v4; // ecx
  int *v5; // ecx

  result = dword_106B31C8;
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
  {
    if ( *a2 )
    {
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 320))(*a2);
      if ( (_BYTE)result )
      {
        if ( *a2 )
        {
          result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 320))(*a2);
          if ( (_BYTE)result )
            return sub_101EB7A0(a2);
        }
      }
    }
  }
  if ( *(_BYTE *)(this + 816) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 816);
    }
    *(_BYTE *)(this + 816) = 0;
  }
  if ( *(_BYTE *)(this + 817) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 817) = 0;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 817);
      *(_BYTE *)(this + 817) = 0;
    }
  }
  return result;
}
