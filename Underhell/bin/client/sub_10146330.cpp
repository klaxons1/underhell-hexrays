void __userpurge sub_10146330(int a1@<ecx>, int a2@<ebx>, unsigned __int8 a3, int a4)
{
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // eax
  void *v8; // esp
  _BYTE *v9; // edi
  unsigned int v10; // ecx
  void *v11; // eax
  int v12; // eax
  void (__thiscall *v13)(int); // edx
  int v14; // ecx
  int v15; // eax
  bool v16; // zf
  unsigned __int16 *v17; // edi
  int v18; // ebx
  int v19; // ecx
  int v20; // edx
  int *v21; // ecx
  int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // esi
  void *v26; // eax
  int *v27; // esi
  void *v28; // eax
  int v29; // ebx
  char v30; // al
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  void *v34; // eax
  void *v35; // eax
  int *v36; // esi
  int (__thiscall *v37)(int *); // eax
  char v38; // al
  int v39; // eax
  int v40; // esi
  int v41; // eax
  int v42; // esi
  int v43; // eax
  int v44; // eax
  int v45; // esi
  void *v46; // eax
  int v47; // [esp+44h] [ebp-4Ch]
  int v48; // [esp+44h] [ebp-4Ch]
  _BYTE v49[12]; // [esp+50h] [ebp-40h] BYREF
  int v50; // [esp+5Ch] [ebp-34h]
  int v51; // [esp+60h] [ebp-30h]
  int *v52; // [esp+64h] [ebp-2Ch]
  int v53; // [esp+68h] [ebp-28h]
  int v54; // [esp+6Ch] [ebp-24h]
  _DWORD *v55; // [esp+70h] [ebp-20h]
  int v56; // [esp+74h] [ebp-1Ch]
  int v57; // [esp+78h] [ebp-18h]
  int v58; // [esp+7Ch] [ebp-14h]
  _BYTE *v59; // [esp+80h] [ebp-10h]
  int v60; // [esp+84h] [ebp-Ch] BYREF
  int v61; // [esp+88h] [ebp-8h]
  char v62; // [esp+8Eh] [ebp-2h]
  bool v63; // [esp+8Fh] [ebp-1h]
  void *v64; // [esp+98h] [ebp+8h]
  char v65; // [esp+9Bh] [ebp+Bh]
  char v66; // [esp+9Bh] [ebp+Bh]

  v4 = (_DWORD *)a1;
  v5 = *(_DWORD *)(a1 + 148);
  v55 = (_DWORD *)a1;
  v53 = v5;
  if ( dword_103E7E94 )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 716))(v6, 0);
  }
  else
  {
    sub_1013BAA0(a1, v5);
  }
  if ( !*(_DWORD *)(dword_1043BF1C + 48) )
  {
    sub_10146240(v4, a3);
    return;
  }
  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CViewRender::DrawTranslucentRenderables",
    0,
    "DrawTranslucentRenderables",
    0,
    4);
  v7 = *(_DWORD *)(v5 + 12);
  v57 = v7 - 1;
  v60 = 0;
  v8 = alloca(2 * v7);
  v9 = v49;
  v10 = v4[33] & 0xFFFFF7FF;
  v59 = v49;
  v54 = sub_10142260(v10);
  v11 = sub_100949D0();
  (*(void (__thiscall **)(void *))(*(_DWORD *)v11 + 64))(v11);
  v12 = *(_DWORD *)(v4[32] + 272);
  if ( (!v12 || *(_DWORD *)(*(_DWORD *)(v12 + 28) + 48)) && *(_DWORD *)(dword_1043C03C + 48) )
  {
    a2 = dword_1047CA8C;
    v13 = *(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100);
    v50 = dword_1047CA8C;
    v13(dword_1047CA8C);
    sub_100F0DC0(a3);
    v14 = v4[36];
    v15 = *(_DWORD *)(v14 + 688168) - 1;
    v16 = (v4[33] & 3) == 0;
    v56 = v14;
    v63 = !v16;
    v61 = v15;
    if ( v15 < 0 )
    {
LABEL_49:
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 104))(a2);
      goto LABEL_50;
    }
    v17 = (unsigned __int16 *)(v14 + 12 * v15 + 393224);
    while ( 1 )
    {
      v18 = v17[2];
      v51 = v18;
      sub_10143190((int)v4, v18, v57, v18, v54, &v60, (int)v59, a4);
      v19 = *(_DWORD *)(v53 + 16);
      v57 = v18 - 1;
      v20 = *(unsigned __int16 *)(v19 + 2 * v18);
      v21 = (int *)v4[32];
      v22 = *(_DWORD *)off_103DCDDC;
      v64 = off_103DCDDC;
      v23 = *v21;
      v58 = v20;
      v24 = (*(int (__thiscall **)(int *))(v23 + 60))(v21);
      if ( (*(unsigned __int8 (__thiscall **)(void *, int, int))(v22 + 44))(v64, v58, v24) )
      {
        v25 = v60 - 1;
        v26 = sub_100949D0();
        (*(void (__thiscall **)(void *, float *, float *, float *, float *, int, _BYTE *))(*(_DWORD *)v26 + 68))(
          v26,
          &flt_1043BD14,
          &flt_1043BD2C,
          flt_1043BD38,
          flt_1043BD44,
          v25,
          v59);
        if ( v17[2] == v18 )
        {
          while ( 1 )
          {
            if ( v61 < 0 )
              goto LABEL_28;
            v27 = *(int **)v17;
            v29 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v17 + 4))(*(_DWORD *)v17);
            v28 = sub_100949D0();
            (*(void (__thiscall **)(void *, float *, float *, float *, float *, int, int))(*(_DWORD *)v28 + 72))(
              v28,
              &flt_1043BD14,
              &flt_1043BD2C,
              flt_1043BD38,
              flt_1043BD44,
              v58,
              v29);
            LOBYTE(v29) = (*(int (__thiscall **)(int *))(*v27 + 20))(v27);
            v30 = (*(int (__thiscall **)(int *))(*v27 + 24))(v27);
            v65 = v30;
            if ( !(_BYTE)v29 && !v30 || (_BYTE)a4 )
              goto LABEL_26;
            if ( !v63 )
              break;
LABEL_27:
            v17 = (unsigned __int16 *)(v56 + 12 * --v61 + 393224);
            if ( v17[2] != v51 )
              goto LABEL_28;
          }
          v31 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
          v60 = v31;
          if ( v31 )
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v31 + 8))(v31);
            v31 = v60;
          }
          v32 = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 28))(v31);
          v52 = (int *)v32;
          if ( v32 && v65 )
          {
            v47 = (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 16))(v32);
            v33 = (*(int (__thiscall **)(int *))(*v52 + 12))(v52);
            sub_10053B20(v29, (int)v17, 0, 0, 0, v33, v47, 1, 0);
          }
          else if ( (_BYTE)v29 )
          {
            sub_100ECE60((int)v17);
          }
          v29 = v60;
          (*(void (__thiscall **)(int))(*(_DWORD *)v60 + 12))(v60);
          (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 4))(v29);
