_DWORD *__thiscall sub_1021B0D0(_DWORD *this, int a2, int a3, _DWORD *a4, float a5, float a6, float a7)
{
  unsigned int v8; // eax
  int v9; // eax
  _DWORD *result; // eax

  while ( 1 )
  {
    sub_10154AF0(this, 1);
    sub_10154C70(a5);
    sub_10154C70(a6);
    sub_10154C70(a7);
    sub_10154B90();
    v8 = this[217];
    if ( v8 == -1 || off_1061BE18[4 * (this[217] & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (this[217] & 0xFFF) + 1];
    result = (_DWORD *)__RTDynamicCast(
                         v9,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                         (int)&CRopeKeyframe `RTTI Type Descriptor',
                         0);
    if ( !result || result == a4 )
      break;
    this = result;
  }
  return result;
}
