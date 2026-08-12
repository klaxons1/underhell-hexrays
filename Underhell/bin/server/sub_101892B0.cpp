int __stdcall sub_101892B0(int a1, int a2)
{
  int result; // eax
  int (__thiscall ***v3)(_DWORD); // eax
  int (__thiscall ***v4)(_DWORD); // eax

  if ( !a1 )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 220))(a1) == 1 )
    return a1;
  v3 = (int (__thiscall ***)(_DWORD))__RTDynamicCast(
                                       a1,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                                       (int)&IScorer `RTTI Type Descriptor',
                                       0);
  if ( !v3 || (result = (**v3)(v3)) == 0 )
  {
    v4 = (int (__thiscall ***)(_DWORD))__RTDynamicCast(
                                         a2,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                                         (int)&IScorer `RTTI Type Descriptor',
                                         0);
    if ( !v4 )
      return 0;
    result = (**v4)(v4);
    if ( !result )
      return 0;
  }
  return result;
}
