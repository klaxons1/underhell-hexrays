char __thiscall sub_101FC420(__m128 *this, int a2, float a3, int a4)
{
  _DWORD *v5; // ecx
  __int32 *v6; // edi
  __int32 v7; // eax
  __int32 v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // edi
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  double v16; // st5
  float *v17; // eax
  double v18; // st5
  float *v19; // eax
  double v20; // st5
  float *v21; // eax
  float *v22; // eax
  double v23; // st2
  double v24; // st5
  __m128 v25; // xmm0
  float *v26; // eax
  double v27; // st5
  float *v28; // eax
  double v29; // st5
  float *v30; // eax
  double v31; // st5
  float *v32; // eax
  float *v33; // eax
  float *v34; // eax
  float *v35; // eax
  float *v36; // eax
  __int32 v37; // edx
  int v38; // eax
  int v39; // eax
  unsigned int v40; // ecx
  __int32 v41; // eax
  double v42; // st7
  int v43; // edi
  int v44; // edi
  int v45; // edx
  void *v46; // eax
  _DWORD *v47; // eax
  __int32 v48; // ecx
  __int32 v49; // eax
  int v50; // eax
  char v51; // al
  __int32 v52; // eax
  __int32 v53; // eax
  int v54; // eax
  __int32 v55; // eax
  __int32 v56; // eax
  int v57; // eax
  char v58; // al
  _DWORD *v59; // ebx
  __int8 v60; // cl
  __int32 v61; // eax
  __int8 v62; // al
  __int32 v63; // ecx
  int i; // ebx
  __int32 v65; // eax
  char v66; // al
  __int32 v67; // eax
  __int32 v68; // eax
  char v69; // al
  __int32 v70; // eax
  char result; // al
  int v72; // [esp+Ch] [ebp-48h]
  unsigned int v73; // [esp+2Ch] [ebp-28h]
  int v74; // [esp+2Ch] [ebp-28h]
  _DWORD *v75; // [esp+30h] [ebp-24h]
  int v76; // [esp+30h] [ebp-24h]
  _DWORD *v77; // [esp+34h] [ebp-20h]
  int v78; // [esp+38h] [ebp-1Ch]
  _DWORD v79[6]; // [esp+3Ch] [ebp-18h]

  v5 = (_DWORD *)this[4].m128_i32[0];
  v6 = &this[3].m128_i32[2];
  if ( v5 != (_DWORD *)a2 )
  {
    if ( v5 )
    {
      sub_101FA630(v5, &this[3].m128_i32[2]);
      this[4].m128_i32[0] = 0;
    }
    this[4].m128_i32[0] = a2;
    if ( a2 )
    {
      *v6 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 )
        *(_DWORD *)(*(_DWORD *)a2 + 4) = v6;
      this[3].m128_i32[3] = 0;
      *(_DWORD *)a2 = v6;
    }
  }
  v7 = this[4].m128_i32[0];
  this[417].m128_i32[1] = 0;
  this[417].m128_i32[0] = *(_DWORD *)(v7 + 320);
  *(_DWORD *)(v7 + 320) = this;
  v8 = this[417].m128_i32[0];
  if ( v8 )
    *(_DWORD *)(v8 + 6676) = this;
  sub_101F7A60(this, (_DWORD *)a2);
  if ( (*(_BYTE *)(a2 + 846) & 1) != 0 )
    v9 = *(_DWORD *)(a2 + 316);
  else
    v9 = 0;
  v10 = sub_101FBEA0(off_103EE614, v9);
  v11 = (_DWORD *)this->m128_i32[2];
  v12 = v10;
  if ( v11 != (_DWORD *)v10 )
  {
    if ( v11 )
    {
      sub_101FA630(v11, this);
      this->m128_i32[2] = 0;
    }
    this->m128_i32[2] = v12;
    if ( v12 )
    {
      this->m128_i32[0] = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 )
        *(_DWORD *)(*(_DWORD *)v12 + 4) = this;
      this->m128_i32[1] = 0;
      *(_DWORD *)v12 = this;
    }
  }
  this[412].m128_i8[4] ^= (this[412].m128_i8[4] ^ (a4 != 0)) & 1;
  if ( (this[412].m128_i8[4] & 1) != 0 )
  {
    this[414].m128_i32[0] = a4;
  }
  else
  {
    this[414].m128_i32[0] = (__int32)this;
    this[414].m128_i32[0] += Plat_MSTime();
  }
  v13 = (float *)this[411].m128_i32[1];
  v13[3] = 0.0;
  v13[2] = 0.0;
  v13[1] = 0.0;
  *v13 = 0.0;
  v13[7] = 0.0;
  v13[6] = 0.0;
  v13[5] = 0.0;
  v13[4] = 0.0;
  v13[11] = 0.0;
  v13[10] = 0.0;
  v13[9] = 0.0;
  v13[8] = 0.0;
  v14 = (float *)this[411].m128_i32[1];
  v14[27] = 0.0;
  v14[26] = 0.0;
  v14 += 24;
  v14[1] = 0.0;
  *v14 = 0.0;
  v14[7] = 0.0;
  v14[6] = 0.0;
  v14[5] = 0.0;
  v14[4] = 0.0;
  v14[11] = 0.0;
  v14[10] = 0.0;
  v14[9] = 0.0;
  v14[8] = 0.0;
  v15 = (float *)this[411].m128_i32[1];
  v15[15] = 1.0;
  v15 += 12;
  v15[2] = 1.0;
  v15[1] = 1.0;
  *v15 = 1.0;
  v16 = *(float *)(a2 + 472);
  v17 = (float *)this[411].m128_i32[1];
  v17[39] = *(float *)(a2 + 472);
  v17[38] = v16;
  v17 += 36;
  v17[1] = v16;
  *v17 = v16;
  v18 = *(float *)(a2 + 476);
  v19 = (float *)this[411].m128_i32[1];
  v19[51] = *(float *)(a2 + 476);
  v19[50] = v18;
  v19 += 48;
  v19[1] = v18;
  *v19 = v18;
  v20 = *(float *)(a2 + 480);
  v21 = (float *)this[411].m128_i32[1];
  v21[63] = *(float *)(a2 + 480);
  v21[62] = v20;
  v21 += 60;
  v21[1] = v20;
  *v21 = v20;
  v22 = (float *)(this[411].m128_i32[1] + 288);
  v23 = (double)*(unsigned __int8 *)(a2 + 468) * 0.0039215689;
  v24 = (double)*(unsigned __int8 *)(a2 + 469) * 0.0039215689;
  v22[3] = v23;
  v22[2] = v23;
  v22[1] = v23;
  *v22 = v23;
  v22[7] = v24;
  v22[6] = v24;
  v22[5] = v24;
  v22[4] = v24;
  v22[11] = v24;
  v22[10] = v24;
  v22[9] = v24;
  v25 = 0;
  v22[8] = v24;
  v26 = (float *)(this[411].m128_i32[1] + 336);
  v27 = 0.0039215689 * (double)*(unsigned __int8 *)(a2 + 471);
  v26[3] = v27;
  v26[2] = v27;
  v26[1] = v27;
  *v26 = v27;
  v28 = (float *)(this[411].m128_i32[1] + 384);
  v28[3] = 0.0;
  v28[2] = 0.0;
  v28[1] = 0.0;
  *v28 = 0.0;
  v29 = (double)*(int *)(a2 + 484);
  v30 = (float *)(this[411].m128_i32[1] + 432);
  v30[3] = v29;
  v30[2] = v29;
  v30[1] = v29;
  *v30 = v29;
  v31 = (double)*(int *)(a2 + 488);
  v32 = (float *)(this[411].m128_i32[1] + 624);
  v32[3] = v31;
  v32[2] = v31;
  v32[1] = v31;
  *v32 = v31;
  v33 = (float *)(this[411].m128_i32[1] + 480);
  v33[3] = 0.1;
  v33[2] = 0.1;
  v33[1] = 0.1;
  *v33 = 0.1;
  v34 = (float *)(this[411].m128_i32[1] + 528);
  v34[3] = 0.0;
  v34[2] = 0.0;
  v34[1] = 0.0;
  *v34 = 0.0;
  v35 = (float *)this[411].m128_i32[1];
  v35[147] = 0.0;
  v35 += 144;
  v35[2] = 0.0;
  v35[1] = 0.0;
  *v35 = 0.0;
  v36 = (float *)(this[411].m128_i32[1] + 768);
  v36[3] = 1.0;
  v36[2] = 1.0;
  v36[1] = 1.0;
  *v36 = 1.0;
  v37 = this[4].m128_i32[0];
  this[2].m128_f32[1] = -a3;
  v25.m128_f32[0] = this[2].m128_f32[1];
  this[1] = _mm_shuffle_ps(v25, v25, 0);
  v38 = *(_DWORD *)(v37 + 516);
  if ( v38 )
  {
    v39 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, v38 + 19);
    if ( v39 )
    {
      v40 = (v39 + 19) & 0xFFFFFFF0;
      *(_DWORD *)(v40 - 4) = v39;
    }
    else
    {
      v40 = 0;
    }
    this[373].m128_i32[2] = v40;
  }
  v41 = this[4].m128_i32[0];
  v42 = *((float *)off_103EE614 + 67) + *(float *)(a2 + 540);
  v79[0] = v41 + 568;
  v79[1] = v41 + 588;
  this[3].m128_f32[1] = v42;
  v79[2] = v41 + 608;
  v79[3] = v41 + 628;
  v79[4] = v41 + 648;
  v79[5] = v41 + 668;
  v73 = 0;
  v75 = (_DWORD *)(v41 + 708);
  do
  {
    v77 = (_DWORD *)v79[v73];
    v43 = 0;
    v78 = v77[3];
    if ( v78 > 0 )
    {
      do
      {
        (*(void (__thiscall **)(_DWORD, __m128 *, __int32))(**(_DWORD **)(*v77 + 4 * v43) + 8))(
          *(_DWORD *)(*v77 + 4 * v43),
          this,
          this[373].m128_i32[2] + *(_DWORD *)(*v75 + 4 * v43));
        ++v43;
      }
      while ( v43 < v78 );
    }
    v75 += 5;
    ++v73;
  }
  while ( v73 < 6 );
  this[411].m128_i32[2] = *(_DWORD *)(a2 + 24);
  this[411].m128_i32[3] = *(_DWORD *)(a2 + 28);
  if ( *(int *)(a2 + 700) > 0 )
  {
    v44 = a4;
    v76 = 0;
    v74 = *(_DWORD *)(a2 + 700);
    do
    {
      if ( v44 )
        v44 += 129;
      v45 = *(_DWORD *)(a2 + 688);
      *(float *)&v72 = *(float *)(v76 + v45 + 36) - this[2].m128_f32[1];
      if ( *(_BYTE *)(v45 + v76 + 32) )
      {
        v46 = (void *)sub_1022CF00(v45 + v76 + 16);
        v47 = sub_101FBD60((int **)off_103EE614, v46, v72, v44);
      }
      else
      {
        v47 = (_DWORD *)sub_101FCD00((UUID *)(v45 + v76), v72, v44);
      }
      if ( v47 )
      {
        v47[1501] = this;
        v47[1495] = 0;
        v48 = this[375].m128_i32[2];
        if ( v48 )
        {
          for ( ; *(_DWORD *)(v48 + 5980); v48 = *(_DWORD *)(v48 + 5980) )
            ;
          *(_DWORD *)(v48 + 5980) = v47;
          v47[1496] = v48;
        }
        else
        {
          this[375].m128_i32[2] = (__int32)v47;
        }
        this[411].m128_i32[2] |= v47[1646];
        this[411].m128_i32[3] |= v47[1647];
      }
      v76 += 40;
      --v74;
    }
    while ( v74 );
  }
  v49 = this[4].m128_i32[0];
  if ( v49 )
  {
    if ( (*(_BYTE *)(v49 + 846) & 1) != 0 )
      v50 = *(_DWORD *)(v49 + 316);
    else
      v50 = 0;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v50 + 68))(v50) )
    {
LABEL_52:
      v51 = 1;
      goto LABEL_57;
    }
    v52 = this[375].m128_i32[2];
    if ( v52 )
    {
      while ( (*(_BYTE *)(v52 + 6596) & 8) == 0 )
      {
        v52 = *(_DWORD *)(v52 + 5980);
        if ( !v52 )
          goto LABEL_56;
      }
      goto LABEL_52;
    }
  }
