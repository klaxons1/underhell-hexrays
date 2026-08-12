int __thiscall sub_100C0CB0(_DWORD *this, int a2)
{
  int v3; // eax
  int result; // eax

  if ( (this[64] & 0x8000000) == 0 )
    (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, int))(*this + 808))(30.0, 0, 0.0, 1);
  if ( this[104] == -1 || off_1061BE18[4 * (this[104] & 0xFFF) + 2] != this[104] >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (this[104] & 0xFFF) + 1];
  result = __RTDynamicCast(
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CEntityFlame `RTTI Type Descriptor',
             0);
  if ( result )
    return sub_1012B270(a2);
  return result;
}
