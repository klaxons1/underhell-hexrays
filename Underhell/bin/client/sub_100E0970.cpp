int __thiscall sub_100E0970(int this, int a2, float a3)
{
  void *v5; // esp
  unsigned __int16 *v6; // edi
  int v7; // ecx
  unsigned __int16 v8; // ax
  int v9; // eax
  int v10; // eax
  unsigned __int16 *v11; // edi
  double v12; // st7
  int v13; // eax
  double v14; // st5
  double v15; // st5
  double v16; // st4
  double v17; // st5
  int v18; // edi
  unsigned __int16 j; // ax
  double v20; // st7
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // edi
  int k; // edi
  float v27; // [esp+40h] [ebp-C28h]
  float v28; // [esp+44h] [ebp-C24h]
  float v29; // [esp+44h] [ebp-C24h]
  int v30; // [esp+48h] [ebp-C20h]
  char v31[12]; // [esp+4Ch] [ebp-C1Ch] BYREF
  _BYTE v32[3072]; // [esp+58h] [ebp-C10h] BYREF
  int v33; // [esp+C58h] [ebp-10h]
  int v34; // [esp+C5Ch] [ebp-Ch]
  int v35; // [esp+C60h] [ebp-8h]
  unsigned __int16 *v36; // [esp+C64h] [ebp-4h]
  int v37; // [esp+C70h] [ebp+8h]
  int i; // [esp+C70h] [ebp+8h]
  int v39; // [esp+C70h] [ebp+8h]
  int v40; // [esp+C70h] [ebp+8h]
  int v41; // [esp+C70h] [ebp+8h]
  int v42; // [esp+C74h] [ebp+Ch]
  int v43; // [esp+C74h] [ebp+Ch]

  v37 = strlen(*(const char **)(a2 + 44));
  v5 = alloca(v37 + 2);
  sub_102282F0(v31, *(char **)(a2 + 44), v37 + 2);
  if ( iscntrl(v31[v37 - 1]) )
    v31[v37 - 1] = 0;
  v6 = (unsigned __int16 *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, v31);
  if ( !v6 )
  {
    (*(void (__thiscall **)(int, _DWORD, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      *(_DWORD *)(a2 + 44),
      v32,
      2048);
    v6 = (unsigned __int16 *)v32;
  }
  v7 = 0;
  *(float *)(this + 17304) = a3;
  *(_DWORD *)(this + 17328) = 1;
  *(_DWORD *)(this + 17300) = a2;
  *(_DWORD *)(this + 17316) = 0;
  *(_DWORD *)(this + 17368) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(this + 17372) = dword_1042FAD8;
  v8 = *v6;
  v36 = v6;
  v42 = 0;
  for ( i = 0; v8; ++v6 )
  {
    if ( v8 == 10 )
    {
      ++*(_DWORD *)(this + 17328);
      if ( v7 > *(_DWORD *)(this + 17316) )
        *(_DWORD *)(this + 17316) = v7;
      i = 0;
    }
    else
    {
      i += (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(
             dword_1047CA6C,
             *(_DWORD *)(this + 17372),
             v8);
    }
    v8 = v6[1];
    ++v42;
    v7 = i;
  }
  if ( v7 > *(_DWORD *)(this + 17316) )
    *(_DWORD *)(this + 17316) = v7;
  *(_DWORD *)(this + 17336) = v42;
  v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, *(_DWORD *)(this + 17372));
  v30 = v9 * *(_DWORD *)(this + 17328);
  *(_DWORD *)(this + 17320) = v30;
  v39 = v9;
  v10 = sub_100DEFC0(*(float *)(a2 + 16), v30);
  v11 = v36;
  *(float *)(this + 17360) = 0.0;
  *(_DWORD *)(this + 17312) = v10;
  v36 = v11;
  sub_100DF1C0(this);
  if ( *(_BYTE *)(a2 + 48) )
  {
    v30 = *(_DWORD *)(this + 17316);
    *(float *)&v40 = (double)v39 * *(float *)(a2 + 52);
    v34 = sub_100DEF20(*(float *)(a2 + 12), v30, v30);
    v12 = *(float *)(a2 + 16);
    v34 = (int)((double)v34 - *(float *)&v40);
    v28 = v12;
    v13 = (int)((double)sub_100DEFC0(v28, *(_DWORD *)(this + 17320)) - *(float *)&v40 * 0.5);
    v14 = (double)*(int *)(this + 17356);
    v33 = v13;
    v15 = (255.0 - v14) * 0.0039215689;
    v16 = 1.0;
    if ( v15 <= 1.0 )
    {
      if ( v15 < 0.0 )
        v15 = 0.0;
      v16 = v15;
      v17 = 1.0;
    }
    else
    {
      v17 = 1.0;
    }
    LOBYTE(v43) = *(_BYTE *)(a2 + 56);
    BYTE2(v43) = *(_BYTE *)(a2 + 58);
    v18 = *(_DWORD *)(this + 44);
    BYTE1(v43) = *(_BYTE *)(a2 + 57);
    v35 = (int)(v16 * (double)*(unsigned __int8 *)(a2 + 59));
    HIBYTE(v43) = v35;
    v29 = v17;
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(v18 + 540))(
      this + 44,
      v34,
      v33,
      (int)(*(float *)&v40 + *(float *)&v40 + (double)*(int *)(this + 17316)),
      (int)(0.5 * (*(float *)&v40 + *(float *)&v40) + (double)*(int *)(this + 17320)),
      v43,
      LODWORD(v29),
      0);
    v11 = v36;
  }
  v41 = 0;
  if ( *(int *)(this + 17328) > 0 )
  {
    while ( 1 )
    {
      *(_DWORD *)(this + 17332) = 0;
      *(_DWORD *)(this + 17324) = 0;
      for ( j = *v11; j; ++v11 )
      {
        if ( j == 10 )
          break;
        *(_WORD *)&v32[2 * *(_DWORD *)(this + 17332) + 2048] = j;
        *(_DWORD *)(this + 17324) += (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(
                                       dword_1047CA6C,
                                       *(_DWORD *)(this + 17372),
                                       j);
        if ( ++*(_DWORD *)(this + 17332) > 0x1FFu )
          *(_DWORD *)(this + 17332) = 511;
        j = v11[1];
      }
      v20 = *(float *)(a2 + 12);
      v21 = *(_DWORD *)(this + 17316);
      *(_WORD *)&v32[2 * *(_DWORD *)(this + 17332) + 2048] = 0;
      v22 = *(_DWORD *)(this + 17324);
      v27 = v20;
      v36 = v11 + 1;
      v23 = sub_100DEF20(v27, v22, v21);
      v24 = *(_DWORD *)(this + 17312);
      *(_DWORD *)(this + 17308) = v23;
      (**(void (__thiscall ***)(int, int, int))dword_104345FC)(dword_104345FC, v23, v24);
      if ( *(int *)(this + 17356) > 255 )
        *(_DWORD *)(this + 17356) = 255;
      for ( k = 0; k < *(_DWORD *)(this + 17332); ++k )
      {
        *(_DWORD *)(this + 17352) = *(unsigned __int16 *)&v32[2 * k + 2048];
        sub_100DF070(this);
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_104345FC + 4))(
          dword_104345FC,
          *(_DWORD *)(this + 17340),
          *(_DWORD *)(this + 17344),
          *(_DWORD *)(this + 17348),
          255 - *(_DWORD *)(this + 17356),
          *(unsigned __int16 *)(this + 17352));
      }
      *(_DWORD *)(this + 17312) += (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(
                                     dword_1047CA6C,
                                     *(_DWORD *)(this + 17372));
      if ( ++v41 >= *(_DWORD *)(this + 17328) )
        break;
      v11 = v36;
    }
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)dword_104345FC + 20))(dword_104345FC);
}