LABEL_56:
  v51 = 0;
LABEL_57:
  this[412].m128_i8[4] ^= (this[412].m128_i8[4] ^ (8 * v51)) & 8;
  v53 = this[4].m128_i32[0];
  if ( v53 )
  {
    if ( (*(_BYTE *)(v53 + 846) & 1) != 0 )
      v54 = *(_DWORD *)(v53 + 316);
    else
      v54 = 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v54 + 68))(v54) )
    {
      v55 = this[375].m128_i32[2];
      if ( !v55 )
        goto LABEL_75;
      while ( (*(_BYTE *)(v55 + 6596) & 8) == 0 )
      {
        v55 = *(_DWORD *)(v55 + 5980);
        if ( !v55 )
          goto LABEL_75;
      }
    }
    v56 = this[4].m128_i32[0];
    if ( v56 )
    {
      if ( (*(_BYTE *)(v56 + 846) & 1) != 0 )
        v57 = *(_DWORD *)(v56 + 316);
      else
        v57 = 0;
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v57 + 68))(v57) )
      {
LABEL_71:
        v58 = 1;
        goto LABEL_76;
      }
      v59 = (_DWORD *)this[375].m128_i32[2];
      if ( v59 )
      {
        while ( !sub_101F8E70(v59) )
        {
          v59 = (_DWORD *)v59[1495];
          if ( !v59 )
            goto LABEL_75;
        }
        goto LABEL_71;
      }
    }
  }
