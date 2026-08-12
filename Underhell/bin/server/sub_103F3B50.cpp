int __thiscall sub_103F3B50(int (__thiscall ***this)(int), int a2)
{
  int result; // eax
  int v4; // eax
  int (__thiscall **v5)(int); // edx
  int *v6; // esi

  result = (*this[371])((int)(this + 371));
  if ( result )
  {
    v4 = (*this)[85]((int)this);
    v5 = this[410];
    if ( v5 == (int (__thiscall **)(int))-1 )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 72))(v4, 0);
    v6 = &off_1061BE18[4 * ((unsigned int)this[410] & 0xFFF) + 1];
    if ( v6[1] != (unsigned int)v5 >> 12 )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 72))(v4, 0);
    else
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 72))(v4, *v6);
  }
  return result;
}
