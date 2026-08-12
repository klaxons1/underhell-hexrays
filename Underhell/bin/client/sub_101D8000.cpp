int __thiscall sub_101D8000(int this, int a2, unsigned int *a3, int a4, char a5, int a6, float a7)
{
  double v7; // st7
  char v9; // al
  BOOL v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // esi
  char *v14; // edx
  int i; // eax
  int v16; // ebx
  int v17; // esi
  int v18; // ebx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // esi
  int v22; // edx
  int j; // eax
  int v24; // edi
  int v25; // edx
  int v26; // edi
  char v27; // cl
  int v29; // [esp-10h] [ebp-6Ch]
  int v30; // [esp-Ch] [ebp-68h]
  float v31; // [esp+14h] [ebp-48h]
  int v32; // [esp+20h] [ebp-3Ch] BYREF
  char v33; // [esp+24h] [ebp-38h]
  _BYTE v34[3]; // [esp+25h] [ebp-37h]
  _BYTE v35[6]; // [esp+28h] [ebp-34h] BYREF
  int v36; // [esp+2Eh] [ebp-2Eh] BYREF
  char v37; // [esp+38h] [ebp-24h] BYREF
  char v38; // [esp+39h] [ebp-23h] BYREF
  char v39; // [esp+3Ah] [ebp-22h] BYREF
  char v40; // [esp+3Bh] [ebp-21h] BYREF
  _BYTE v41[16]; // [esp+48h] [ebp-14h] BYREF

  v7 = a7;
  v9 = *(_BYTE *)(this + 10);
  v30 = *(unsigned __int8 *)(this + 13);
  v29 = *(unsigned __int8 *)(this + 12);
  v32 = (int)a3;
  if ( a5 )
  {
    sub_101E0EC0(a2, 16, 5, 6, 5, (int)v35, &v37, 3, v9, v29, v30, a4, a6, a7);
    if ( 0.0 == v7 )
    {
      v31 = 3.4028235e38;
    }
    else
    {
      sub_101E0EC0(
        a2,
        16,
        5,
        6,
        5,
        (int)&v36,
        v41,
        4,
        *(_BYTE *)(this + 10),
        *(unsigned __int8 *)(this + 12),
        *(unsigned __int8 *)(this + 13),
        a4,
        a6,
        a7);
      v31 = a7;
    }
    v10 = v31 < v7;
    v11 = ((unsigned __int8)v35[6 * v10] >> 3) | (8 * (v35[6 * v10 + 2] & 0xFC | (32 * (v35[6 * v10 + 4] & 0xF8))));
    v12 = ((unsigned __int8)v35[6 * v10 + 1] >> 3) | (8 * (v35[6 * v10 + 3] & 0xFC | (32 * (v35[6 * v10 + 5] & 0xF8))));
    if ( v10 )
    {
      if ( v11 > v12 )
      {
LABEL_7:
        *a3 = v11 | (v12 << 16);
        goto LABEL_8;
      }
    }
    else if ( v11 <= v12 )
    {
      goto LABEL_7;
    }
    *a3 = v12 | (v11 << 16);
LABEL_8:
    a3[1] = 0;
    v13 = a3[1];
    v14 = &v38 + 16 * v10;
    for ( i = 4; i < 36; i += 8 )
    {
      v16 = (unsigned __int8)v14[&v37 - &v38] << (i - 4);
      v14 += 4;
      v17 = ((unsigned __int8)v14[&v39 - &v38 - 4] << i) | ((unsigned __int8)*(v14 - 4) << (i - 2)) | v16 | v13;
      v18 = (unsigned __int8)v14[&v40 - &v38 - 4] << (i + 2);
      v13 = v18 | v17;
    }
    *(_DWORD *)(v32 + 4) = v13;
    return 0;
  }
  sub_101E0EC0(a2, 16, 5, 6, 5, (int)&v32, v35, 4, v9, v29, v30, a4, a6, a7);
  v19 = ((unsigned __int8)v32 >> 3) | (8 * (BYTE2(v32) & 0xFC | (32 * (v33 & 0xF8))));
  v20 = (BYTE1(v32) >> 3) | (8 * (HIBYTE(v32) & 0xFC | (32 * (v34[0] & 0xF8))));
  if ( v19 > v20 )
    *a3 = v19 | (v20 << 16);
  else
    *a3 = v20 | (v19 << 16);
  v21 = 0;
  a3[1] = 0;
  v22 = 0;
  for ( j = 4; j < 36; j += 8 )
  {
    v24 = (unsigned __int8)v35[v21];
    v21 += 4;
    v25 = ((unsigned __int8)v34[v21] << (j - 2)) | (v24 << (j - 4)) | v22;
    v26 = (unsigned __int8)v34[v21 + 1] << j;
    v27 = j + 2;
    v22 = ((unsigned __int8)v34[v21 + 2] << v27) | v26 | v25;
  }
  a3[1] = v22;
  return 0;
}
