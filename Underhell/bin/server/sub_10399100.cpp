char __thiscall sub_10399100(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // eax
  char result; // al

  v2 = this[1345];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[1345] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = __RTDynamicCast(
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CPropVehicleDriveable `RTTI Type Descriptor',
         (int)&CPropJeepEpisodic `RTTI Type Descriptor',
         0);
  if ( !v5 )
    return 1;
  result = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)(v5 + 1488) + 4))(v5 + 1488, this, 1);
  if ( result )
    return 1;
  return result;
}
