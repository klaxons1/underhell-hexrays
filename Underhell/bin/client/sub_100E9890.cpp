float *__stdcall sub_100E9890(_DWORD *a1, int a2, char a3)
{
  unsigned int v3; // eax
  _DWORD *v4; // esi
  float *result; // eax
  int *v6; // edi
  float v7; // edx
  float *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  float *v16; // eax
  double v17; // st6
  double v18; // st7
  unsigned int v19; // eax
  char *v20; // ecx
  unsigned int v21; // eax
  int v22; // eax
  _BYTE v23[48]; // [esp+Ch] [ebp-84h] BYREF
  float v24[3]; // [esp+3Ch] [ebp-54h] BYREF
  _BYTE v25[12]; // [esp+48h] [ebp-48h] BYREF
  _BYTE v26[12]; // [esp+54h] [ebp-3Ch] BYREF
  float v27[3]; // [esp+60h] [ebp-30h] BYREF
  float v28[3]; // [esp+6Ch] [ebp-24h] BYREF
  float v29[3]; // [esp+78h] [ebp-18h] BYREF
  float v30; // [esp+84h] [ebp-Ch] BYREF
  float v31; // [esp+88h] [ebp-8h]
  float v32; // [esp+8Ch] [ebp-4h]

  v3 = *(_DWORD *)(*a1 + 28 * a2 + 24);
  v4 = (_DWORD *)(*a1 + 28 * a2);
  if ( v3 != -1
    && (result = (float *)(v3 >> 12),
        v6 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(*a1 + 28 * a2 + 24) & 0xFFF) + 4),
        *((float **)off_103DCD74 + 4 * (*(_DWORD *)(*a1 + 28 * a2 + 24) & 0xFFF) + 2) == result)
    && *v6 )
  {
    if ( a3
      || (*((float **)off_103DCD74 + 4 * (*(_DWORD *)(*a1 + 28 * a2 + 24) & 0xFFF) + 2) != result
        ? (v9 = 0)
        : (v9 = *v6),
          (v10 = *(_DWORD *)(v9 + 324), v10 != -1)
       && *((_DWORD *)off_103DCD74 + 4 * (v10 & 0xFFF) + 2) == v10 >> 12
       && *((_DWORD *)off_103DCD74 + 4 * (v10 & 0xFFF) + 1)
       || (v11 = v4[1]) != 0 && v11 != 3) )
    {
      v12 = v4[1];
      if ( v12 != 2 )
      {
        if ( (unsigned int)(v12 - 3) > 1 )
        {
          if ( *((float **)off_103DCD74 + 4 * (*(_DWORD *)(*a1 + 28 * a2 + 24) & 0xFFF) + 2) == result )
            v15 = *v6;
          else
            v15 = 0;
          v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 36))(v15);
          v17 = *((float *)v4 + 4) + v16[1];
          v18 = *((float *)v4 + 5) + v16[2];
          v30 = *v16 + *((float *)v4 + 3);
          v31 = v17;
          v32 = v18;
          v19 = v4[6];
          if ( v19 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v4[6] & 0xFFF) + 2) != v19 >> 12 )
            v20 = 0;
          else
            v20 = (char *)*((_DWORD *)off_103DCD74 + 4 * (v4[6] & 0xFFF) + 1);
          sub_100392A0(v20, (int)v25, v24, (int)v26);
        }
        else
        {
          v13 = sub_1006BE10(v4 + 6);
          v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 164))(v13);
          if ( v14 )
          {
            (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)(v14 + 4) + 144))(v14 + 4, v4[2], v23);
            sub_101EDA80(v23, v25, v24, v26);
            sub_101EDA00(v23, 3, &v30);
            if ( *(_BYTE *)(*(_DWORD *)(a1[5] + 80) + 512) )
              sub_100478B0(&v30, 1);
          }
        }
        sub_100F2230(*v4, v25, v24, v26);
        v21 = v4[6];
        if ( v21 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v4[6] & 0xFFF) + 2) != v21 >> 12 )
          v22 = 0;
        else
          v22 = *((_DWORD *)off_103DCD74 + 4 * (v4[6] & 0xFFF) + 1);
        sub_100F1F50(*v4, v22);
        sub_100F2080(*v4, &v30);
        result = (float *)a1[5];
        result[1682] = v30;
        result[1683] = v31;
        result[1684] = v32;
      }
    }
  }
  else
  {
    if ( v4[1] == 5 )
    {
      if ( a3 )
      {
        v27[0] = 0.0;
        v7 = *(float *)v4;
        v27[1] = 0.0;
        v27[2] = 1.0;
        v28[1] = 1.0;
        v29[0] = 1.0;
        v28[0] = 0.0;
        v28[2] = 0.0;
        v29[1] = 0.0;
        v29[2] = 0.0;
        sub_100F2230(LODWORD(v7), v29, v28, v27);
        sub_100F2080(*v4, v4 + 3);
        v8 = (float *)a1[5];
        v8[1682] = *((float *)v4 + 3);
        v8[1683] = *((float *)v4 + 4);
        v8[1684] = *((float *)v4 + 5);
      }
    }
    return (float *)sub_100F1F50(*v4, 0);
  }
  return result;
}
