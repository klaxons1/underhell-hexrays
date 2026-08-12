const char **__cdecl sub_1009B210(
        const char **a1,
        const char *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int ArgList,
        char a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  _DWORD *v17; // eax
  _DWORD *v18; // ebx
  int v19; // edi
  _DWORD *i; // esi
  _DWORD *v21; // ebx
  _DWORD *v22; // eax
  void *v23; // eax
  void *v24; // esi
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  const void *v27; // esi
  _DWORD *v28; // eax
  int v29; // ebx
  _DWORD *v30; // eax
  _DWORD *v31; // edx
  _DWORD *v32; // esi
  void *v33; // eax
  const char **result; // eax
  _BYTE v35[60]; // [esp+Ch] [ebp-48h] BYREF
  _DWORD *v36; // [esp+48h] [ebp-Ch]
  int v37; // [esp+4Ch] [ebp-8h]
  _DWORD *v38; // [esp+50h] [ebp-4h]
  _DWORD *v39; // [esp+68h] [ebp+14h]
  char **v40; // [esp+68h] [ebp+14h]

  sub_1009ABD0(a1);
  *a1 = a2;
  a1[1] = (const char *)5;
  a1[11] = 0;
  a1[9] = (const char *)sub_1009AE70;
  v37 = ArgList + 1;
  v17 = (_DWORD *)sub_100DDA40((60 * (unsigned __int64)(unsigned int)(ArgList + 1)) >> 32 != 0 ? -1 : 60 * (ArgList + 1));
  v18 = v17;
  if ( v17 )
  {
    v19 = ArgList;
    for ( i = v17; v19 >= 0; --v19 )
    {
      sub_1009ABD0(i);
      i += 15;
    }
    v38 = v18;
  }
  else
  {
    v38 = 0;
  }
  v21 = (_DWORD *)sub_100DDA40(28);
  v21[4] = a4;
  v21[6] = ArgList;
  v21[2] = a5;
  v21[3] = a6;
  v21[5] = a3;
  v36 = v21;
  if ( a9 == 5 )
    *v21 = a17;
  else
    v21[1] = a16;
  v22 = (_DWORD *)sub_100DDA40(60);
  if ( v22 )
    v39 = sub_1009ABD0(v22);
  else
    v39 = 0;
  v23 = sub_1009B090("lengthprop%d", ArgList);
  qmemcpy(
    v39,
    (const void *)sub_1009AED0((int)v35, (int)v23, 0, 0, 0, (int (__cdecl *)(int, int, int))sub_1009B150),
    0x3Cu);
  v39[5] = v21;
  v24 = sub_1009B0F0(0, "_LPT_%s_%d", a2, ArgList);
  v25 = (_DWORD *)sub_100DDA40(20);
  if ( v25 )
    v26 = sub_1009AEA0(v25, (int)v39, 1, (int)v24);
  else
    v26 = 0;
  v27 = (const void *)sub_1009AD30((int)v35, (int)"lengthproxy", 0, 0, (int)v26, (int)sub_1009B180);
  v28 = v38;
  qmemcpy(v38, v27, 0x3Cu);
  v28[5] = v21;
  v29 = 1;
  if ( v37 > 1 )
  {
    v30 = v28 + 20;
    v40 = off_103DDD30;
    do
    {
      v31 = v36;
      qmemcpy(v30 - 5, &a8, 0x3Cu);
      v30[6] = 0;
      *(v30 - 5) = *v40;
      *v30 = v31;
      v30[7] = v29 - 1;
      if ( a9 == 5 )
        v30[4] = sub_1009B1E0;
      else
        v30[3] = sub_1009B1B0;
      ++v40;
      ++v29;
      v30 += 15;
    }
    while ( v29 < v37 );
  }
  v32 = (_DWORD *)sub_100DDA40(20);
  if ( v32 )
  {
    v33 = sub_1009B0F0(0, "_ST_%s_%d", a2, ArgList);
    a1[10] = (const char *)sub_1009AEA0(v32, (int)v38, v37, (int)v33);
    return a1;
  }
  else
  {
    result = a1;
    a1[10] = 0;
  }
  return result;
}
