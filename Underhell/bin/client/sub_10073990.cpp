_DWORD *__thiscall sub_10073990(_DWORD *this, char a2)
{
  int (__thiscall ***v3)(_DWORD); // ecx
  int v4; // eax

  v3 = (int (__thiscall ***)(_DWORD))this[3];
  *this = &CCamoMaterialProxy::`vftable';
  if ( v3 )
  {
    v4 = (**v3)(v3);
    if ( v4 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 48))(v4, 0);
  }
  sub_10034930(this[1]);
  sub_10034930(this[5]);
  *this = &IMaterialProxy::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