LABEL_26:
          sub_10146080(v29, (int)v17, v27, v17[3] != 0, a4);
          goto LABEL_27;
        }
LABEL_28:
        v34 = sub_100949D0();
        (*(void (__thiscall **)(void *, float *, float *, float *, float *, int, _DWORD))(*(_DWORD *)v34 + 72))(
          v34,
          &flt_1043BD14,
          &flt_1043BD2C,
          flt_1043BD38,
          flt_1043BD44,
          v58,
          0);
        goto LABEL_47;
      }
      v35 = sub_100949D0();
      (*(void (__thiscall **)(void *, float *, float *, float *, float *, int, _BYTE *))(*(_DWORD *)v35 + 68))(
        v35,
        &flt_1043BD14,
        &flt_1043BD2C,
        flt_1043BD38,
        flt_1043BD44,
        v60,
        v59);
      if ( v17[2] == v18 )
        break;
LABEL_47:
      v4 = v55;
      v60 = 0;
      if ( v61 < 0 )
      {
        a2 = v50;
        v9 = v59;
        goto LABEL_49;
      }
    }
    while ( 1 )
    {
      if ( v61 < 0 )
        goto LABEL_47;
      v37 = *(int (__thiscall **)(int *))(**(_DWORD **)v17 + 20);
      v52 = *(int **)v17;
      v36 = v52;
      v66 = v37(v52);
      v38 = (*(int (__thiscall **)(int *))(*v36 + 24))(v36);
      v62 = v38;
      if ( !v66 && !v38 || (_BYTE)a4 )
        goto LABEL_45;
      if ( !v63 )
        break;
LABEL_46:
      v17 = (unsigned __int16 *)(v56 + 12 * --v61 + 393224);
      if ( v17[2] != v18 )
        goto LABEL_47;
    }
    v39 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    v40 = v39;
    v51 = v39;
    if ( v39 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v39 + 8))(v39);
    v41 = (*(int (__thiscall **)(int))(*(_DWORD *)v40 + 28))(v40);
    v42 = v41;
    if ( v41 )
    {
      if ( v62 )
      {
        v48 = (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 16))(v41);
        v43 = (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 12))(v42);
        sub_10053B20(v18, (int)v17, 0, 0, 0, v43, v48, 1, 0);
      }
      else if ( v66 )
      {
        v44 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v41 + 16))(v41, 0);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v42 + 12))(v42, v44);
        sub_100ECDC0((int)v17, v42);
      }
    }
    else if ( v66 )
    {
      sub_100ECE60((int)v17);
    }
    v45 = v51;
    (*(void (__thiscall **)(int))(*(_DWORD *)v51 + 12))(v51);
    (*(void (__thiscall **)(int))(*(_DWORD *)v45 + 4))(v45);
    v36 = v52;
LABEL_45:
    sub_10146080(v18, (int)v17, v36, v17[3] != 0, a4);
    goto LABEL_46;
  }
LABEL_50:
  sub_10143190((int)v4, a2, v57, 0, v54, &v60, (int)v9, a4);
  v46 = sub_100949D0();
  (*(void (__thiscall **)(void *, float *, float *, float *, float *, int, _BYTE *))(*(_DWORD *)v46 + 68))(
    v46,
    &flt_1043BD14,
    &flt_1043BD2C,
    flt_1043BD38,
    flt_1043BD44,
    v60,
    v9);
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(1.0);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
