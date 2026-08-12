int __userpurge sub_101D7C00@<eax>(
        int a1@<ecx>,
        double a2@<st0>,
        int a3,
        unsigned int *a4,
        int a5,
        char a6,
        int a7,
        int a8)
{
  int v9; // edx
  int v10; // eax
  char v11; // cl
  BOOL v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // esi
  char *v16; // edx
  int i; // eax
  int v18; // ebx
  int v19; // esi
  int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // esi
  int v24; // edx
  int j; // eax
  int v26; // edi
  int v27; // edx
  int v28; // edi
  char v29; // cl
  float v31; // [esp+10h] [ebp-48h]
  int v32; // [esp+1Ch] [ebp-3Ch] BYREF
  char v33; // [esp+20h] [ebp-38h]
  _BYTE v34[3]; // [esp+21h] [ebp-37h]
  _BYTE v35[6]; // [esp+24h] [ebp-34h] BYREF
  int v36; // [esp+2Ah] [ebp-2Eh] BYREF
  char v37; // [esp+34h] [ebp-24h] BYREF
  char v38; // [esp+35h] [ebp-23h] BYREF
  char v39; // [esp+36h] [ebp-22h] BYREF
  char v40; // [esp+37h] [ebp-21h] BYREF
  _BYTE v41[16]; // [esp+44h] [ebp-14h] BYREF

  v9 = *(unsigned __int8 *)(a1 + 13);
  v10 = *(unsigned __int8 *)(a1 + 12);
  v11 = *(_BYTE *)(a1 + 10);
  v32 = (int)a4;
  if ( a6 )
  {
    sub_101E1440(a3, 16, 5, 6, 5, (int)v35, &v37, 3, v11, v10, v9, a5, a7, a8);
    if ( 0.0 == a2 )
    {
      v31 = 3.4028235e38;
    }
    else
    {
      sub_101E1440(
        a3,
        16,
        5,
        6,
        5,
        (int)&v36,
        v41,
        4,
        *(_BYTE *)(a1 + 10),
        *(unsigned __int8 *)(a1 + 12),
        *(unsigned __int8 *)(a1 + 13),
        a5,
        a7,
        a8);
      v31 = a2;
    }
    v12 = v31 < a2;
    v13 = ((unsigned __int8)v35[6 * v12] >> 3) | (8 * (v35[6 * v12 + 2] & 0xFC | (32 * (v35[6 * v12 + 4] & 0xF8))));
    v14 = ((unsigned __int8)v35[6 * v12 + 1] >> 3) | (8 * (v35[6 * v12 + 3] & 0xFC | (32 * (v35[6 * v12 + 5] & 0xF8))));
    if ( v12 )
    {
      if ( v13 > v14 )
      {
LABEL_7:
        *a4 = v13 | (v14 << 16);
        goto LABEL_8;
      }
    }
    else if ( v13 <= v14 )
    {
      goto LABEL_7;
    }
    *a4 = v14 | (v13 << 16);
LABEL_8:
    a4[1] = 0;
    v15 = a4[1];
    v16 = &v38 + 16 * v12;
    for ( i = 4; i < 36; i += 8 )
    {
      v18 = (unsigned __int8)v16[&v37 - &v38] << (i - 4);
      v16 += 4;
      v19 = ((unsigned __int8)v16[&v39 - &v38 - 4] << i) | ((unsigned __int8)*(v16 - 4) << (i - 2)) | v18 | v15;
      v20 = (unsigned __int8)v16[&v40 - &v38 - 4] << (i + 2);
      v15 = v20 | v19;
    }
    *(_DWORD *)(v32 + 4) = v15;
    return 0;
  }
  sub_101E1440(a3, 16, 5, 6, 5, (int)&v32, v35, 4, v11, v10, v9, a5, a7, a8);
  v21 = ((unsigned __int8)v32 >> 3) | (8 * (BYTE2(v32) & 0xFC | (32 * (v33 & 0xF8))));
  v22 = (BYTE1(v32) >> 3) | (8 * (HIBYTE(v32) & 0xFC | (32 * (v34[0] & 0xF8))));
  if ( v21 > v22 )
    *a4 = v21 | (v22 << 16);
  else
    *a4 = v22 | (v21 << 16);
  v23 = 0;
  a4[1] = 0;
  v24 = 0;
  for ( j = 4; j < 36; j += 8 )
  {
    v26 = (unsigned __int8)v35[v23];
    v23 += 4;
    v27 = ((unsigned __int8)v34[v23] << (j - 2)) | (v26 << (j - 4)) | v24;
    v28 = (unsigned __int8)v34[v23 + 1] << j;
    v29 = j + 2;
    v24 = ((unsigned __int8)v34[v23 + 2] << v29) | v28 | v27;
  }
  a4[1] = v24;
  return 0;
}
