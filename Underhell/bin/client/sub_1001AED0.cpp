int __usercall sub_1001AED0@<eax>(
        int a1@<ebp>,
        int a2,
        float a3,
        _DWORD *a4,
        float *a5,
        float *a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  char v10; // al
  int result; // eax
  float v12; // edx
  float v13; // ecx
  float v14; // edx
  int v15; // esi
  __int16 v16; // ax
  int v17; // eax
  __int16 v18; // ax
  int v19; // eax
  __int16 v20; // ax
  int v21; // eax
  int v22; // esi
  int v23; // eax
  __int16 v24; // ax
  int v25; // eax
  __int16 v26; // ax
  int v27; // eax
  _BYTE v28[16]; // [esp+1Ch] [ebp-4Ch] BYREF
  _BYTE v29[16]; // [esp+2Ch] [ebp-3Ch] BYREF
  float v30; // [esp+3Ch] [ebp-2Ch] BYREF
  float v31; // [esp+40h] [ebp-28h] BYREF
  float v32; // [esp+44h] [ebp-24h] BYREF
  float v33; // [esp+48h] [ebp-20h] BYREF
  float v34; // [esp+4Ch] [ebp-1Ch] BYREF
  float v35; // [esp+50h] [ebp-18h] BYREF
  float v36; // [esp+54h] [ebp-14h] BYREF
  char v37; // [esp+5Bh] [ebp-Dh]
  int v38; // [esp+5Ch] [ebp-Ch]
  void *v39; // [esp+60h] [ebp-8h]
  void *retaddr; // [esp+68h] [ebp+0h]

  v38 = a1;
  v39 = retaddr;
  v10 = *(_BYTE *)(a9 + 1);
  v37 = v10;
  if ( (v10 & 2) != 0 )
  {
    sub_1001AA90((unsigned __int16 *)(a9 + 4), &v30);
LABEL_3:
    result = a10;
    v12 = v31;
    *(float *)a10 = v30;
    v13 = v32;
    *(float *)(a10 + 4) = v12;
    v14 = v33;
    *(float *)(a10 + 8) = v13;
    *(float *)(a10 + 12) = v14;
    return result;
  }
  if ( (v10 & 0x20) != 0 )
  {
    sub_1001A9E0((_DWORD *)(a9 + 4), &v30);
    goto LABEL_3;
  }
  if ( (v10 & 8) != 0 )
  {
    v15 = a9 + 4;
    v16 = *(_WORD *)(a9 + 4);
    if ( a3 <= 0.001 )
    {
      if ( v16 <= 0 )
        v23 = 0;
      else
        v23 = v15 + v16;
      sub_1001AE60(a2, v23, *a6, &v31);
      v24 = *(_WORD *)(a9 + 6);
      if ( v24 <= 0 )
        v25 = 0;
      else
        v25 = v15 + v24;
      sub_1001AE60(a2, v25, a6[1], &v32);
      v26 = *(_WORD *)(a9 + 8);
      if ( v26 <= 0 )
        v27 = 0;
      else
        v27 = v15 + v26;
      sub_1001AE60(a2, v27, a6[2], &v33);
      if ( (v37 & 0x10) == 0 )
      {
        v31 = *a5 + v31;
        v32 = a5[1] + v32;
        v33 = a5[2] + v33;
      }
      v22 = a10;
      result = sub_101EEF50(&v31, a10);
    }
    else
    {
      if ( v16 <= 0 )
        v17 = 0;
      else
        v17 = v15 + v16;
      sub_1001AD50(a2, v17, *a6, &v34, &v31);
      v18 = *(_WORD *)(a9 + 6);
      if ( v18 <= 0 )
        v19 = 0;
      else
        v19 = v15 + v18;
      sub_1001AD50(a2, v19, a6[1], &v35, &v32);
      v20 = *(_WORD *)(a9 + 8);
      if ( v20 <= 0 )
        v21 = 0;
      else
        v21 = v15 + v20;
      sub_1001AD50(a2, v21, a6[2], &v36, &v33);
      if ( (v37 & 0x10) == 0 )
      {
        v34 = *a5 + v34;
        v35 = a5[1] + v35;
        v36 = a5[2] + v36;
        v31 = *a5 + v31;
        v32 = a5[1] + v32;
        v33 = a5[2] + v33;
      }
      if ( v31 == v34 && v32 == v35 && v33 == v36 )
      {
        v22 = a10;
        result = sub_101EEF50(&v34, a10);
      }
      else
      {
        sub_101EEF50(&v34, v28);
        sub_101EEF50(&v31, v29);
        v22 = a10;
        result = sub_101F17B0((int)v28, (int)v29, a3, a10);
      }
    }
    if ( (*(_BYTE *)(a9 + 1) & 0x10) == 0 && (a7 & 0x100000) != 0 )
      return sub_101EE9A0(a8, v22, v22);
  }
  else if ( (v10 & 0x10) != 0 )
  {
    result = a10;
    *(float *)a10 = 0.0;
    *(float *)(a10 + 4) = 0.0;
    *(float *)(a10 + 8) = 0.0;
    *(float *)(a10 + 12) = 1.0;
  }
  else
  {
    *(_DWORD *)a10 = *a4;
    *(_DWORD *)(a10 + 4) = a4[1];
    *(_DWORD *)(a10 + 8) = a4[2];
    result = a4[3];
    *(_DWORD *)(a10 + 12) = result;
  }
  return result;
}
