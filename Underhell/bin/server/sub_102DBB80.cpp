_DWORD *__thiscall sub_102DBB80(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // esi
  _DWORD *result; // eax

  v2 = this[1407];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[1407] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = __RTDynamicCast(
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CLogicPlayerProxy `RTTI Type Descriptor',
         0);
  if ( !v5 )
  {
    result = sub_1012BC90(&dword_1069E3E0, 0, "logic_playerproxy");
    v5 = (int)result;
    if ( !result )
      return result;
    result[248] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
    this[1407] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  }
  return (_DWORD *)v5;
}
