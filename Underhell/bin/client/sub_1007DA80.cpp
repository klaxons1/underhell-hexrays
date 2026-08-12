int __thiscall sub_1007DA80(int *this, int a2)
{
  int result; // eax
  int v4; // edx
  int v5; // eax

  result = a2;
  if ( this[1] >= a2 )
  {
    this[8] = *this;
  }
  else
  {
    v4 = *this;
    if ( this[2] < 0 )
    {
      this[8] = v4;
    }
    else
    {
      this[1] = a2;
      v5 = 12 * a2;
      if ( v4 )
        result = (*(int (__thiscall **)(_DWORD, int, int))(*g_pMemAlloc + 12))(g_pMemAlloc, v4, v5);
      else
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, v5);
      *this = result;
      this[8] = result;
    }
  }
  return result;
}
