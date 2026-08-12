void __thiscall sub_1033CC20(int this, float a2)
{
  double v2; // st7
  _DWORD *v4; // ecx
  int i; // eax
  int v6; // eax
  double v7; // st7
  int v8; // [esp+4h] [ebp-4h] BYREF

  v2 = *(float *)(dword_106B31C8 + 12) + a2;
  if ( v2 > *(float *)(this + 4228) )
    *(float *)(this + 4228) = v2;
  v4 = *(_DWORD **)(this + 2796);
  if ( v4 )
  {
    for ( i = sub_100B1560(v4, &v8, 1); i; i = sub_100B1630(*(_DWORD **)(this + 2796), &v8, 1) )
    {
      v6 = __RTDynamicCast(
             i,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
             (int)&CNPC_Combine `RTTI Type Descriptor',
             0);
      if ( v6 && *(_BYTE *)(v6 + 4960) )
      {
        v7 = *(float *)(dword_106B31C8 + 12) + a2;
        if ( v7 > *(float *)(v6 + 4228) )
          *(float *)(v6 + 4228) = v7;
      }
    }
  }
}
