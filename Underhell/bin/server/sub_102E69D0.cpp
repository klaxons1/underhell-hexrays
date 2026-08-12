int *__thiscall sub_102E69D0(_DWORD *this, int a2)
{
  int *result; // eax

  sub_102587A0(this, a2);
  result = (int *)(*(int (__thiscall **)(_DWORD *, int))(*this + 752))(this, a2);
  if ( (_BYTE)result )
  {
    result = (int *)__RTDynamicCast(
                      a2,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CBaseCombatWeapon `RTTI Type Descriptor',
                      0);
    if ( result )
      return sub_102E6910(this, (int)result);
  }
  return result;
}
