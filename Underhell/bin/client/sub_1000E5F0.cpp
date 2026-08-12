_DWORD *__thiscall sub_1000E5F0(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *result; // eax
  int v4; // eax
  int v5; // edx

  if ( a3 >= -1 )
  {
    if ( a3 >= 0 && (v4 = this[4 * a3 + 1]) != 0 )
    {
      v5 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      result = a2;
      *a2 = v5;
    }
    else
    {
      result = a2;
      *a2 = -1;
    }
  }
  else
  {
    result = a2;
    *a2 = -1;
  }
  return result;
}
