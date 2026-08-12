int __thiscall sub_1001A510(int *this)
{
  bool v2; // sf
  int result; // eax
  int v4; // ecx

  v2 = this[2] < 0;
  this[3] = 0;
  if ( v2 )
  {
    this[4] = *this;
  }
  else
  {
    result = *this;
    if ( *this )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    v4 = *this;
    this[1] = 0;
    this[4] = v4;
  }
  return result;
}
