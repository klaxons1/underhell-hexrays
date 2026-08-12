int __thiscall sub_1044DC10(int *this)
{
  bool v2; // sf
  int result; // eax
  int v4; // ecx

  v2 = this[2] < 0;
  this[3] = 0;
  if ( !v2 )
  {
    result = *this;
    if ( *this )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  this[4] = *this;
  v2 = this[7] < 0;
  this[8] = 0;
  if ( !v2 )
  {
    result = this[5];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[5]);
      this[5] = 0;
    }
    this[6] = 0;
  }
  this[9] = this[5];
  v2 = this[12] < 0;
  this[13] = 0;
  if ( v2 )
  {
    this[14] = this[10];
  }
  else
  {
    result = this[10];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[10]);
      this[10] = 0;
    }
    v4 = this[10];
    this[11] = 0;
    this[14] = v4;
  }
  return result;
}
