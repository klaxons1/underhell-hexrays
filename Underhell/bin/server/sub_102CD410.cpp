void __usercall sub_102CD410(unsigned __int16 *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  const char *v4; // eax
  int *v5; // eax
  int v6; // edx
  const char *v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int *v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  _DWORD *v15; // edi
  char *v16; // eax
  int v17; // eax
  bool v18; // al
  bool v19; // zf
  char *v20; // eax
  char *v21; // eax
  char *v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // eax
  double v27; // st7
  int v28; // edx
  int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  _DWORD *v32; // ecx
  float *v33; // eax
  unsigned int v34; // edi
  int *v35; // ecx
  char *v36; // [esp+14h] [ebp-30h]
  float v37; // [esp+14h] [ebp-30h]
  __int64 v38; // [esp+14h] [ebp-30h]
  _BYTE v39[12]; // [esp+24h] [ebp-20h] BYREF
  float v40[3]; // [esp+30h] [ebp-14h] BYREF
  _BYTE v41[7]; // [esp+3Ch] [ebp-8h] BYREF
  char v42; // [esp+43h] [ebp-1h] BYREF

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)a1 + 100))(a1);
  v4 = (const char *)*((_DWORD *)a1 + 206);
  if ( !v4 )
    v4 = String;
  v5 = (int *)sub_102D9B20(v4);
  *((_DWORD *)a1 + 207) = sub_100B9D10(v5, v36);
  sub_100E0970((int)a1, v6, 7, 0);
  sub_10112C00((int)(a1 + 160), 6);
  v7 = *(const char **)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *, int, int))(*(_DWORD *)a1 + 28))(
                         a1,
                         v41,
                         a3,
                         a2);
  if ( !v7 )
    v7 = String;
  (*(void (__thiscall **)(unsigned __int16 *, const char *))(*(_DWORD *)a1 + 104))(a1, v7);
  v8 = *((_DWORD *)a1 + 62);
  *((_DWORD *)a1 + 63) |= 0x40000u;
  if ( (v8 & 0x8000) != 0 )
    sub_101129A0(a1 + 160, a1[178] | 4);
  *((_DWORD *)a1 + 342) = -1;
  v9 = *((_DWORD *)a1 + 75);
  if ( v9 != -1 )
  {
    v10 = &off_1061BE18[4 * (*((_DWORD *)a1 + 75) & 0xFFF) + 1];
    v11 = v9 >> 12;
    if ( off_1061BE18[4 * (*((_DWORD *)a1 + 75) & 0xFFF) + 2] == v11 )
    {
      if ( *v10 )
      {
        v12 = off_1061BE18[4 * (*((_DWORD *)a1 + 75) & 0xFFF) + 2] == v11 ? *v10 : 0;
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 208))(v12) )
        {
          v13 = *((_DWORD *)a1 + 75);
          if ( v13 == -1 || off_1061BE18[4 * (*((_DWORD *)a1 + 75) & 0xFFF) + 2] != v13 >> 12 )
            v14 = 0;
          else
            v14 = off_1061BE18[4 * (*((_DWORD *)a1 + 75) & 0xFFF) + 1];
          v15 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 208))(v14);
          if ( *((_DWORD *)a1 + 278) )
          {
            v16 = (char *)*((_DWORD *)a1 + 278);
            if ( !v16 )
              v16 = (char *)String;
            v17 = sub_100BEF30((int)v15, v16);
            if ( v17 )
            {
              (*(void (__thiscall **)(unsigned __int16 *, _DWORD *, int))(*(_DWORD *)a1 + 140))(a1, v15, v17);
              sub_100E10C0((int)a1, &flt_106F1CA8);
              sub_100E11A0((int)a1, &flt_106F1CB4);
            }
          }
          v18 = *((_DWORD *)a1 + 279) && *((_DWORD *)a1 + 280);
          v19 = *((_DWORD *)a1 + 276) == 0;
          *((_BYTE *)a1 + 1132) = v18;
          if ( !v19 )
          {
            if ( v18 )
            {
              v20 = (char *)*((_DWORD *)a1 + 279);
              if ( !v20 )
                v20 = (char *)String;
              sub_10078870(v15, v20, 0.0);
              v21 = (char *)*((_DWORD *)a1 + 280);
              if ( !v21 )
                v21 = (char *)String;
              sub_10078870(v15, v21, 0.0);
              sub_100BCCF0(v15);
            }
            v22 = (char *)*((_DWORD *)a1 + 276);
            if ( !v22 )
              v22 = (char *)String;
            v23 = sub_100BEF30((int)v15, v22);
            *((_DWORD *)a1 + 277) = v23;
            sub_100BCCA0(v15, v23, (int)v40, (int)v39);
            if ( (*((_DWORD *)a1 + 63) & 0x800) != 0 )
              sub_100DAE60((int)a1);
            sub_10421BA0(v40, a1 + 250, a1 + 510);
          }
          if ( *((_BYTE *)a1 + 1132) )
          {
            sub_100EAB80(a1, 32);
            v40[0] = *((float *)a1 + 282);
            v40[1] = *((float *)a1 + 281);
            v40[2] = 0.0;
            sub_100E11A0((int)a1, v40);
            sub_10112C00((int)(a1 + 160), 0);
            sub_100E0970((int)a1, v24, 8, 0);
            v25 = sub_10019AD0(a1);
            v26 = __RTDynamicCast(
                    v25,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CDynamicProp `RTTI Type Descriptor',
                    0);
            if ( v26 )
            {
              v42 = 1;
              sub_1020C5C0((_BYTE *)(v26 + 1551), &v42);
            }
          }
        }
      }
    }
  }
  v27 = 1.0;
  v28 = *((_DWORD *)a1 + 63);
  *((float *)a1 + 284) = 1.0;
  *((float *)a1 + 286) = 1.0;
  *((float *)a1 + 285) = *(float *)(dword_106B31C8 + 12);
  *((float *)a1 + 287) = *(float *)(dword_106B31C8 + 12) + 1.0;
  *((float *)a1 + 235) = *((float *)a1 + 183);
  if ( (v28 & 0x800) != 0 )
  {
    sub_100DAE60((int)a1);
    v27 = 1.0;
  }
  v29 = *((_DWORD *)a1 + 63);
  *((float *)a1 + 236) = *((float *)a1 + 177);
  *((float *)a1 + 240) = *((float *)a1 + 182);
  if ( (v29 & 0x800) != 0 )
  {
    sub_100DAE60((int)a1);
    v27 = 1.0;
  }
  *((float *)a1 + 241) = *((float *)a1 + 177);
  *((float *)a1 + 270) = flt_106F1CA8;
  *((float *)a1 + 271) = flt_106F1CAC;
  *((float *)a1 + 272) = flt_106F1CB0;
  if ( (a1[124] & 1) != 0
    || (*((_DWORD *)a1 + 62) & 0x20) != 0
    && ((v30 = *((_DWORD *)a1 + 230), v30 == -1)
     || off_1061BE18[4 * (*((_DWORD *)a1 + 230) & 0xFFF) + 2] != v30 >> 12
     || !off_1061BE18[4 * (*((_DWORD *)a1 + 230) & 0xFFF) + 1]) )
  {
    v37 = v27 + *(float *)(dword_106B31C8 + 12);
    sub_100EC4A0((int *)a1, v37, 0);
    *((float *)a1 + 344) = *(float *)(dword_106B31C8 + 12) + 1.0;
  }
  v31 = *((_DWORD *)a1 + 75);
  if ( v31 == -1 || off_1061BE18[4 * (*((_DWORD *)a1 + 75) & 0xFFF) + 2] != v31 >> 12 )
    v32 = 0;
  else
    v32 = (_DWORD *)off_1061BE18[4 * (*((_DWORD *)a1 + 75) & 0xFFF) + 1];
  sub_102608F0(a1 + 418, v32, *((unsigned __int8 *)a1 + 305));
  v33 = (float *)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)a1 + 744))(a1, v39);
  *((float *)a1 + 225) = *v33;
  *((float *)a1 + 226) = v33[1];
  *((float *)a1 + 227) = v33[2];
  if ( *((_DWORD *)a1 + 208) > 5u )
    *((_DWORD *)a1 + 208) = 0;
  v34 = *((_DWORD *)a1 + 62) & 0xFFFFFF7F;
  if ( *((_DWORD *)a1 + 62) != v34 )
  {
    if ( *((_BYTE *)a1 + 84) )
    {
      *((_BYTE *)a1 + 88) |= 1u;
    }
    else
    {
      v35 = (int *)*((_DWORD *)a1 + 6);
      if ( v35 )
        sub_100194B0(v35, 248);
    }
    *((_DWORD *)a1 + 62) = v34;
  }
  if ( (a1[124] & 0x40) != 0 && *((_BYTE *)a1 + 225) != 2 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)a1 + 480))(a1, (int)a1 + 225);
    *((_BYTE *)a1 + 225) = 2;
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)a1 + 80) + 44))((_DWORD *)a1 + 80) )
    (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)a1 + 584))(a1);
  v19 = (a1[124] & 1) == 0;
  *((float *)a1 + 252) = *((float *)a1 + 250) * *((float *)a1 + 250);
  *((float *)a1 + 253) = *((float *)a1 + 251) * *((float *)a1 + 251);
  *((float *)a1 + 266) = *((float *)a1 + 266) * *((float *)a1 + 266);
  *((float *)a1 + 268) = 0.0;
  if ( !v19 )
  {
    HIDWORD(v38) = a1;
    LODWORD(v38) = a1;
    sub_1010DD80((_DWORD *)a1 + 336, v38, 0.0);
  }
}
