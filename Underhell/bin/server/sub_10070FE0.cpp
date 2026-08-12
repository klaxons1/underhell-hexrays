int __thiscall sub_10070FE0(int *this, int a2)
{
  int result; // eax
  bool v4; // sf
  int v5; // ecx

  result = a2;
  v4 = this[2] < 0;
  this[6] = a2;
  this[7] = 0;
  this[3] = 0;
  if ( v4 )
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
    v5 = *this;
    this[1] = 0;
    this[4] = v5;
  }
  return result;
}
