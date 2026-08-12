int __thiscall sub_102ABBD0(int *this, int a2)
{
  int result; // eax
  int v4; // edx
  int v5; // eax

  result = a2;
  if ( this[1] >= a2 )
  {
    this[4] = *this;
  }
  else
  {
    if ( this[2] < 0 )
    {
LABEL_5:
      result = *this;
      this[4] = *this;
      return result;
    }
    v4 = *this;
    this[1] = a2;
    v5 = a2 << 6;
    if ( v4 )
    {
      *this = (*(int (__thiscall **)(_DWORD, int, int))(*g_pMemAlloc + 12))(g_pMemAlloc, v4, v5);
      goto LABEL_5;
    }
    result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, v5);
    *this = result;
    this[4] = result;
  }
  return result;
}
