int __thiscall sub_1012BC10(_DWORD *this, int a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // eax

  if ( a2 )
  {
    v4 = (int)&this[4 * (*(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) & 0xFFF) + 1];
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 12);
      if ( v5 )
        return *(_DWORD *)v5;
    }
  }
  else
  {
    v2 = this[16385];
    if ( v2 )
      return *(_DWORD *)v2;
  }
  return 0;
}
