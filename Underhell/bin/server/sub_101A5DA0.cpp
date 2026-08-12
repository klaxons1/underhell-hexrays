char __thiscall sub_101A5DA0(int this, int a2, int a3, int a4)
{
  int v4; // eax
  int v6; // eax
  float v8[3]; // [esp+8h] [ebp-Ch] BYREF

  v4 = *(_DWORD *)(a2 + 96);
  if ( !v4 )
    return 0;
  v6 = __RTDynamicCast(
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CBasePropDoor `RTTI Type Descriptor',
         0);
  if ( !v6 || *(_DWORD *)(v6 + 1672) || !*(_BYTE *)(v6 + 1730) )
    return 0;
  sub_10019680((_DWORD *)(this + 1736), v6);
  v8[0] = *(float *)(a2 + 84) * -1.0;
  v8[1] = *(float *)(a2 + 88) * -1.0;
  v8[2] = -1.0 * *(float *)(a2 + 92);
  *(float *)(this + 1740) = sub_10265030(v8);
  sub_10023CB0((char *)(this - 2104), 80);
  return 1;
}
