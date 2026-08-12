float *__cdecl sub_101FB400(float *a1, int a2, int a3)
{
  int v3; // esi
  float *result; // eax
  double v5; // st7

  v3 = __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&IPlayerPickupVPhysics `RTTI Type Descriptor',
         0);
  if ( v3 && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 32))(v3, a3) )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 28))(v3, a1);
    return a1;
  }
  else
  {
    *a1 = (double)sub_10219A30() * 0.000030518509 * 1200.0 - 600.0;
    a1[1] = (double)sub_10219A30() * 0.000030518509 * 1200.0 - 600.0;
    v5 = (double)sub_10219A30();
    result = a1;
    a1[2] = v5 * 0.000030518509 * 1200.0 - 600.0;
  }
  return result;
}
