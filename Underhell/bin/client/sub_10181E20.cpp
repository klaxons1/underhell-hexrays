void __thiscall sub_10181E20(_DWORD *this)
{
  int i; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // ecx

  for ( i = 0; i < this[72]; ++i )
  {
    v3 = *(_DWORD *)(this[69] + 4 * i);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 32))(v3);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 116))(dword_1047CA70, v4);
  }
  v5 = this[68];
  if ( v5 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 300))(v5);
    this[68] = 0;
  }
  this[72] = 0;
  if ( (int)this[71] >= 0 )
  {
    if ( this[69] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[69]);
      this[69] = 0;
    }
    this[70] = 0;
  }
  this[73] = this[69];
  this[75] = 0;
  this[76] = 0;
}
