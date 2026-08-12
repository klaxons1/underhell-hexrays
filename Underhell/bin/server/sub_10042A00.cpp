int __usercall sub_10042A00@<eax>(int a1@<ebp>, int a2, float *a3, int a4, char a5)
{
  int result; // eax
  int v6; // esi
  float v7; // ecx
  float v8; // edx
  int v9; // eax
  float *v10; // edi
  float *v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // [esp+0h] [ebp-108h]
  float v17[20]; // [esp+2Ch] [ebp-DCh] BYREF
  _BYTE v18[12]; // [esp+7Ch] [ebp-8Ch] BYREF
  float v19[10]; // [esp+88h] [ebp-80h] BYREF
  char v20; // [esp+B3h] [ebp-55h]
  int v21; // [esp+D8h] [ebp-30h] BYREF
  float v22[3]; // [esp+E4h] [ebp-24h] BYREF
  float v23; // [esp+F0h] [ebp-18h] BYREF
  float v24; // [esp+F4h] [ebp-14h]
  float v25; // [esp+F8h] [ebp-10h]
  int v26; // [esp+FCh] [ebp-Ch]
  void *v27; // [esp+100h] [ebp-8h]
  void *retaddr; // [esp+108h] [ebp+0h]

  v26 = a1;
  v27 = retaddr;
  result = sub_10022B00(0);
  v6 = result;
  if ( result )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v6 + 236) & 0x1000) != 0 )
      {
        v7 = *a3;
        v8 = a3[1];
        v25 = a3[2];
        v23 = v7;
        v24 = v8;
        (*(void (__thiscall **)(int, int, float *))(*(_DWORD *)v6 + 2040))(v6, a2, &v23);
        v22[0] = v23;
        v9 = *(_DWORD *)(v6 + 1676);
        v22[2] = v25 + 1.0;
        v22[1] = v24;
        v10 = (float *)sub_10073730(v9);
        v11 = (float *)sub_10073710(*(_DWORD *)(v6 + 1676));
        sub_1001F200(v17, &v23, v22, v11, v10);
        sub_10265570(v6, 0);
        (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v17,
          33701899,
          &v21,
          v18);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v18, (int)v19, 255, 255, 0, 1, -1.0);
        if ( v20 || 1.0 != v19[8] )
        {
          if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
            sub_100DAE60(v6);
          v16 = sub_10073730(*(_DWORD *)(v6 + 1676));
          v12 = sub_10073710(*(_DWORD *)(v6 + 1676));
          sub_1011B9E0((int)&v23, v12, v16, v6 + 704, 255, 0, 0, 20, 0.5);
        }
        *(float *)(v6 + 2852) = v23;
        *(float *)(v6 + 2856) = v24;
        *(float *)(v6 + 2860) = v25;
        v13 = *(_DWORD *)(v6 + 2688);
        if ( v13 != -1
          && off_1061BE18[4 * (*(_DWORD *)(v6 + 2688) & 0xFFF) + 2] == v13 >> 12
          && off_1061BE18[4 * (*(_DWORD *)(v6 + 2688) & 0xFFF) + 1] )
        {
          sub_1002FE40(v6);
        }
        if ( a5 )
          sub_100457E0(72);
        else
          sub_100457E0(71);
        *(float *)(v6 + 2560) = *(float *)(dword_106B31C8 + 12);
      }
      result = sub_1012BC10(v6);
      v14 = result;
      if ( !result )
        break;
      while ( 1 )
      {
        v15 = __RTDynamicCast(
                v14,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CAI_BaseNPC `RTTI Type Descriptor',
                0);
        if ( v15 )
          break;
        result = sub_1012BC10(v14);
        v14 = result;
        if ( !result )
          return result;
      }
      v6 = v15;
    }
  }
  return result;
}
