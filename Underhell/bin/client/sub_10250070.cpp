int __thiscall sub_10250070(_DWORD *this)
{
  int v2; // ecx

  if ( (int)this[111] >= 0 )
  {
    if ( this[109] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[109]);
      this[109] = 0;
    }
    this[110] = 0;
  }
  if ( (int)this[107] >= 0 )
  {
    if ( this[105] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[105]);
      this[105] = 0;
    }
    this[106] = 0;
  }
  v2 = this[97];
  *this = &vgui::MenuButton::`vftable';
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 24))(v2, 1);
  return sub_1025AD60(this);
}
