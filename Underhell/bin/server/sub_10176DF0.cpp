_DWORD *__thiscall sub_10176DF0(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // edi
  int v6; // eax
  _DWORD *result; // eax

  v3 = *(_DWORD *)(this + 892);
  if ( v3 == -1
    || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 892) & 0xFFF) + 1], off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12) )
  {
    v5 = 0;
  }
  else
  {
    v5 = *v4;
  }
  if ( v3 == -1 || off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (v3 & 0xFFF) + 1];
  result = (_DWORD *)__RTDynamicCast(
                       v6,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                       (int)&CBaseCombatWeapon `RTTI Type Descriptor',
                       0);
  if ( *(_BYTE *)(this + 888) )
  {
    if ( v5 && *(_DWORD *)(this + 892) != -1 && (!result || !sub_100D1940(result)) )
      sub_1025FAC0(v5);
    *(_DWORD *)(this + 892) = -1;
    return (_DWORD *)sub_101757D0(this);
  }
  return result;
}
