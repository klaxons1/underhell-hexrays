void __thiscall sub_1007D9A0(int *this, int a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax

  if ( this[1] >= a2 )
  {
    this[4] = *this;
  }
  else
  {
    v3 = *this;
    if ( this[2] < 0 )
    {
      this[4] = v3;
    }
    else
    {
      this[1] = a2;
      v4 = 2 * a2;
      if ( v3 )
        v5 = (*(int (__thiscall **)(_DWORD, int, int))(*g_pMemAlloc + 12))(g_pMemAlloc, v3, v4);
      else
        v5 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, v4);
      *this = v5;
      this[4] = v5;
    }
  }
}
