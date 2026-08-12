int __thiscall sub_1019AB30(int *this)
{
  int *v1; // esi
  int i; // ebx
  int result; // eax

  v1 = this + 75;
  for ( i = 14; i >= 0; --i )
  {
    v1 -= 5;
    v1[3] = 0;
    if ( v1[2] >= 0 )
    {
      if ( *v1 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *v1);
        *v1 = 0;
      }
      v1[1] = 0;
    }
    result = *v1;
    v1[4] = *v1;
    if ( v1[2] >= 0 )
    {
      if ( result )
      {
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
        *v1 = 0;
      }
      v1[1] = 0;
    }
  }
  return result;
}