LABEL_75:
  v58 = 0;
LABEL_76:
  this[412].m128_i8[4] ^= (this[412].m128_i8[4] ^ (16 * v58)) & 0x10;
  v60 = (sub_101FA680(this) << 7) | this[412].m128_i8[4] & 0x7F;
  v61 = this[4].m128_i32[0];
  this[412].m128_i8[4] = v60;
  if ( v61 )
  {
    v62 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v61 + 316) + 96))(*(_DWORD *)(v61 + 316), 0);
    v63 = this[4].m128_i32[0];
    this[412].m128_i8[5] = v62;
    this[412].m128_i8[6] = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v63 + 316) + 100))(
                             *(_DWORD *)(v63 + 316),
                             0);
  }
  for ( i = this[375].m128_i32[2]; i; i = *(_DWORD *)(i + 5980) )
    sub_101F8E10(i);
  v65 = this[4].m128_i32[0];
  if ( v65 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v65 + 316) + 96))(*(_DWORD *)(v65 + 316), 0) )
    {
LABEL_82:
      v66 = 1;
      goto LABEL_87;
    }
    v67 = this[375].m128_i32[2];
    if ( v67 )
    {
      while ( (*(_BYTE *)(v67 + 6596) & 0x20) == 0 )
      {
        v67 = *(_DWORD *)(v67 + 5980);
        if ( !v67 )
          goto LABEL_86;
      }
      goto LABEL_82;
    }
  }
LABEL_86:
  v66 = 0;
LABEL_87:
  this[412].m128_i8[4] ^= (this[412].m128_i8[4] ^ (32 * v66)) & 0x20;
  v68 = this[4].m128_i32[0];
  if ( !v68 )
    goto LABEL_93;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v68 + 316) + 100))(*(_DWORD *)(v68 + 316), 0) )
  {
    v70 = this[375].m128_i32[2];
    if ( v70 )
    {
      while ( (*(_BYTE *)(v70 + 6596) & 0x40) == 0 )
      {
        v70 = *(_DWORD *)(v70 + 5980);
        if ( !v70 )
          goto LABEL_93;
      }
      goto LABEL_89;
    }
LABEL_93:
    v69 = 0;
    goto LABEL_94;
  }
LABEL_89:
  v69 = 1;
LABEL_94:
  result = (this[412].m128_i8[4] ^ (v69 << 6)) & 0x40;
  this[412].m128_i8[4] ^= result;
  return result;
}
