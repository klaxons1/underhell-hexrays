void __userpurge sub_1022E260(float a1@<ecx>, int a2@<esi>, float a3, int *a4, int a5, float a6)
{
  int v6; // ebx
  float v7; // edi
  int v8; // esi
  int (__thiscall *v9)(int, float *, _DWORD); // edx
  float *v10; // eax
  int v11; // esi
  int v12; // ebx
  int v13; // eax
  int v14; // esi
  int v15; // edi
  double (__thiscall ***v16)(_DWORD); // esi
  double v17; // st7
  bool v18; // zf
  int *v19; // eax
  double v20; // st7
  int *v21; // ebx
  int v22; // esi
  int v23; // ebx
  int v24; // eax
  float *v25; // esi
  double v26; // st7
  int (__thiscall *v27)(int); // eax
  double v28; // st7
  int v29; // eax
  int *v30; // esi
  int v31; // eax
  char *v32; // eax
  double v33; // st7
  int *v34; // esi
  int v35; // eax
  int v36; // edi
  int v37; // eax
  int v38; // eax
  int v39; // esi
  float v40; // ecx
  float v41; // edx
  unsigned int v42; // ecx
  int *v43; // eax
  unsigned int v44; // ecx
  int v45; // ebx
  double v46; // st7
  double v47; // st7
  int (__thiscall *v48)(int *, int **); // eax
  const char *v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  char *v53; // [esp+8h] [ebp-2D0h]
  int v54; // [esp+Ch] [ebp-2CCh]
  float v55; // [esp+10h] [ebp-2C8h]
  float v56; // [esp+10h] [ebp-2C8h]
  int v57; // [esp+14h] [ebp-2C4h]
  char Source[256]; // [esp+20h] [ebp-2B8h] BYREF
  char String[256]; // [esp+120h] [ebp-1B8h] BYREF
  char Destination[32]; // [esp+220h] [ebp-B8h] BYREF
  _DWORD v61[8]; // [esp+240h] [ebp-98h] BYREF
  float v62[3]; // [esp+260h] [ebp-78h] BYREF
  _DWORD v63[8]; // [esp+26Ch] [ebp-6Ch] BYREF
  int v64; // [esp+28Ch] [ebp-4Ch] BYREF
  char *v65; // [esp+290h] [ebp-48h]
  float v66; // [esp+294h] [ebp-44h]
  float v67; // [esp+298h] [ebp-40h]
  int v68; // [esp+29Ch] [ebp-3Ch]
  int v69; // [esp+2A0h] [ebp-38h]
  int v70; // [esp+2A4h] [ebp-34h]
  float v71; // [esp+2A8h] [ebp-30h]
  int v72; // [esp+2ACh] [ebp-2Ch]
  __int16 v73; // [esp+2B0h] [ebp-28h]
  char v74; // [esp+2B2h] [ebp-26h]
  int v75; // [esp+2B4h] [ebp-24h]
  int v76; // [esp+2B8h] [ebp-20h] BYREF
  int v77; // [esp+2BCh] [ebp-1Ch]
  int v78; // [esp+2C0h] [ebp-18h]
  int v79; // [esp+2C4h] [ebp-14h]
  int v80; // [esp+2C8h] [ebp-10h]
  __int16 v81; // [esp+2CCh] [ebp-Ch]
  float v82; // [esp+2D0h] [ebp-8h]
  float v83; // [esp+2D4h] [ebp-4h]

  v6 = (int)a4;
  v7 = a1;
  v83 = a1;
  if ( !a4 )
    return;
  v57 = a2;
  v8 = (*(int (__thiscall **)(int *))(*a4 + 580))(a4);
  sub_10219BB0(v63);
  v63[0] = &CPASFilter::`vftable';
  sub_1021A370(v63, v8);
  v9 = *(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v6 + 580);
  v63[0] = &CPASAttenuationFilter::`vftable';
  v10 = (float *)v9(v6, v62, 0.80000001);
  sub_1021A0E0(v63, v10, COERCE_FLOAT(v62));
  if ( *(_DWORD *)(LODWORD(v7) + 1524) )
  {
    v11 = sub_1042A300(v63);
    v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(LODWORD(v7) + 1524) + 12))(*(_DWORD *)(LODWORD(v7) + 1524));
    v13 = v11 - 1;
    LODWORD(v82) = v11 - 1;
    if ( v11 - 1 >= 0 )
    {
      while ( 1 )
      {
        v14 = 0;
        v15 = sub_10219B80(v63, v13);
        if ( v12 <= 0 )
        {
LABEL_9:
          sub_10219DF0(v15);
        }
        else
        {
          while ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(LODWORD(v83) + 1524) + 16))(
                    *(_DWORD *)(LODWORD(v83) + 1524),
                    v14) != v15 )
          {
            if ( ++v14 >= v12 )
              goto LABEL_9;
          }
        }
        --LODWORD(v82);
        if ( v82 < 0.0 )
          break;
        v13 = LODWORD(v82);
      }
      v7 = v83;
    }
    v6 = (int)a4;
  }
  v16 = (double (__thiscall ***)(_DWORD))a5;
  v17 = *(float *)(LODWORD(v7) + 892) - sub_10418510(a5);
  v18 = *(_BYTE *)(LODWORD(v7) + 1500) == 0;
  v83 = v17;
  v82 = *(float *)(dword_106B31C8 + 12) - v17;
  if ( !v18 )
  {
    v55 = v17;
    v54 = LODWORD(a6);
    v53 = (char *)sub_104183D0(v16);
    v19 = (int *)sub_10226440();
    sub_1022BE90(v19, v6, v53, v54, v55);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v63);
    return;
  }
  v20 = (**v16)(v16);
  v83 = v20 - v83;
  v21 = (int *)__RTDynamicCast(
                 v6,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CBaseFlex `RTTI Type Descriptor',
                 (int)&CAI_BaseActor `RTTI Type Descriptor',
                 0);
  if ( v21 )
  {
    v22 = *v21;
    v56 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)LODWORD(v7) + 884))(LODWORD(v7));
    (*(void (__thiscall **)(int *, float, _DWORD))(v22 + 2240))(v21, COERCE_FLOAT(LODWORD(v83)), LODWORD(v56));
