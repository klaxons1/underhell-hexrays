void __usercall sub_100F9240(int a1@<ecx>, int a2@<edi>)
{
  int v3; // ebx
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  double v10; // st7
  float v11; // eax
  float v12; // ecx
  double v13; // st6
  double v14; // st5
  double v15; // st4
  double v16; // st7
  float *v17; // eax
  int v18[13]; // [esp+10h] [ebp-70h] BYREF
  char v19; // [esp+46h] [ebp-3Ah]
  float v20; // [esp+64h] [ebp-1Ch] BYREF
  float v21; // [esp+68h] [ebp-18h]
  float v22; // [esp+6Ch] [ebp-14h]
  int v23[3]; // [esp+70h] [ebp-10h] BYREF
  float v24; // [esp+7Ch] [ebp-4h]

  sub_100F81B0(a1);
  if ( (*(_DWORD *)(a1 + 312) & 0x400000) != 0 )
    goto LABEL_6;
  a2 = 0;
  v3 = 0;
  if ( !sub_100F7A60(a1, -1, (void (__thiscall *)(char *))sub_100F7500, 0, 0, 0) )
    return;
  if ( *(int *)(a1 + 208) <= 0 )
  {
LABEL_6:
    sub_10038150(a1);
    if ( *(float *)(a1 + 252) > 0.0
      || (v4 = *(_DWORD *)(a1 + 488), v4 == -1)
      || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 488) & 0xFFF) + 2) != v4 >> 12
      || !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 488) & 0xFFF) + 1)
      || (v5 = sub_100F7AF0((_DWORD *)a1), !sub_1000EA80(v5, a2)) )
    {
      v6 = *(_DWORD *)(a1 + 488);
      if ( v6 != -1 )
      {
        v7 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(a1 + 488) & 0xFFF) + 4);
        v8 = v6 >> 12;
        if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 488) & 0xFFF) + 2) == v8 )
        {
          if ( *v7 )
          {
            if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 488) & 0xFFF) + 2) == v8 )
              v9 = *v7;
            else
              v9 = 0;
            *(_DWORD *)(a1 + 488) = -1;
            if ( v9 )
            {
              sub_100F8800(a1, v9);
            }
            else
            {
              sub_100F8800(a1, 0);
              sub_100F7DF0(0, (_BYTE *)a1);
            }
            sub_1000DEC0((_DWORD *)a1, 1);
          }
        }
      }
    }
    if ( (*(_BYTE *)(a1 + 732) & 1) == 0
      || (sub_10038150(a1), !sub_10024F50((float *)(a1 + 244), &flt_10459240))
      || (sub_10034C40((float *)a1, &flt_1045924C), !sub_10024F50((float *)(a1 + 284), &flt_10459240)) )
    {
      sub_100F7730((float *)a1);
      if ( *(_BYTE *)(a1 + 316) != 5 || (*(_DWORD *)(a1 + 732) & 0x400) != 0 )
      {
        sub_10038150(a1);
        v10 = *(float *)(a1 + 284);
        v11 = *(float *)(a1 + 248);
        v12 = *(float *)(a1 + 252);
        v20 = *(float *)(a1 + 244);
        v13 = *(float *)(a1 + 288);
        v21 = v11;
        v14 = *(float *)(a1 + 292);
        v22 = v12;
        v15 = (v10 + v20) * *((float *)off_103DC81C + 4);
        v16 = *((float *)off_103DC81C + 4);
        *(float *)v23 = v15;
        *(float *)&v23[1] = (v13 + v11) * v16;
        *(float *)&v23[2] = v16 * (v14 + v12);
        sub_100F7730((float *)a1);
      }
      else
      {
        sub_100F7870(a1, (float *)v23);
      }
      v24 = *((float *)off_103DC81C + 4);
      v17 = (float *)sub_10034AE0((char *)a1);
      v20 = v24 * *(float *)(a1 + 256) + *v17;
      v21 = *(float *)(a1 + 260) * v24 + v17[1];
      v22 = v24 * *(float *)(a1 + 264) + v17[2];
      sub_10034B10((float *)a1, &v20);
      sub_100F71F0(a1, (float *)v23, (int)v18);
      sub_100F7730((float *)a1);
      if ( v19 )
      {
        sub_100399E0(a1, &flt_10459240);
        sub_10034C40((float *)a1, &flt_1045924C);
      }
      else if ( 1.0 == *(float *)&v18[11] )
      {
LABEL_35:
        sub_100F82D0(a1);
      }
      else
      {
        switch ( *(_BYTE *)(a1 + 317) )
        {
          case 0:
          case 3:
            sub_100F8F80(a1, (int)v18, (float *)v23);
            goto LABEL_35;
          case 1:
            sub_100F8CA0(a1, (int)v18, (float *)v23, 0.0);
            sub_100F82D0(a1);
            break;
          case 2:
            sub_100F9160(a1, (int)v18, (float *)v23);
            sub_100F82D0(a1);
            break;
          default:
            goto LABEL_35;
        }
      }
    }
  }
  else
  {
    while ( sub_100F7A60(
              a1,
              a2,
              *(void (__thiscall **)(char *))(*(_DWORD *)(a1 + 196) + v3),
              *(_DWORD *)(v3 + *(_DWORD *)(a1 + 196) + 4),
              *(_DWORD *)(v3 + *(_DWORD *)(a1 + 196) + 8),
              *(_DWORD *)(v3 + *(_DWORD *)(a1 + 196) + 12)) )
    {
      ++a2;
      v3 += 32;
      if ( a2 >= *(_DWORD *)(a1 + 208) )
        goto LABEL_6;
    }
  }
}
