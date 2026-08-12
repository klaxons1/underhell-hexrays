char __thiscall sub_1026DBB0(int this, char ArgList, float *a3, float *a4)
{
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // esi
  int v9; // esi
  char Buffer[32]; // [esp+18h] [ebp-38h] BYREF
  int v12[3]; // [esp+38h] [ebp-18h] BYREF
  int v13[3]; // [esp+44h] [ebp-Ch] BYREF

  v5 = __RTDynamicCast(
         *(_DWORD *)(this + 44),
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CBaseAnimating `RTTI Type Descriptor',
         0);
  v6 = v5;
  if ( v5
    && (sub_10429A00(Buffer, 0x20u, "vehicle_feet_passenger%d", ArgList),
        v7 = sub_100BEF30(v6, Buffer),
        v5 = sub_100BDCE0(v6, 1),
        v7 > 0)
    && v5 != -1
    && (LOBYTE(v5) = sub_1026CAC0((_DWORD **)this, v5, v7, 0.0, (float *)v13, (float *)v12), (_BYTE)v5) )
  {
    sub_10262790(v6, (int)v13, (int)v12);
    if ( a3 )
    {
      *a3 = *(float *)v13;
      a3[1] = *(float *)&v13[1];
      a3[2] = *(float *)&v13[2];
    }
    LOBYTE(v5) = (_BYTE)a4;
    if ( a4 )
    {
      *a4 = *(float *)v12;
      a4[1] = *(float *)&v12[1];
      a4[2] = *(float *)&v12[2];
    }
  }
  else
  {
    if ( a3 )
    {
      v8 = *(_DWORD *)(this + 44);
      if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
        LOBYTE(v5) = sub_100DAE60(*(_DWORD *)(this + 44));
      *a3 = *(float *)(v8 + 580);
      a3[1] = *(float *)(v8 + 584);
      a3[2] = *(float *)(v8 + 588);
    }
    if ( a4 )
    {
      v9 = *(_DWORD *)(this + 44);
      v5 = *(_DWORD *)(v9 + 252) >> 11;
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
        LOBYTE(v5) = sub_100DAE60(*(_DWORD *)(this + 44));
      *a4 = *(float *)(v9 + 704);
      a4[1] = *(float *)(v9 + 708);
      a4[2] = *(float *)(v9 + 712);
    }
  }
  return v5;
}
