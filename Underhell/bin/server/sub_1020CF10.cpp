int __usercall sub_1020CF10@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // ebx
  int v4; // edi
  int v5; // edx
  const char *v6; // eax
  float *v8; // edi
  float *v9; // edi
  double v10; // [esp+10h] [ebp-2Ch]
  double v11; // [esp+10h] [ebp-2Ch]
  double v12; // [esp+18h] [ebp-24h]
  double v13; // [esp+18h] [ebp-24h]
  double v14; // [esp+30h] [ebp-Ch] BYREF
  const char *v15; // [esp+38h] [ebp-4h]

  v3 = *(const char **)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a1 + 28))(a1, (char *)&v14 + 4);
  if ( v3 && *v3 )
  {
    sub_100E8220(a2, v3);
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 100))(a1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, v3);
    v4 = sub_102064F0((void *)a1);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 836))(a1) )
    {
      if ( v4 == 3 )
      {
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        v6 = *(const char **)(a1 + 92);
        if ( !v6 )
          v6 = String;
        DevWarning(
          "%s at %.0f %.0f %0.f uses model %s, which has an invalid prop_data type. DELETED.\n",
          v6,
          *(float *)(a1 + 580),
          *(float *)(a1 + 584),
          *(float *)(a1 + 588),
          v3);
        return sub_1025FAC0(a1);
      }
      if ( v4 == 2 )
      {
        if ( *(char **)(a1 + 92) == "prop_physics" || sub_100D6240((_DWORD *)a1, "prop_physics") )
        {
          v15 = *(const char **)(a1 + 92);
          if ( !v15 )
            v15 = String;
          v8 = (float *)sub_10019640((_DWORD *)a1);
          v12 = *((float *)sub_10019640((_DWORD *)a1) + 2);
          v10 = *((float *)sub_10019640((_DWORD *)a1) + 1);
          DevWarning(
            "%s at %.0f %.0f %0.f uses model %s, which has no propdata which means it must be used on a prop_static. DELETED.\n",
            v15,
            *v8,
            v10,
            v12,
            v3);
          return sub_1025FAC0(a1);
        }
      }
      else if ( !v4
             && !__RTDynamicCast(
                   a1,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseProp `RTTI Type Descriptor',
                   (int)&CPhysicsProp `RTTI Type Descriptor',
                   0) )
      {
        v15 = *(const char **)(a1 + 92);
        if ( !v15 )
          v15 = String;
        v9 = (float *)sub_10019640((_DWORD *)a1);
        v13 = *((float *)sub_10019640((_DWORD *)a1) + 2);
        v11 = *((float *)sub_10019640((_DWORD *)a1) + 1);
        DevWarning(
          "%s at %.0f %.0f %0.f uses model %s, which has propdata which means that it be used on a prop_physics. DELETED.\n",
          v15,
          *v9,
          v11,
          v13,
          v3);
        return sub_1025FAC0(a1);
      }
    }
    sub_100E0970(a1, v5, 7, 0);
    if ( *(_BYTE *)(a1 + 225) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
      *(_BYTE *)(a1 + 225) = 0;
    }
    sub_100EC4A0((int *)a1, -1.0, 0);
    sub_100BC090((float *)(a1 + 124), (float *)(dword_106B31C8 + 12));
    v14 = 0.0;
    sub_10045730((float *)(a1 + 864), &v14);
    return sub_10031B50(a1, 0.0);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    Warning(
      "prop at %.0f %.0f %0.f missing modelname\n",
      *(float *)(a1 + 580),
      *(float *)(a1 + 584),
      *(float *)(a1 + 588));
    return sub_1025FAC0(a1);
  }
}
