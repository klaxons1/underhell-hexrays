_DWORD *__thiscall sub_1012F050(_DWORD *this, char a2)
{
  _DWORD *v3; // esi
  int v4; // edi

  *this = &CInventoryPanel::`vftable';
  v3 = this + 110;
  v4 = 28;
  do
  {
    if ( *v3 )
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v3 + 120))(*v3, 1);
    ++v3;
    --v4;
  }
  while ( v4 );
  sub_1024D540(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
