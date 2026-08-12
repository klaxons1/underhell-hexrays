int __thiscall sub_10223CE0(void *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *, int, _DWORD, int, _DWORD))(*(_DWORD *)this + 900))(this, a2, 0, 1, 0);
  if ( result )
    return __RTDynamicCast(
             result,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBaseFlex `RTTI Type Descriptor',
             0);
  return result;
}
