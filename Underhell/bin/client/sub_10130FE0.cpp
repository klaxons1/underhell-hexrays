_DWORD *__thiscall sub_10130FE0(_DWORD *this, char a2)
{
  int v3; // ecx

  *this = &vgui::DragnDropSlot::`vftable';
  sub_10236510(0);
  v3 = this[100];
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 120))(v3, 1);
  sub_10248D00(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
