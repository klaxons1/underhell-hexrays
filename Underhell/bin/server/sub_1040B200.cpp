char __thiscall sub_1040B200(int this, int a2)
{
  int v2; // esi
  unsigned int v5; // eax
  int *v6; // ecx
  int *v7; // eax
  float *v8; // edi
  float *v9; // esi
  float *v10; // eax
  double v11; // st7
  float v12[3]; // [esp+8h] [ebp-1Ch] BYREF
  float v13[3]; // [esp+14h] [ebp-10h] BYREF
  float v14; // [esp+20h] [ebp-4h]

  v2 = a2;
  if ( !a2 )
    return 0;
  v5 = *(_DWORD *)(a2 + 412);
  if ( v5 == -1 )
    return 0;
  v6 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 412) & 0xFFF) + 1];
  if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 412) & 0xFFF) + 2] != v5 >> 12 || !*v6 )
    return 0;
  v7 = (int *)__RTDynamicCast(
                *v6,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CNPC_Strider `RTTI Type Descriptor',
                0);
  v8 = (float *)v7;
  if ( !v7 || *(_BYTE *)(this + 1690) )
    return 0;
  if ( sub_103B1280(v7, a2) )
  {
    v9 = (float *)sub_10019640((_DWORD *)this);
    v10 = sub_103AFA80(v8, v12);
    v13[0] = *v10 - *v9;
    v13[1] = v10[1] - v9[1];
    v13[2] = v10[2] - v9[2];
    v11 = *(float *)(dword_106F0B54 + 44);
    v14 = *(float *)(dword_106F0B54 + 44);
    sub_100D7A40(v13);
    if ( v11 > v14 )
      return 0;
    v2 = a2;
  }
  *(_DWORD *)(this + 1700) = sub_103AF7E0((int *)v8, v2);
  return 1;
}
