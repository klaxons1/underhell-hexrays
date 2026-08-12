bool __thiscall sub_10374510(void *this, int a2)
{
  void *v2; // edi
  int v3; // ecx

  v2 = this;
  if ( dword_106E850C == *(_DWORD *)(a2 + 92) )
  {
    if ( *(_BYTE *)(a2 + 306) == 6 )
    {
      v3 = *(_DWORD *)(a2 + 424);
      if ( v3 )
      {
        if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 116))(v3) <= 500.0 )
          return 0;
      }
    }
    this = v2;
  }
  return sub_1002A090(this, a2);
}
