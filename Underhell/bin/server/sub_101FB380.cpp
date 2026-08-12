char __cdecl sub_101FB380(int a1, int a2, int a3, float *a4)
{
  int v4; // esi
  int v5; // eax
  float *v6; // eax
  double v7; // st7
  char result; // al
  _BYTE v9[12]; // [esp+4h] [ebp-18h] BYREF
  _BYTE v10[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&IPlayerPickupVPhysics `RTTI Type Descriptor',
         0);
  if ( !v4 || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 16))(v4, a2) )
    return 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
  v6 = (float *)sub_10424EE0(v9, v5, v10);
  *a4 = *v6;
  a4[1] = v6[1];
  v7 = v6[2];
  result = 1;
  a4[2] = v7;
  return result;
}
