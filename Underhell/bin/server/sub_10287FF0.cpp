_DWORD *__thiscall sub_10287FF0(int this, int a2, int a3, _DWORD *a4, int a5)
{
  _DWORD *result; // eax
  int *v7; // ecx

  result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
  if ( !(_BYTE)result )
  {
    result = a4;
    if ( a4 == (_DWORD *)1 )
    {
      if ( *(_DWORD *)(this + 824) != 1 )
      {
        result = (_DWORD *)this;
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
          *(_DWORD *)(this + 824) = 1;
        }
        else
        {
          v7 = *(int **)(this + 24);
          if ( v7 )
            result = (_DWORD *)sub_100194B0(v7, 824);
          *(_DWORD *)(this + 824) = 1;
        }
      }
    }
    else if ( !a4 )
    {
      HIBYTE(a2) = 0;
      return sub_101BE210((_DWORD *)(this + 824), (unsigned __int8 *)&a2 + 3);
    }
  }
  return result;
}
