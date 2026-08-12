void __thiscall sub_100383C0(_DWORD *this)
{
  int v2; // eax
  signed int v3; // esi
  void *v4; // eax
  _DWORD *v5; // edi
  void *v6; // eax
  int v7; // [esp+4h] [ebp-4h]

  if ( !this[275] )
  {
    v2 = (*(int (__thiscall **)(_DWORD *))(*this + 60))(this);
    if ( v2 && !*(_BYTE *)(v2 + 17) )
      sub_10034F90(v2);
    v3 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 60))(this) + 20);
    if ( v3 <= 4 )
      v3 = 4;
    v4 = (void *)sub_100DDA40(v3);
    this[275] = v4;
    memset(v4, 0, v3);
    v5 = this + 185;
    v7 = 90;
    do
    {
      v6 = (void *)sub_100DDA40(v3);
      *v5 = v6;
      memset(v6, 0, v3);
      ++v5;
      --v7;
    }
    while ( v7 );
    this[276] = 0;
  }
}
