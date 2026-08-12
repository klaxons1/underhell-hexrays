int __thiscall sub_10008580(int *this)
{
  int result; // eax

  if ( this[2] >= 0 )
  {
    result = *this;
    if ( *this )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  return result;
}
