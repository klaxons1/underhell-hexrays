void __fastcall sub_102F9030(int a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // esi
  int *v14; // eax
  unsigned int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22[3]; // [esp+10h] [ebp-18h] BYREF
  float v23; // [esp+1Ch] [ebp-Ch] BYREF
  float v24; // [esp+20h] [ebp-8h]
  int v25; // [esp+24h] [ebp-4h]

  v3 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == dword_106E2778 )
  {
    v5 = *(_DWORD *)(a1 + 5688);
    if ( v5 != -1
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] == v5 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1]
      || (sub_102F8540(a1, a3), v6 = *(_DWORD *)(a1 + 5688), v6 != -1)
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] == v6 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1] )
    {
      v7 = sub_100BEF30(a1, *(char **)(a3 + 4));
      if ( *(_DWORD *)(a1 + 5688) == -1
        || off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] != *(_DWORD *)(a1 + 5688) >> 12 )
      {
        v8 = 0;
      }
      else
      {
        v8 = off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1];
      }
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 140))(v8, a1, v7);
      v9 = *(_DWORD *)(a1 + 5688);
      v23 = 0.0;
      v24 = 0.0;
      *(float *)&v25 = 0.0;
      if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
        v10 = 0;
      else
        v10 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
      sub_100E10C0(v10, &v23);
      v11 = *(_DWORD *)(a1 + 5688);
      v23 = 0.0;
      v24 = 0.0;
      *(float *)&v25 = 0.0;
      if ( v11 == -1 || off_1061BE18[4 * (v11 & 0xFFF) + 2] != v11 >> 12 )
        v12 = 0;
      else
        v12 = off_1061BE18[4 * (v11 & 0xFFF) + 1];
      sub_100E11A0(v12, &v23);
      *(_BYTE *)(a1 + 5709) = _stricmp(*(const char **)(a3 + 4), "Emp_Holster") == 0;
    }
  }
  else if ( v3 == dword_106E2774 )
  {
    v13 = *(_DWORD *)(a1 + 5688);
    if ( v13 != -1 )
    {
      v14 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1];
      v15 = v13 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] == v15 )
      {
        if ( *v14 )
        {
          v16 = off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] == v15 ? *v14 : 0;
          v17 = __RTDynamicCast(
                  v16,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                  (int)&CDynamicProp `RTTI Type Descriptor',
                  0);
          v18 = v17;
          if ( v17 )
          {
            v19 = sub_100BDF40(v17, *(char **)(a3 + 4));
            if ( v19 != -1 )
              sub_1020D850(v18, v19);
          }
        }
      }
    }
  }
  else if ( v3 == dword_106E2770 )
  {
    if ( sub_1029D800((_DWORD *)(a1 + 5264)) && sub_1026A890((unsigned int *)(a1 + 5292)) )
    {
      v20 = sub_1026A890((unsigned int *)(a1 + 5292));
      sub_102F3CA0((void *)a1, v20);
    }
  }
  else if ( v3 == dword_106E276C )
  {
    sub_1023C380((_DWORD *)a1, (int)"Weapon_CombineGuard.Special1", 0.0, 0);
  }
  else if ( v3 == dword_106E2768 )
  {
    v25 = a1;
    v22[0] = 3103;
    v21 = sub_100CF460((_DWORD *)a1);
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v21 + 1392))(v21, v22, a1);
  }
  else
  {
    sub_10399420(a3);
  }
}