LABEL_21:
    v16 = (double (__thiscall ***)(_DWORD))a5;
    goto LABEL_22;
  }
  v23 = (int)a4;
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*a4 + 284))(a4) )
  {
    v24 = sub_100D7680(v23);
    v25 = &flt_1060B428;
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v24 + 1528))(v24, 0) )
      v25 = &flt_1060B430;
    v26 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)LODWORD(v7) + 884))(LODWORD(v7));
    v27 = *(int (__thiscall **)(int))(*(_DWORD *)v23 + 8);
    *v25 = v26 + v83 + *(float *)(dword_106B31C8 + 12);
    v25[1] = *(float *)v27(v23);
    goto LABEL_21;
  }
LABEL_22:
  v28 = 0.0;
  v71 = 0.0;
  v66 = 1.0;
  v65 = 0;
  v68 = 0;
  v69 = 100;
  v70 = 0;
  v72 = 0;
  v73 = 1;
  v74 = 0;
  v75 = -1;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = -1;
  v64 = 2;
  v67 = a6;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
    v28 = v82;
  v71 = v28;
  if ( (unsigned __int8)sub_1041C7E0(LODWORD(a3)) )
    v68 |= 0x100u;
  LOBYTE(v73) = 0;
  v83 = COERCE_FLOAT(sub_1042A300(v63));
  a6 = 0.0;
  if ( SLODWORD(v83) > 0 )
  {
    do
    {
      v29 = sub_10219B80(v63, SLODWORD(a6));
      v30 = (int *)sub_1025FB50(v29);
      if ( v30 )
      {
        sub_10219BB0(v61);
        v61[0] = &CSingleUserRecipientFilter::`vftable';
        sub_10219D00((int)v61, v30);
        if ( sub_102246A0(a5, (int)v30, Source, 0x200u) )
        {
          v31 = 161 * dword_106C4144;
          v65 = Source;
          flt_106C34B0[v31] = *(float *)(dword_106B31C8 + 12);
          sub_104299C0(&byte_106C34B4[v31 * 4], Source, 0x200u);
          if ( a3 == 0.0 )
            v32 = (char *)::String;
          else
            v32 = (char *)sub_1041CAF0(LODWORD(a3), v57);
          sub_104299C0(&byte_106C36B4[644 * dword_106C4144], v32, 0x80u);
          if ( ++dword_106C4144 >= 5 )
            dword_106C4144 = 0;
          if ( 1.0 != *(float *)(LODWORD(v7) + 904) )
          {
            if ( v69 )
              v33 = (double)v69 * *(float *)(LODWORD(v7) + 904);
            else
              v33 = *(float *)(LODWORD(v7) + 904) * 100.0;
            v68 |= 2u;
            v69 = (int)v33;
          }
          v34 = a4;
          v35 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a4[6]);
          sub_1023BE40(v61, v35, &v64);
          sub_100F1370(v34, a3, (Concurrency::details::SchedulerProxy *)a5, 0);
        }
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v61);
      }
      ++LODWORD(a6);
    }
    while ( SLODWORD(a6) < SLODWORD(v83) );
    v16 = (double (__thiscall ***)(_DWORD))a5;
  }
  if ( !sub_10418880(v16) && (unsigned __int8)sub_10418CD0(Destination, 0x40u) )
  {
    sub_104299C0(String, Destination, 0x100u);
    _strlwr(String);
    sub_100D76A0((int)v63);
    if ( !(unsigned __int8)sub_10418910(v16) && sub_1042A300(v63) > 0 )
    {
      v36 = sub_1042A300(v63) - 1;
      if ( v36 >= 0 )
      {
        do
        {
          v37 = sub_10219B80(v63, v36);
          v38 = sub_1025FB50(v37);
          v39 = v38;
          if ( v38 )
          {
            if ( (*(_DWORD *)(v38 + 252) & 0x800) != 0 )
              sub_100DAE60(v38);
            v40 = *(float *)(v39 + 584);
            v41 = *(float *)(v39 + 588);
            v62[0] = *(float *)(v39 + 580);
            v62[1] = v40;
            v62[2] = v41;
            if ( sub_10224620((int)String, v62, (int)&v76) )
            {
              v42 = *(_DWORD *)(v39 + 4264);
              if ( v42 == -1 )
                goto LABEL_61;
              v43 = &off_1061BE18[4 * (*(_DWORD *)(v39 + 4264) & 0xFFF) + 1];
              v44 = v42 >> 12;
              if ( off_1061BE18[4 * (*(_DWORD *)(v39 + 4264) & 0xFFF) + 2] != v44 || !*v43 )
                goto LABEL_61;
              if ( off_1061BE18[4 * (*(_DWORD *)(v39 + 4264) & 0xFFF) + 2] == v44 )
                v45 = *v43;
              else
                v45 = 0;
              if ( (*(_DWORD *)(v45 + 252) & 0x800) != 0 )
                sub_100DAE60(v45);
              if ( sub_10224620((int)String, (float *)(v45 + 580), (int)&v76) )
LABEL_61:
                sub_10219DB0(v39);
            }
          }
          --v36;
        }
        while ( v36 >= 0 );
        v16 = (double (__thiscall ***)(_DWORD))a5;
      }
    }
    if ( sub_1042A300(v63) > 0 )
    {
      *(float *)&a5 = sub_10418900(v16);
      a6 = ((double (__thiscall *)(double (__thiscall ***)(_DWORD), int))**v16)(v16, v57);
      v46 = sub_10418510(v16);
      v47 = *(float *)&a5 - v46;
      if ( a6 > v47 )
        v47 = a6;
      a6 = v47;
      v48 = *(int (__thiscall **)(int *, int **))(*a4 + 28);
      HIBYTE(a5) = 1;
      v49 = *(const char **)v48(a4, &a4);
      if ( !v49 )
        v49 = ::String;
      v50 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B3204 + 136))(dword_106B3204, v49);
      if ( v50 == 1 )
      {
        HIBYTE(a5) = 5;
      }
      else if ( v50 == 2 )
      {
        HIBYTE(a5) = 9;
      }
      sub_10154B40((int)v63, "CloseCaption");
      sub_10154D00((int)String);
      v51 = (int)(a6 * 10.0);
      if ( v51 > 255 )
        v51 = 255;
      sub_10154C10(v51);
      sub_10154BB0(HIBYTE(a5));
      sub_10154B90();
    }
  }
  v52 = v76;
  v79 = 0;
  if ( v78 >= 0 )
  {
    if ( v76 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v76);
      v52 = 0;
      v76 = 0;
    }
    v77 = 0;
  }
  v80 = v52;
  if ( v78 >= 0 )
  {
    if ( v52 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v52);
      v76 = 0;
    }
    v77 = 0;
  }
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v63);
}
