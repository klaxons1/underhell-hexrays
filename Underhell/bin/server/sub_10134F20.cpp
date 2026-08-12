int __thiscall sub_10134F20(int this, _DWORD *a2)
{
  int result; // eax
  int *v4; // ecx

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
            return sub_101EB830(a2);
        }
      }
    }
  }
  if ( *(_BYTE *)(this + 818) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 818) = 0;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 818);
      *(_BYTE *)(this + 818) = 0;
    }
  }
  return result;
}
