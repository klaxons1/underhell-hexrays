_DWORD *__thiscall sub_10226190(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  int v6; // eax
  _DWORD *result; // eax
  unsigned int v8; // eax
  int v9; // eax

  v3 = this[a2 + 221];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[a2 + 221] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  v6 = __RTDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CSceneEntity `RTTI Type Descriptor',
         0);
  if ( v6 )
    return (_DWORD *)sub_1025FAC0(v6);
  v8 = this[a2 + 221];
  if ( v8 == -1 || off_1061BE18[4 * (this[a2 + 221] & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (this[a2 + 221] & 0xFFF) + 1];
  result = (_DWORD *)__RTDynamicCast(
                       v9,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                       (int)&CSceneListManager `RTTI Type Descriptor',
                       0);
  if ( result )
    return (_DWORD *)sub_10226130(result);
  return result;
}
