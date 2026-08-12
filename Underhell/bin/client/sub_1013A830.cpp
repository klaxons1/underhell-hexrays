int __thiscall sub_1013A830(_DWORD *this)
{
  int v2; // ebx
  int i; // edi
  int result; // eax
  bool v5; // sf
  int v6; // ecx

  v2 = this[9];
  for ( i = 0; i < v2; ++i )
    result = sub_10034930(*(_DWORD *)(this[6] + 4 * i));
  v5 = (int)this[8] < 0;
  this[9] = 0;
  if ( v5 )
  {
    this[10] = this[6];
  }
  else
  {
    result = this[6];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[6]);
      this[6] = 0;
    }
    v6 = this[6];
    this[7] = 0;
    this[10] = v6;
  }
  return result;
}
