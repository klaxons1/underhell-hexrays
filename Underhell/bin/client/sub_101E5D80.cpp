int __thiscall sub_101E5D80(int *this)
{
  int v2; // ebp
  _DWORD *v3; // edi
  int i; // ebp
  bool v5; // sf
  int v6; // eax
  int result; // eax

  *this = (int)&CChoreoEvent::`vftable';
  sub_101E3800((int)this);
  this[89] = 0;
  v2 = this[72];
  if ( v2 )
  {
    sub_101E9B00(this[72]);
    sub_10034930(v2);
  }
  sub_1011A810(this + 86);
  if ( this[81] >= 0 )
  {
    if ( this[79] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[79]);
      this[79] = 0;
    }
    this[80] = 0;
  }
  sub_1011A810(this + 67);
  v3 = this + 67;
  for ( i = 1; i >= 0; --i )
  {
    v3 -= 5;
    sub_101E49F0(v3);
    if ( (int)v3[2] >= 0 )
    {
      if ( *v3 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v3);
        *v3 = 0;
      }
      v3[1] = 0;
    }
    v5 = (int)v3[2] < 0;
    v6 = *v3;
    v3[4] = *v3;
    if ( !v5 )
    {
      if ( v6 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v6);
        *v3 = 0;
      }
      v3[1] = 0;
    }
  }
  sub_101E5BE0(this + 52);
  sub_101E5B80(this + 47);
  if ( this[43] >= 0 )
  {
    if ( this[41] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[41]);
      this[41] = 0;
    }
    this[42] = 0;
  }
  if ( this[39] >= 0 )
  {
    if ( this[37] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[37]);
      this[37] = 0;
    }
    this[38] = 0;
  }
  sub_1011A810(this + 32);
  result = sub_1011A810(this + 23);
  if ( this[16] >= 0 )
  {
    result = this[14];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[14]);
      this[14] = 0;
    }
    this[15] = 0;
  }
  if ( this[12] >= 0 )
  {
    result = this[10];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[10]);
      this[10] = 0;
    }
    this[11] = 0;
  }
  if ( this[8] >= 0 )
  {
    result = this[6];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[6]);
      this[6] = 0;
    }
    this[7] = 0;
  }
  if ( this[4] >= 0 )
  {
    result = this[2];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[2]);
      this[2] = 0;
    }
    this[3] = 0;
  }
  return result;
}
