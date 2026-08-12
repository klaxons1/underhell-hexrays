void __usercall sub_103DA1D0(int a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int *v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // edi
  float *v15; // eax
  int v16; // edi
  double v17; // st7
  int v18; // eax
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // st4
  double v23; // rt1
  double v24; // st2
  double v25; // st4
  double v26; // rtt
  unsigned int v27; // eax
  int *v28; // ecx
  int v29; // eax
  int v30; // edx
  void (__thiscall *v31)(int *, _DWORD *); // edx
  double v32; // st7
  int v33; // ecx
  int i; // edi
  double v35; // st4
  double v36; // rt0
  unsigned int v37; // eax
  int v38; // ecx
  double v39; // st4
  double v40; // rt1
  int v41; // eax
  int v42; // ecx
  int v43; // [esp+28h] [ebp-108h]
  float v44; // [esp+28h] [ebp-108h]
  float v45; // [esp+2Ch] [ebp-104h]
  float v46; // [esp+2Ch] [ebp-104h]
  float v47; // [esp+2Ch] [ebp-104h]
  int v49[8]; // [esp+3Ch] [ebp-F4h] BYREF
  _BYTE v50[12]; // [esp+5Ch] [ebp-D4h] BYREF
  int v51[16]; // [esp+68h] [ebp-C8h] BYREF
  int v52; // [esp+A8h] [ebp-88h]
  _DWORD v53[20]; // [esp+B0h] [ebp-80h] BYREF
  __int16 v54; // [esp+100h] [ebp-30h]
  char v55; // [esp+103h] [ebp-2Dh]
  __int16 v56; // [esp+104h] [ebp-2Ch]
  float v57[3]; // [esp+108h] [ebp-28h] BYREF
  int v58[3]; // [esp+114h] [ebp-1Ch] BYREF
  float v59; // [esp+120h] [ebp-10h]
  int v60; // [esp+124h] [ebp-Ch] BYREF
  int v61; // [esp+128h] [ebp-8h]
  int v62; // [esp+12Ch] [ebp-4h]
  int savedregs; // [esp+130h] [ebp+0h] BYREF

  v45 = *(float *)(dword_106B31C8 + 12) + 0.05;
  sub_100EC4A0((int *)a1, v45, 0);
  v3 = *(_DWORD *)(a1 + 412);
  if ( v3 != -1
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] == v3 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1] )
  {
    if ( *(float *)(a1 + 840) <= (double)*(float *)(dword_106B31C8 + 12) )
    {
      sub_100D78A0(v49, a1, 0.0);
      v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
      sub_1023C580(a2, a1, v49, v4, (int)"NPC_Sniper.SonicBoom", 0, 0.0, 0);
      v5 = *(_DWORD *)(a1 + 412);
      if ( v5 != -1 && off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] == v5 >> 12 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1] )
        {
          v6 = sub_10019B00((_DWORD *)a1);
          v7 = sub_100D7680(v6);
          v8 = v7;
          if ( v7 )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 368))(v7) )
            {
              v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 368))(v8);
              v10 = (int *)sub_100D7680(v9);
              v59 = *(float *)&v10;
              if ( v10 )
              {
                if ( sub_10019B00((_DWORD *)a1) )
                {
                  v11 = sub_10019B00((_DWORD *)a1);
                  v12 = *v10;
                  v13 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 576))(v11, 16449, 0);
                  if ( (*(unsigned __int8 (__thiscall **)(float, int))(v12 + 544))(COERCE_FLOAT(LODWORD(v59)), v13) )
                  {
                    v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 368))(v8, a2);
                    v43 = sub_10019B00((_DWORD *)a1);
                    v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 516))(v14);
                    sub_1023D4B0(1048584, v15, (int)v58, COERCE_FLOAT(16), COERCE_INT(1.0), v43, 0);
                  }
                }
              }
            }
          }
        }
      }
      *(float *)(a1 + 840) = 1000000000.0;
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v49);
    }
    v16 = dword_106B31C8;
    v17 = sub_100E92C0((_DWORD *)a1, 0);
    v18 = *(_DWORD *)(a1 + 252) >> 11;
    v59 = *(float *)(v16 + 12) - v17;
    if ( (v18 & 1) != 0 )
      sub_100DAE60(a1);
    v19 = *(float *)(a1 + 580);
    v60 = *(int *)(a1 + 580);
    v20 = *(float *)(a1 + 584);
    v61 = *(int *)(a1 + 584);
    v21 = *(float *)(a1 + 588);
    v62 = *(int *)(a1 + 588);
    v22 = *(float *)(a1 + 852) * v59;
    v23 = v22 * *(float *)(a1 + 800) + v19;
    v24 = v22 * *(float *)(a1 + 808);
    v25 = *(float *)(a1 + 804) * v22 + v20;
    v26 = v24 + v21;
    v57[0] = v23;
    v57[1] = v25;
    v57[2] = v26;
    v47 = (v21 - v26) * (v21 - v26) + (v20 - v25) * (v20 - v25) + (v19 - v23) * (v19 - v23);
    v59 = off_10689708(v47);
    sub_1002A5F0((int)&savedregs, a1, (float *)&v60, v57, 1174421507, a1, 0, (int)v50);
    if ( 1.0 == *(float *)&v51[8] )
    {
      sub_100E0D20(a1, v57);
    }
    else
    {
      v27 = *(_DWORD *)(a1 + 412);
      if ( v27 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] != v27 >> 12 )
        v28 = 0;
      else
        v28 = (int *)off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1];
      *(float *)&v53[17] = 1.0;
      v29 = *(_DWORD *)(a1 + 844);
      v30 = *v28;
      v53[1] = v60;
      v31 = *(void (__thiscall **)(int *, _DWORD *))(v30 + 432);
      v53[11] = v29;
      v53[2] = v61;
      v53[3] = v62;
      *(float *)&v53[4] = *(float *)(a1 + 800);
      v53[19] = 0;
      *(float *)&v53[5] = *(float *)(a1 + 804);
      v56 = 0;
      v32 = *(float *)(a1 + 808);
      v55 = 0;
      *(float *)&v53[6] = v32;
      v53[0] = 1;
      memset(&v53[12], 0, 20);
      *(float *)&v53[7] = flt_106F1CA8;
      v53[18] = 0;
      *(float *)&v53[8] = flt_106F1CAC;
      v54 = 1;
      *(float *)&v53[9] = flt_106F1CB0;
      *(float *)&v53[10] = v59;
      v31(v28, v53);
      v33 = v52;
      ++*(_DWORD *)(a1 + 860);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v33 + 284))(v33) || *(_DWORD *)(a1 + 860) == 3 )
      {
        if ( v52 )
        {
          v42 = *(_DWORD *)(v52 + 424);
          if ( v42 )
          {
            if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v42 + 76))(v42) & 4) != 0 )
              sub_101FB2A0(v52);
          }
        }
      }
      else
      {
        v60 = v51[0];
        v61 = v51[1];
        v62 = v51[2];
        for ( i = 0; i < 6; ++i )
        {
          v35 = *(float *)(a1 + 808);
          v36 = *(float *)(a1 + 804) * 2.0;
          *(float *)&v60 = *(float *)(a1 + 800) * 2.0 + *(float *)&v60;
          *(float *)&v61 = v36 + *(float *)&v61;
          *(float *)&v62 = 2.0 * v35 + *(float *)&v62;
          if ( (**(int (__thiscall ***)(int, int *, _DWORD))dword_106B31F4)(dword_106B31F4, &v60, 0) != 1 )
          {
            sub_100E0D20(a1, (float *)&v60);
            v39 = *(float *)(a1 + 808);
            v40 = *(float *)(a1 + 804) * 8192.0;
            *(float *)v58 = *(float *)(a1 + 800) * 8192.0 + *(float *)&v60;
            *(float *)&v58[1] = v40 + *(float *)&v61;
            *(float *)&v58[2] = 8192.0 * v39 + *(float *)&v62;
            sub_1002A5F0((int)&savedregs, a1, (float *)&v60, (float *)v58, 1174421507, a1, 0, (int)v50);
            sub_102651C0((float *)&v60, (float *)v51, 0, -1, *(float *)(a1 + 852), 1, (int)"StriderTracer", 0);
            return;
          }
        }
        if ( *(_BYTE *)(a1 + 856) )
        {
          v37 = *(_DWORD *)(a1 + 412);
          if ( v37 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] != v37 >> 12 )
            v38 = 0;
          else
            v38 = off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1];
          v41 = __RTDynamicCast(
                  v38,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                  (int)&CProtoSniper `RTTI Type Descriptor',
                  0);
          if ( v41 )
            *(float *)(v41 + 3820) = *(float *)(dword_106B31C8 + 12);
        }
      }
      sub_100EC3F0((_DWORD *)a1, (int)sub_10246D70, 0.0, 0);
      v44 = *(float *)(dword_106B31C8 + 12) + 1.0;
      sub_100EC4A0((int *)a1, v44, 0);
    }
  }
  else
  {
    sub_100EC3F0((_DWORD *)a1, (int)sub_10246D70, 0.0, 0);
    v46 = *(float *)(dword_106B31C8 + 12) + 1.0;
    sub_100EC4A0((int *)a1, v46, 0);
  }
}
