int __cdecl sub_1001E670(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  _DWORD *v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // eax
  double v12; // st7
  unsigned __int8 *v13; // edi
  int v14; // esi
  __int16 v15; // ax
  float v17; // [esp+2Ch] [ebp-20h] BYREF
  float v18; // [esp+30h] [ebp-1Ch]
  float v19; // [esp+34h] [ebp-18h]
  float v20; // [esp+38h] [ebp-14h]
  int v21; // [esp+3Ch] [ebp-10h] BYREF
  float v22; // [esp+40h] [ebp-Ch]
  float v23; // [esp+44h] [ebp-8h]
  int v24; // [esp+48h] [ebp-4h]
  int savedregs; // [esp+4Ch] [ebp+0h] BYREF

  v5 = a1;
  v6 = (_DWORD *)sub_10127960(a2);
  v7 = v6[17];
  v8 = 0;
  v9 = 0;
  if ( v7 <= 0 )
    v9 = v7 - 1;
  v10 = v6[18];
  if ( v10 <= 0 )
    v8 = v10 - 1;
  v11 = sub_101278E0(*(__int16 *)((char *)v6 + 2 * v9 + 2 * v8 * v7 + v6[15]));
  a1 = a3;
  v24 = v11;
  v12 = 0.0;
  v13 = (unsigned __int8 *)sub_10126D50(&a1);
  v14 = *(_DWORD *)v5 + 216 * a4 + *(_DWORD *)(*(_DWORD *)v5 + 160);
  if ( !v13 )
    goto LABEL_9;
  while ( *v13 != a4 )
  {
    v15 = *((_WORD *)v13 + 1);
    if ( v15 )
    {
      v13 += v15;
      if ( v13 )
        continue;
    }
    goto LABEL_9;
  }
  if ( *(float *)((char *)&v6[a4] + v6[39]) > 0.0 )
  {
    sub_1001AED0(
      (int)&savedregs,
      a1,
      0.0,
      (_DWORD *)(v14 + 44),
      (float *)(v14 + 60),
      (float *)(v14 + 84),
      *(_DWORD *)(v14 + 160),
      v14 + 144,
      (int)v13,
      (int)&v17);
    sub_1001E430(a1, 0.0, (float *)(v14 + 32), v14 + 72, (int)v13, (float *)&v21);
  }
  else
  {
LABEL_9:
    if ( (*(_BYTE *)(v24 + 12) & 4) != 0 )
    {
      v17 = 0.0;
      v18 = 0.0;
      v19 = 0.0;
      v20 = 1.0;
      *(float *)&v21 = 0.0;
      v22 = 0.0;
    }
    else
    {
      v17 = *(float *)(v14 + 44);
      v18 = *(float *)(v14 + 48);
      v19 = *(float *)(v14 + 52);
      v20 = *(float *)(v14 + 56);
      v21 = *(int *)(v14 + 32);
      v22 = *(float *)(v14 + 36);
      v12 = *(float *)(v14 + 40);
    }
    v23 = v12;
  }
  return sub_101F0F40(&v17, &v21, a5);
}
