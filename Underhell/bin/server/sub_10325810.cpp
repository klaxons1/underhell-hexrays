void __thiscall sub_10325810(int this)
{
  int *v2; // ebx
  int v3; // edi
  int v4; // eax
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  int *v11; // edx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // edi
  float *v18; // edi
  float *v19; // eax
  double v20; // st7
  int v21; // eax
  unsigned int v22; // eax
  int *v23; // ecx
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // eax
  _DWORD *v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  _DWORD *v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // eax
  int *v39; // ebx
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // eax
  _DWORD *v43; // eax
  _DWORD *v44; // eax
  int v45; // eax
  int v46; // edx
  int v47; // eax
  float *v48; // ebx
  _DWORD *v49; // eax
  int *v50; // ecx
  int v51; // eax
  int v52; // eax
  float v53; // [esp+20h] [ebp-90h]
  float v54; // [esp+20h] [ebp-90h]
  _DWORD *v55; // [esp+20h] [ebp-90h]
  float v56; // [esp+28h] [ebp-88h]
  int v57; // [esp+28h] [ebp-88h]
  float v58; // [esp+28h] [ebp-88h]
  _BYTE v59[80]; // [esp+38h] [ebp-78h] BYREF
  float v60[3]; // [esp+88h] [ebp-28h] BYREF
  float v61; // [esp+94h] [ebp-1Ch] BYREF
  float v62; // [esp+98h] [ebp-18h]
  float v63; // [esp+9Ch] [ebp-14h]
  int *v64; // [esp+A0h] [ebp-10h]
  int v65; // [esp+A4h] [ebp-Ch]
  int v66; // [esp+A8h] [ebp-8h]
  int v67; // [esp+ACh] [ebp-4h]

  v2 = (int *)sub_10021B90((void *)this);
  v3 = 0;
  v64 = v2;
  if ( v2 )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Barnacle.FinalBite", 0.0, 0);
    v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v19 = (float *)sub_10022D70();
    *v19 = v18[85] - v18[82];
    v19[1] = v18[86] - v18[83];
    v20 = v18[87] - v18[84];
    v67 = 8196;
    v19[2] = v20;
    *(float *)(this + 3684) = v20;
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v2 + 320))(v2) )
    {
      v66 = 15;
    }
    else
    {
      v21 = v2[55];
      v67 = 8196;
      v66 = v21;
    }
    v22 = *(_DWORD *)(this + 3740);
    if ( v22 != -1 )
    {
      v23 = &off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 1];
      v24 = v22 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 2] == v24 )
      {
        if ( *v23 )
        {
          v67 = 4202500;
          if ( v23[1] == v24 )
            v25 = *v23;
          else
            v25 = 0;
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v25 + 836))(v25, 0);
        }
      }
    }
    *(_BYTE *)(this + 9957) = sub_10322440((int)v2);
    v26 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v65 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 220))(v26);
    v53 = (float)v66;
    v27 = (_DWORD *)sub_10248110((int)v59, this, this, v53, v67 | 1, 0);
    sub_100D9E70(v2, this, v27);
    v28 = v65;
    *(_DWORD *)(this + 3672) = 3;
    if ( v28 == 19 )
    {
      v29 = *(_DWORD *)(this + 3740);
      if ( v29 != -1
        && off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 2] == v29 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 1] )
      {
        v30 = sub_1026A890((unsigned int *)(this + 3740));
        sub_100C1600(v30, 1, 0);
        v31 = sub_1026A890((unsigned int *)(this + 3740));
        sub_101CB440(v31);
        v32 = sub_1026A890((unsigned int *)(this + 3740));
        sub_10019680((_DWORD *)(this + 9900), v32);
        v33 = (_DWORD *)sub_1026A890((unsigned int *)(this + 3740));
        sub_1023C380(v33, (int)"NPC_HeadCrab.Die", 0.0, 0);
        *(_DWORD *)(this + 3740) = -1;
      }
      v61 = 0.5;
      v62 = 0.5;
      v63 = 0.0;
      sub_101117D0(this + 320, &v61, v60);
      v34 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v61 = 0.0;
      v62 = 0.0;
      v63 = -1.0;
      v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 276))(v34);
      sub_10124BC0(v60, &v61, v35, 8, COERCE_FLOAT(255));
      *(float *)(this + 3680) = *(float *)(dword_106B31C8 + 12) + 10.0;
    }
    else if ( v28 == 4 )
    {
      v36 = (*(int (__thiscall **)(int *))(*v2 + 276))(v2);
      *(float *)(this + 9908) = 0.0;
      *(_DWORD *)(this + 9912) = v36;
      sub_103214C0(this);
      *(float *)(this + 3680) = *(float *)(dword_106B31C8 + 12) + 10.0;
      if ( sub_1026A890((unsigned int *)(this + 3740)) )
      {
        v37 = sub_1026A890((unsigned int *)(this + 3740));
        sub_1025FAC0(v37);
      }
      if ( *(_BYTE *)(this + 9957) )
      {
        v54 = (float)*(int *)(this + 220);
        v38 = (_DWORD *)sub_10248110((int)v59, this, this, v54, 0x100000, 0);
        sub_100D9E70((int *)this, this, v38);
      }
    }
    else if ( sub_102DC130((unsigned int *)(this + 3740)) || (*(unsigned __int8 (__thiscall **)(int *))(*v2 + 320))(v2) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v2 + 320))(v2) || v2[55] <= 0 )
        sub_103244B0(this, 0);
    }
    else
    {
      *(_BYTE *)(this + 3677) = 1;
      v39 = *(int **)(sub_1026A890((unsigned int *)(this + 3736)) + 424);
      v57 = dword_106BAFEC;
      v40 = sub_1026A890((unsigned int *)(this + 3740));
      sub_101DAA50(*(_DWORD *)(v40 + 424), v57);
      v41 = sub_1026A890((unsigned int *)(this + 3736));
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v41 + 1120) + 8))(*(_DWORD *)(v41 + 1120), 0.0);
      (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD))(*v39 + 268))(v39, 10000.0, 10000.0, 0, 0);
      v65 = *v39;
      v42 = (_DWORD *)sub_1026A890((unsigned int *)(this + 3736));
      v55 = sub_1001F410(v42);
      v43 = (_DWORD *)sub_1026A890((unsigned int *)(this + 3736));
      v44 = sub_10019640(v43);
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, _DWORD, _DWORD))(v65 + 272))(v39, v44, v55, 0, 0.0);
      v45 = sub_1026A890((unsigned int *)(this + 3736));
      sub_100E0970(v45, v46, 8, 0);
      v61 = 0.0;
      v62 = 0.0;
      v63 = 32.0;
      v47 = sub_1026A890((unsigned int *)(this + 3736));
      sub_100DD660(v47, &v61);
      v48 = (float *)(sub_10019640((_DWORD *)this) + 2);
      v49 = (_DWORD *)sub_1026A890((unsigned int *)(this + 3736));
      v58 = *v48 - *((float *)sub_10019640(v49) + 2);
      sub_10322D80(this, v58);
      if ( *(_DWORD *)(dword_106E511C + 48) )
      {
        v50 = v64;
        *(float *)(this + 9908) = 0.0;
        v51 = (*(int (__thiscall **)(int *))(*v50 + 276))(v50);
        v61 = 0.5;
        *(_DWORD *)(this + 9912) = v51;
        v62 = 0.5;
        v63 = 0.0;
        sub_101117D0(this + 320, &v61, (float *)(this + 9916));
        v52 = sub_1026A890((unsigned int *)(this + 3740));
        sub_10322D30(v52, 0.0);
        sub_103214C0(this);
      }
    }
  }
  else if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    if ( __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBounceBomb `RTTI Type Descriptor',
           0) )
    {
      *(_BYTE *)(this + 3677) = 1;
      *(_BYTE *)(this + 9956) = 1;
      v5 = *(_DWORD *)(this + 3736);
      if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] != *(_DWORD *)(this + 3736) >> 12 )
        v6 = 0;
      else
        v6 = off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 1];
      v7 = *(_DWORD *)(v6 + 424);
      if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] != v5 >> 12 )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 1];
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v8 + 1120) + 8))(0.0);
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 268))(v7, 10000.0, 10000.0, 0, 0);
      v9 = *(_DWORD *)(this + 3736);
      if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] != v9 >> 12 )
        v67 = 0;
      else
        v67 = off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v67 + 252) & 0x800) != 0 )
        sub_100DAE60(v67);
      v10 = *(_DWORD *)(this + 3736);
      if ( v10 != -1 && off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] == v10 >> 12 )
        v3 = off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      (*(void (__thiscall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)v7 + 272))(v7, v3 + 580, v67 + 704, 0, 0.0);
      v12 = *(_DWORD *)(this + 3736);
      if ( v12 == -1 || (v11 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] != v12 >> 12) )
        v13 = 0;
      else
        v13 = off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 1];
      sub_100E0970(v13, (int)v11, 8, 0);
      v14 = *(_DWORD *)(this + 3736);
      v61 = 0.0;
      v62 = 0.0;
      v63 = 32.0;
      if ( v14 == -1 || off_1061BE18[4 * (v14 & 0xFFF) + 2] != v14 >> 12 )
        v15 = 0;
      else
        v15 = off_1061BE18[4 * (v14 & 0xFFF) + 1];
      sub_100DD660(v15, &v61);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v16 = *(_DWORD *)(this + 3736);
      if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] != v16 >> 12 )
        v17 = 0;
      else
        v17 = off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
        sub_100DAE60(v17);
      v56 = *(float *)(this + 588) - *(float *)(v17 + 588);
      sub_10322D80(this, v56);
    }
  }
}
