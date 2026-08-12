int __usercall sub_102F6550@<eax>(_DWORD *a1@<ecx>, double a2@<st0>)
{
  unsigned int *v3; // eax
  unsigned int *v4; // edi
  int v5; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) )
  {
    if ( a1[581] == 2 && sub_10023D10(a1, 53) && !sub_10023D10(a1, 32) )
    {
      v3 = (unsigned int *)(*(int (__thiscall **)(_DWORD *, int))(*a1 + 1460))(a1, 1048351);
      v4 = v3;
      if ( v3 )
      {
        if ( sub_1026A890(v3) )
        {
          v5 = sub_1026A890(v4);
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 220))(v5) == 19 && v4[8] == 7 )
            return 104;
        }
      }
    }
  }
  if ( sub_10023D10(a1, 81) )
    return 100;
  if ( sub_10023D10(a1, 79) && sub_10023D10(a1, 32) && sub_102F40A0((int)a1, a2) )
  {
    (*(void (__thiscall **)(_DWORD *))(*a1 + 2288))(a1);
    return 99 - sub_102F4670((int)a1);
  }
  if ( !sub_102F4670((int)a1) && !sub_102F46F0(a1) && !sub_10295590((_BYTE *)a1 + 5144) )
    return 103;
  if ( !sub_10023D10(a1, 46) )
    goto LABEL_30;
  if ( a1[688] )
    return 65;
  *(float *)v10 = 540.0;
  *(float *)&v10[1] = 540.0;
  *(float *)&v10[2] = 100.0;
  v7 = sub_100C9B10(a1, (float *)v10);
  v8 = __RTDynamicCast(
         v7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CBaseHLCombatWeapon `RTTI Type Descriptor',
         0);
  v9 = v8;
  if ( v8 )
  {
    *((float *)a1 + 687) = *(float *)(dword_106B31C8 + 12) + 10.0;
    sub_100D14A0(v8, 10.0, (int)a1);
    sub_100218B0(a1, v9);
    return 109;
  }
  else
  {
LABEL_30:
    if ( sub_10023D10(a1, 13) )
      (*(void (__thiscall **)(_DWORD *))(*a1 + 2176))(a1);
    return sub_10399230((int)a1);
  }
}
