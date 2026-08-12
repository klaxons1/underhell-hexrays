char __thiscall sub_1018FE20(int this, int a2)
{
  double v4; // st7
  double v5; // st6
  float *v6; // ecx
  int v7; // eax
  int v8; // ebx
  double v9; // st7
  double v10; // st6
  float *v11; // ecx
  int v12; // eax
  double v13; // st7
  double v14; // st6
  int v15; // eax
  double v16; // st7
  double v17; // st6
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // ecx
  int v23; // edx
  int *v24; // eax
  float v26; // [esp+Ch] [ebp-34h] BYREF
  float v27; // [esp+10h] [ebp-30h]
  float v28; // [esp+14h] [ebp-2Ch]
  float v29; // [esp+18h] [ebp-28h] BYREF
  float v30; // [esp+1Ch] [ebp-24h]
  float v31; // [esp+20h] [ebp-20h]
  float v32; // [esp+24h] [ebp-1Ch] BYREF
  float v33; // [esp+28h] [ebp-18h]
  float v34; // [esp+2Ch] [ebp-14h]
  float v35; // [esp+30h] [ebp-10h] BYREF
  float v36; // [esp+34h] [ebp-Ch]
  float v37; // [esp+38h] [ebp-8h]
  float v38; // [esp+3Ch] [ebp-4h]
  float v39; // [esp+48h] [ebp+8h]
  float v40; // [esp+48h] [ebp+8h]
  float v41; // [esp+48h] [ebp+8h]
  float v42; // [esp+48h] [ebp+8h]

  if ( *(float *)(a2 + 16) >= (double)*(float *)(this + 4) )
  {
    if ( *(float *)(a2 + 4) <= (double)*(float *)(this + 16) )
    {
      if ( *(float *)(a2 + 20) >= (double)*(float *)(this + 8) )
      {
        if ( *(float *)(a2 + 8) <= (double)*(float *)(this + 20) )
          return 0;
        if ( *(float *)(a2 + 4) >= (double)*(float *)(this + 4) )
          v16 = *(float *)(a2 + 4);
        else
          v16 = *(float *)(this + 4);
        v38 = v16;
        if ( *(float *)(a2 + 16) <= (double)*(float *)(this + 16) )
          v17 = *(float *)(a2 + 16);
        else
          v17 = *(float *)(this + 16);
        v42 = v17;
        v32 = v16;
        v33 = *(float *)(this + 20);
        v34 = sub_1018AD70((float *)this, &v32);
        v35 = v42;
        v36 = *(float *)(a2 + 8);
        v37 = sub_1018AD70((float *)a2, &v35);
        v26 = v42;
        v27 = v33;
        v28 = sub_1018AD70((float *)this, &v26);
        v29 = v38;
        v30 = v36;
        v31 = sub_1018AD70((float *)a2, &v29);
        v18 = sub_10184390(800);
        if ( v18 )
          v8 = sub_1018F210(v18, &v32, (int)&v26, &v35, (int)&v29);
        else
          v8 = 0;
        sub_1018F770((char *)this, (char *)v8, 2);
        sub_1018F770((char *)v8, (char *)this, 0);
        sub_1018F770((char *)a2, (char *)v8, 0);
        sub_1018F770((char *)v8, (char *)a2, 2);
      }
      else
      {
        if ( *(float *)(a2 + 4) >= (double)*(float *)(this + 4) )
          v13 = *(float *)(a2 + 4);
        else
          v13 = *(float *)(this + 4);
        v38 = v13;
        if ( *(float *)(a2 + 16) <= (double)*(float *)(this + 16) )
          v14 = *(float *)(a2 + 16);
        else
          v14 = *(float *)(this + 16);
        v41 = v14;
        v32 = v13;
        v33 = *(float *)(a2 + 20);
        v34 = sub_1018AD70((float *)a2, &v32);
        v35 = v41;
        v36 = *(float *)(this + 8);
        v37 = sub_1018AD70((float *)this, &v35);
        v26 = v41;
        v27 = v33;
        v28 = sub_1018AD70((float *)a2, &v26);
        v29 = v38;
        v30 = v36;
        v31 = sub_1018AD70((float *)this, &v29);
        v15 = sub_10184390(800);
        if ( v15 )
          v8 = sub_1018F210(v15, &v32, (int)&v26, &v35, (int)&v29);
        else
          v8 = 0;
        sub_1018F770((char *)this, (char *)v8, 0);
        sub_1018F770((char *)v8, (char *)this, 2);
        sub_1018F770((char *)a2, (char *)v8, 2);
        sub_1018F770((char *)v8, (char *)a2, 0);
      }
    }
    else
    {
      if ( *(float *)(a2 + 8) >= (double)*(float *)(this + 8) )
        v9 = *(float *)(a2 + 8);
      else
        v9 = *(float *)(this + 8);
      v38 = v9;
      if ( *(float *)(a2 + 20) <= (double)*(float *)(this + 20) )
        v10 = *(float *)(a2 + 20);
      else
        v10 = *(float *)(this + 20);
      v40 = v10;
      v32 = *(float *)(this + 16);
      v33 = v9;
      v34 = sub_1018AD70((float *)this, &v32);
      v35 = *(float *)(a2 + 4);
      v36 = v40;
      v37 = sub_1018AD70((float *)a2, &v35);
      v26 = v35;
      v27 = v38;
      v28 = sub_1018AD70(v11, &v26);
      v29 = v32;
      v30 = v40;
      v31 = sub_1018AD70((float *)this, &v29);
      v12 = sub_10184390(800);
      if ( v12 )
        v8 = sub_1018F210(v12, &v32, (int)&v26, &v35, (int)&v29);
      else
        v8 = 0;
      sub_1018F770((char *)this, (char *)v8, 1);
      sub_1018F770((char *)v8, (char *)this, 3);
      sub_1018F770((char *)a2, (char *)v8, 3);
      sub_1018F770((char *)v8, (char *)a2, 1);
    }
  }
  else
  {
    if ( *(float *)(a2 + 8) >= (double)*(float *)(this + 8) )
      v4 = *(float *)(a2 + 8);
    else
      v4 = *(float *)(this + 8);
    v38 = v4;
    if ( *(float *)(a2 + 20) <= (double)*(float *)(this + 20) )
      v5 = *(float *)(a2 + 20);
    else
      v5 = *(float *)(this + 20);
    v39 = v5;
    v32 = *(float *)(a2 + 16);
    v33 = v4;
    v34 = sub_1018AD70((float *)a2, &v32);
    v35 = *(float *)(this + 4);
    v36 = v39;
    v37 = sub_1018AD70((float *)this, &v35);
    v26 = v35;
    v27 = v38;
    v28 = sub_1018AD70(v6, &v26);
    v29 = v32;
    v30 = v39;
    v31 = sub_1018AD70((float *)a2, &v29);
    v7 = sub_10184390(800);
    if ( v7 )
      v8 = sub_1018F210(v7, &v32, (int)&v26, &v35, (int)&v29);
    else
      v8 = 0;
    sub_1018F770((char *)this, (char *)v8, 3);
    sub_1018F770((char *)v8, (char *)this, 1);
    sub_1018F770((char *)a2, (char *)v8, 1);
    sub_1018F770((char *)v8, (char *)a2, 3);
  }
  v19 = *(_DWORD *)(a2 + 44);
  v20 = *(_DWORD *)(this + 44);
  if ( v20 != v19 )
  {
    if ( v20 )
    {
      if ( !v19 )
      {
        *(_DWORD *)(v8 + 44) = v20;
        goto LABEL_54;
      }
      if ( RandomInt(0, 100) < 50 )
      {
        *(_DWORD *)(v8 + 44) = *(_DWORD *)(this + 44);
        goto LABEL_54;
      }
      v19 = *(_DWORD *)(a2 + 44);
    }
    *(_DWORD *)(v8 + 44) = v19;
    goto LABEL_54;
  }
  *(_DWORD *)(v8 + 44) = v20;
LABEL_54:
  v21 = sub_1018CED0(&dword_10632624, 0);
  sub_1018ED30(&dword_10632624, v21);
  v22 = 12 * v21 + dword_10632624;
  *(_DWORD *)(v22 + 8) = -1;
  v23 = dword_10632634;
  *(_DWORD *)(v22 + 4) = dword_10632634;
  dword_10632634 = v21;
  if ( v23 == -1 )
    dword_10632630 = v21;
  else
    *(_DWORD *)(dword_10632624 + 12 * v23 + 8) = v21;
  ++dword_1063263C;
  v24 = (int *)(dword_10632624 + 12 * v21);
  if ( v24 )
    *v24 = v8;
  sub_1019FC80(v8);
  return 1;
}
