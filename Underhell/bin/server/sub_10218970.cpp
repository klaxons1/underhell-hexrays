void __thiscall sub_10218970(int this, int a2)
{
  int v2; // esi
  float *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // esi
  float v8; // edx
  float v9; // eax
  float v10[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = a2;
  if ( *(float *)&a2 != 0.0 && (*(_DWORD *)(a2 + 256) & 0x10000000) != 0 )
  {
    v4 = (float *)sub_1012A660(this, (int *)this, a2);
    if ( v4 )
    {
      sub_100EA940((int *)this, 0x10000000);
      *(float *)(this + 900) = *(float *)(v2 + 900);
      v5 = sub_100BD8F0((_DWORD *)v2);
      v6 = __RTDynamicCast(
             v5,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CEntityDissolve `RTTI Type Descriptor',
             0);
      v7 = v6;
      if ( v6 )
      {
        v8 = *(float *)(v6 + 836);
        v9 = *(float *)(v6 + 840);
        v10[0] = *(float *)(v7 + 832);
        v10[1] = v8;
        v10[2] = v9;
        sub_1014EFD0(v4 + 208, v10);
        sub_100FAAC0((int)v4, *(_DWORD *)(v7 + 828));
        if ( *(_DWORD *)(v7 + 828) == 3 )
        {
          sub_100C1FC0((int)v4, *(_DWORD *)(v7 + 844));
          *(float *)&a2 = 0.2;
          sub_1012A300(v4 + 205, (float *)&a2);
          *(float *)&a2 = 0.1;
          sub_100C1ED0(v4 + 203, (float *)&a2);
          *(float *)&a2 = 0.050000001;
          sub_1012A2B0(v4 + 204, (float *)&a2);
          *(float *)&a2 = 0.1;
          sub_1012A260(v4 + 202, (float *)&a2);
        }
      }
    }
  }
}
