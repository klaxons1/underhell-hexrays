float *__stdcall sub_100E9B40(_DWORD *a1, char a2, int a3)
{
  float *result; // eax
  double v5; // st7
  double v6; // st6
  float *v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // edx
  int *v10; // ecx
  int v11; // edx
  float *v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  float *v20; // eax
  double v21; // st6
  double v22; // st7
  unsigned int v23; // eax
  char *v24; // ecx
  unsigned int v25; // eax
  int v26; // eax
  float *v27; // eax
  _BYTE v28[48]; // [esp+0h] [ebp-88h] BYREF
  float v29[3]; // [esp+30h] [ebp-58h] BYREF
  _BYTE v30[12]; // [esp+3Ch] [ebp-4Ch] BYREF
  _BYTE v31[12]; // [esp+48h] [ebp-40h] BYREF
  float v32[2]; // [esp+54h] [ebp-34h] BYREF
  float v33; // [esp+5Ch] [ebp-2Ch]
  float v34[3]; // [esp+60h] [ebp-28h] BYREF
  float v35[3]; // [esp+6Ch] [ebp-1Ch] BYREF
  float v36; // [esp+78h] [ebp-10h] BYREF
  float v37; // [esp+7Ch] [ebp-Ch]
  float v38; // [esp+80h] [ebp-8h]
  float *v39; // [esp+84h] [ebp-4h]
  unsigned int v40; // [esp+90h] [ebp+8h]
  int v41; // [esp+98h] [ebp+10h]

  if ( a3 != -1 )
    return sub_100E9890(a1, a3, a2);
  result = 0;
  v39 = 0;
  if ( (int)a1[3] > 0 )
  {
    v5 = 0.0;
    v6 = 1.0;
    v41 = 0;
    do
    {
      v7 = (float *)(v41 + *a1);
      v8 = *((_DWORD *)v7 + 6);
      if ( v8 == -1
        || (v9 = v8 >> 12,
            v10 = (int *)((char *)off_103DCD74 + 16 * ((_DWORD)v7[6] & 0xFFF) + 4),
            v40 = v8 >> 12,
            *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v7[6] & 0xFFF) + 2) != *((_DWORD *)v7 + 6) >> 12)
        || !*v10 )
      {
        if ( *((_DWORD *)v7 + 1) == 5 && a2 )
        {
          v32[0] = v5;
          v11 = *(_DWORD *)v7;
          v32[1] = v32[0];
          v34[0] = v32[0];
          v34[2] = v32[0];
          v35[1] = v32[0];
          v35[2] = v32[0];
          v33 = v6;
          v34[1] = v33;
          v35[0] = v33;
          sub_100F2230(v11, v35, v34, v32);
          sub_100F2080(*(_DWORD *)v7, v7 + 3);
          v12 = (float *)a1[5];
          v12[1682] = v7[3];
          v12[1683] = v7[4];
          v12[1684] = v7[5];
          sub_100F1F50(*(_DWORD *)v7, 0);
        }
        else
        {
          sub_100F1F50(*(_DWORD *)v7, 0);
        }
LABEL_45:
        v6 = 1.0;
        v5 = 0.0;
        goto LABEL_46;
      }
      if ( !a2 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v7[6] & 0xFFF) + 2) == v9 )
          v13 = *v10;
        else
          v13 = 0;
        v14 = *(_DWORD *)(v13 + 324);
        if ( v14 != -1 )
        {
          if ( *((_DWORD *)off_103DCD74 + 4 * (v14 & 0xFFF) + 2) == v14 >> 12
            && *((_DWORD *)off_103DCD74 + 4 * (v14 & 0xFFF) + 1) )
          {
            v9 = v40;
            goto LABEL_24;
          }
          v9 = v40;
        }
        v15 = *((_DWORD *)v7 + 1);
        if ( !v15 || v15 == 3 )
          goto LABEL_46;
      }
LABEL_24:
      v16 = *((_DWORD *)v7 + 1);
      if ( v16 != 2 )
      {
        if ( (unsigned int)(v16 - 3) > 1 )
        {
          if ( *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v7[6] & 0xFFF) + 2) == v9 )
            v19 = *v10;
          else
            v19 = 0;
          v20 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 36))(v19);
          v21 = v7[4] + v20[1];
          v22 = v7[5] + v20[2];
          v36 = *v20 + v7[3];
          v37 = v21;
          v38 = v22;
          v23 = *((_DWORD *)v7 + 6);
          if ( v23 == -1 || *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v7[6] & 0xFFF) + 2) != v23 >> 12 )
            v24 = 0;
          else
            v24 = (char *)*((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v7[6] & 0xFFF) + 1);
          sub_100392A0(v24, (int)v30, v29, (int)v31);
        }
        else
        {
          if ( *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v7[6] & 0xFFF) + 2) == v9 )
            v17 = *v10;
          else
            v17 = 0;
          v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 164))(v17);
          if ( v18 )
          {
            (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)(v18 + 4) + 144))(
              v18 + 4,
              *((_DWORD *)v7 + 2),
              v28);
            sub_101EDA80(v28, v30, v29, v31);
            sub_101EDA00(v28, 3, &v36);
            if ( *(_BYTE *)(*(_DWORD *)(a1[5] + 80) + 512) )
              sub_100478B0(&v36, 1);
          }
        }
        sub_100F2230(*(_DWORD *)v7, v30, v29, v31);
        v25 = *((_DWORD *)v7 + 6);
        if ( v25 == -1 || *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v7[6] & 0xFFF) + 2) != v25 >> 12 )
          v26 = 0;
        else
          v26 = *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v7[6] & 0xFFF) + 1);
        sub_100F1F50(*(_DWORD *)v7, v26);
        sub_100F2080(*(_DWORD *)v7, &v36);
        v27 = (float *)a1[5];
        v27[1682] = v36;
        v27[1683] = v37;
        v27[1684] = v38;
        goto LABEL_45;
      }
LABEL_46:
      v41 += 28;
      result = (float *)((char *)v39 + 1);
      v39 = result;
    }
    while ( (int)result < a1[3] );
  }
  return result;
}
