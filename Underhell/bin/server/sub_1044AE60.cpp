void __thiscall sub_1044AE60(int *this, int a2)
{
  int v3; // eax
  bool v4; // zf
  int v5; // eax

  if ( this[1] >= a2 )
  {
    this[4] = *this;
  }
  else if ( this[2] < 0 )
  {
    this[4] = *this;
  }
  else
  {
    v3 = *this;
    v4 = *this == 0;
    this[1] = a2;
    if ( v4 )
      v5 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, a2);
    else
      v5 = (*(int (__thiscall **)(_DWORD, int, int))(*g_pMemAlloc + 12))(g_pMemAlloc, v3, a2);
    *this = v5;
    this[4] = v5;
  }
}
