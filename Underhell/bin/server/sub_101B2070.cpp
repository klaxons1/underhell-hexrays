int __stdcall sub_101B2070(int a1)
{
  int result; // eax
  int v2; // esi
  int (__thiscall ***v3)(_DWORD, int); // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
  v2 = result;
  if ( result )
  {
    v3 = (int (__thiscall ***)(_DWORD, int))__RTDynamicCast(
                                              result,
                                              0,
                                              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                                              (int)&IPhysicsConstraintEvent `RTTI Type Descriptor',
                                              0);
    if ( v3 )
      return (**v3)(v3, a1);
    else
      return (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v2 + 148))(
               v2,
               "ConstraintBroken",
               0,
               0,
               0);
  }
  return result;
}
