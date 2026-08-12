int __thiscall sub_1006E6F0(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // esi

  v2 = this[298];
  if ( v2 != -1 )
  {
    v3 = this[295];
    do
    {
      v4 = 68 * v2;
      sub_10177740(68 * v2 + v3);
      v3 = this[295];
      v2 = *(_DWORD *)(v3 + v4 + 64);
    }
    while ( v2 != -1 );
  }
  sub_1006E490(this + 295);
  if ( (int)this[297] >= 0 )
  {
    if ( this[295] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[295]);
      this[295] = 0;
    }
    this[296] = 0;
  }
  this[303] = this[295];
  this[300] = -1;
  this[302] = -1;
  return (*(int (__stdcall **)(_DWORD))(*(this - 3) + 408))(-1.0);
}
