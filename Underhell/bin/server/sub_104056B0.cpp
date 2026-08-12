int *__userpurge sub_104056B0@<eax>(int a1@<ecx>, int a2@<ebx>, _DWORD *a3, int a4)
{
  int *result; // eax
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // eax
  float *v9; // eax
  int v10; // eax
  int v11; // eax
  char *v12; // eax
  int v13; // edi
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // esi
  bool v18; // zf
  _BYTE v19[44]; // [esp+18h] [ebp-B4h] BYREF
  float v20; // [esp+44h] [ebp-88h]
  _BYTE v21[12]; // [esp+6Ch] [ebp-60h] BYREF
  float v22[3]; // [esp+78h] [ebp-54h] BYREF
  float v23[3]; // [esp+84h] [ebp-48h] BYREF
  float v24[3]; // [esp+90h] [ebp-3Ch] BYREF
  float v25[3]; // [esp+9Ch] [ebp-30h] BYREF
  float v26[3]; // [esp+A8h] [ebp-24h] BYREF
  int v27; // [esp+B4h] [ebp-18h] BYREF
  float v28; // [esp+B8h] [ebp-14h]
  float v29; // [esp+BCh] [ebp-10h]
  int v30; // [esp+C0h] [ebp-Ch] BYREF
  float v31; // [esp+C4h] [ebp-8h]
  float v32; // [esp+C8h] [ebp-4h]
  int savedregs; // [esp+CCh] [ebp+0h] BYREF

  if ( *a3 != 3002 )
    return (int *)sub_100CFE60((_DWORD *)a1, (int)a3, a4);
  v6 = *(_DWORD *)(a1 + 1412);
  if ( v6 == -1
    || (v7 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 1412) & 0xFFF) + 1],
        result = (int *)(v6 >> 12),
        (int *)off_1061BE18[4 * (*(_DWORD *)(a1 + 1412) & 0xFFF) + 2] != result)
    || !*v7 )
  {
    v8 = sub_100D1940((_DWORD *)a1);
    v9 = (float *)(*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v8 + 968))(v8, v21, a2);
    v30 = *(int *)v9;
    v31 = v9[1];
    v32 = v9[2];
    v10 = sub_100D7680(a4);
    (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)v10 + 2104))(v10, v26, &v30);
    if ( sub_100BF1B0((void *)a1, "missile", (int)&v27, 0, 0, 0) )
    {
      v24[0] = 24.0;
      v24[1] = 24.0;
      v24[2] = 24.0;
      v25[0] = -24.0;
      v25[1] = -24.0;
      v25[2] = -24.0;
      v23[0] = v26[0] * 120.0 + *(float *)&v27;
      v23[1] = v26[1] * 120.0 + v28;
      v23[2] = 120.0 * v26[2] + v29;
      sub_10023240(COERCE_FLOAT(&savedregs), a1, (float *)&v27, v23, v25, v24, 33701899, 0, (int)v19);
      if ( 1.0 == v20 )
      {
        v30 = v27;
        v31 = v28;
        v32 = v29;
      }
    }
    sub_10422540(v26, v22);
    v11 = sub_100D1940((_DWORD *)a1);
    v12 = sub_10403F00((float *)&v30, v22, *(_DWORD *)(v11 + 24));
    if ( v12 )
      *(_DWORD *)(a1 + 1412) = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v12 + 8))(v12);
    else
      *(_DWORD *)(a1 + 1412) = -1;
    if ( *(_DWORD *)(a1 + 1412) == -1
      || off_1061BE18[4 * (*(_DWORD *)(a1 + 1412) & 0xFFF) + 2] != *(_DWORD *)(a1 + 1412) >> 12 )
    {
      v13 = 0;
    }
    else
    {
      v13 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1412) & 0xFFF) + 1];
    }
    *(_DWORD *)(v13 + 2104) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v14 = *(_DWORD *)(a1 + 1412);
    if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1412) & 0xFFF) + 2] != v14 >> 12 )
      v15 = 0;
    else
      v15 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1412) & 0xFFF) + 1];
    *(float *)(v15 + 2124) = *(float *)(dword_106B31C8 + 12) + 0.5;
    sub_101129A0((unsigned __int16 *)(v15 + 320), *(_WORD *)(v15 + 356) | 4);
    (*(void (__thiscall **)(int))(*(_DWORD *)a4 + 1116))(a4);
    result = (int *)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 3, 0.0);
    *(_BYTE *)(a1 + 1393) = 0;
    v16 = *(_DWORD *)(a1 + 1408);
    if ( v16 != -1 )
    {
      result = &off_1061BE18[4 * (v16 & 0xFFF) + 1];
      v17 = v16 >> 12;
      if ( result[1] == v17 )
      {
        if ( *result )
        {
          if ( result[1] == v17 )
            result = (int *)*result;
          else
            result = 0;
          v18 = *((_BYTE *)result + 896) == 0;
          *((_BYTE *)result + 897) = 0;
          if ( !v18 )
            return (int *)sub_10242060(result);
        }
      }
    }
  }
  return result;
}
