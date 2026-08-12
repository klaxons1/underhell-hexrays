int __thiscall sub_100E11E0(int this)
{
  bool v2; // c0
  double v3; // st6
  float *v4; // edx
  double v5; // st7
  _DWORD *v6; // ecx
  int v7; // edx
  int v8; // edi
  int v9; // ebx
  int v10; // ebx
  _BYTE *v11; // eax
  char v12; // cl
  char v13; // dl
  _DWORD *v14; // ecx
  _BYTE *v15; // eax
  char v16; // cl
  char v17; // dl
  float *v18; // ebx
  float *v19; // ecx
  int v20; // edx
  int v21; // edi
  int v22; // ecx
  int v23; // eax
  double v24; // st7
  bool v25; // zf
  int v27; // [esp+8h] [ebp-24h]
  float v28; // [esp+Ch] [ebp-20h]
  float v29; // [esp+Ch] [ebp-20h]
  int v30; // [esp+1Ch] [ebp-10h]
  int v31; // [esp+1Ch] [ebp-10h]
  int v32; // [esp+20h] [ebp-Ch] BYREF
  unsigned int v33; // [esp+24h] [ebp-8h] BYREF
  __int16 v34; // [esp+2Ah] [ebp-2h]

  v2 = *(float *)(this + 17332) > 0.0;
  *(float *)&v32 = 0.0;
  if ( v2 )
  {
    v3 = *((float *)off_103DC81C + 3) - *(float *)(this + 17332);
    if ( *((float *)off_103DC81C + 3) < (double)*(float *)(this + 17332) )
      *(float *)(this + 17332) = *((float *)off_103DC81C + 3);
    v4 = *(float **)(this + 17336);
    if ( v4[7] + v4[5] + v4[6] >= v3 )
    {
      v28 = v3;
      v5 = sub_100DEEA0(v4[5], v4[6], v4[7], v28);
      v6 = *(_DWORD **)(this + 17348);
      *(float *)&v32 = v5;
      v8 = v6[40] - v6[39];
      v9 = v6[42] - v6[41];
      v27 = v8 + *(_DWORD *)(*(_DWORD *)(this + 17344) + 160) - *(_DWORD *)(*(_DWORD *)(this + 17344) + 156);
      v30 = sub_100DEF20(*(float *)(v7 + 12), v27, v27);
      v10 = sub_100DEFC0(*(float *)(*(_DWORD *)(this + 17336) + 16), v9);
      v11 = *(_BYTE **)(this + 17336);
      v12 = v11[6];
      v13 = v11[5];
      LOBYTE(v33) = v11[4];
      BYTE2(v33) = v12;
      BYTE1(v33) = v13;
      v32 = (int)(*(float *)&v32 * 255.0);
      v14 = *(_DWORD **)(this + 17348);
      HIBYTE(v33) = v32;
      HIBYTE(v34) = v32;
      sub_100B3BE0(v14, v30, v10, &v33);
      v15 = *(_BYTE **)(this + 17336);
      v16 = v15[6];
      v17 = v15[5];
      LOBYTE(v15) = v15[4];
      BYTE1(v32) = v17;
      LOBYTE(v32) = (_BYTE)v15;
      BYTE2(v32) = v16;
      HIBYTE(v32) = HIBYTE(v34);
      sub_100B3BE0(*(_DWORD **)(this + 17344), v8 + v30, v10, &v32);
      v32 = 1;
    }
    else
    {
      *(float *)(this + 17332) = 0.0;
    }
  }
  v18 = (float *)off_103DC81C;
  v19 = (float *)(this + 17192);
  v20 = 4;
  do
  {
    if ( *((_DWORD *)v19 - 20) && v18[3] < (double)*v19 )
    {
      *v19 = *(float *)(this + 17260) + v18[3] - *v19 + 0.2;
      v18 = (float *)off_103DC81C;
    }
    if ( *((_DWORD *)v19 - 19) && v18[3] < (double)v19[1] )
    {
      v19[1] = *(float *)(this + 17260) + v18[3] - v19[1] + 0.2;
      v18 = (float *)off_103DC81C;
    }
    if ( *((_DWORD *)v19 - 18) && v18[3] < (double)v19[2] )
    {
      v19[2] = *(float *)(this + 17260) + v18[3] - v19[2] + 0.2;
      v18 = (float *)off_103DC81C;
    }
    if ( *((_DWORD *)v19 - 17) && v18[3] < (double)v19[3] )
    {
      v19[3] = *(float *)(this + 17260) + v18[3] - v19[3] + 0.2;
      v18 = (float *)off_103DC81C;
    }
    v19 += 4;
    --v20;
  }
  while ( v20 );
  v21 = this + 17112;
  v31 = 16;
  do
  {
    v22 = *(_DWORD *)v21;
    if ( !*(_DWORD *)v21 )
      goto LABEL_33;
    v23 = *(_DWORD *)v22;
    if ( *(int *)v22 < 0 )
    {
LABEL_28:
      v24 = 0.0;
      goto LABEL_29;
    }
    if ( v23 <= 1 )
    {
      v24 = *(float *)(v21 + 80) + *(float *)(v22 + 20) + *(float *)(v22 + 24) + *(float *)(v22 + 28);
    }
    else
    {
      if ( v23 != 2 )
        goto LABEL_28;
      v33 = strlen(*(const char **)(v22 + 44));
      v24 = (double)v33 * *(float *)(v22 + 20) + *(float *)(v21 + 80) + *(float *)(v22 + 24) + *(float *)(v22 + 28);
    }
LABEL_29:
    if ( v24 < v18[3] )
    {
      *(_DWORD *)v21 = 0;
    }
    else
    {
      v29 = v18[3] - *(float *)(v21 + 80);
      sub_100E0970(this - 44, v22, v29);
      ++v32;
    }
    v18 = (float *)off_103DC81C;
LABEL_33:
    v21 += 4;
    --v31;
  }
  while ( v31 );
  v25 = v32 == 0;
  *(float *)(this + 17260) = v18[3];
  if ( v25 )
    *(_BYTE *)(this + 17340) = 0;
  return sub_100E0DE0((_DWORD *)(this - 44));
}
