void __thiscall sub_103B3F80(int this, int a2)
{
  int v2; // ebx
  _DWORD *v4; // eax
  bool v5; // zf
  int *v6; // eax
  int *v7; // ebx
  unsigned int v8; // eax
  int v9; // eax
  int *v10; // ecx
  void (__stdcall *v11)(_BYTE *); // eax
  int v12; // eax
  int *v13; // esi
  _DWORD *v14; // eax
  char v15; // al
  double v16; // st4
  double v17; // st6
  double v18; // st4
  double v19; // st5
  double v20; // st6
  float *v21; // ebx
  float *v22; // eax
  double v23; // st6
  double v24; // st5
  unsigned __int16 *v25; // eax
  int v26; // esi
  int v27; // [esp+10h] [ebp-10Ch]
  _BYTE v28[48]; // [esp+20h] [ebp-FCh] BYREF
  int v29[20]; // [esp+50h] [ebp-CCh] BYREF
  int v30[8]; // [esp+A0h] [ebp-7Ch] BYREF
  int v31[3]; // [esp+C0h] [ebp-5Ch] BYREF
  float v32[3]; // [esp+CCh] [ebp-50h] BYREF
  float v33[3]; // [esp+D8h] [ebp-44h] BYREF
  int *v34; // [esp+E4h] [ebp-38h]
  int v35; // [esp+E8h] [ebp-34h] BYREF
  int v36; // [esp+ECh] [ebp-30h]
  int v37; // [esp+F0h] [ebp-2Ch]
  float v38; // [esp+F4h] [ebp-28h] BYREF
  float v39; // [esp+F8h] [ebp-24h]
  float v40; // [esp+FCh] [ebp-20h]
  float v41; // [esp+100h] [ebp-1Ch] BYREF
  float v42; // [esp+104h] [ebp-18h]
  float v43; // [esp+108h] [ebp-14h]
  float v44; // [esp+10Ch] [ebp-10h] BYREF
  float v45; // [esp+110h] [ebp-Ch]
  float v46; // [esp+114h] [ebp-8h]
  char *v47; // [esp+118h] [ebp-4h]
  int v48; // [esp+124h] [ebp+8h]

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( !v4 || (v5 = *v4 == 0, v47 = *(char **)(this + 1100), v5) )
    v47 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  v6 = (int *)sub_101BCB30((int *)(this + 3820), a2);
  v7 = v6;
  v34 = v6;
  if ( !v6 )
    return;
  v27 = *v6;
  v45 = COERCE_FLOAT("left skewer");
  v46 = COERCE_FLOAT("right skewer");
  sub_103AF550(*((char **)&v45 + (a2 != 4)), v47, (int)v32, v27);
  v8 = v7[1];
  if ( v8 == -1 || off_1061BE18[4 * (v7[1] & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (v7[1] & 0xFFF) + 1];
  v10 = *(int **)(v9 + 424);
  v11 = *(void (__stdcall **)(_BYTE *))(*v10 + 192);
  v47 = (char *)v10;
  v11(v28);
  sub_10421B40(v32, v28, &v35);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v13 = (int *)v12;
  if ( !v12 )
  {
    v48 = 0;
LABEL_17:
    v15 = 0;
    goto LABEL_18;
  }
  v14 = (_DWORD *)sub_100D7680(v12);
  v48 = (int)v14;
  if ( !v14 || !sub_10001430(v14) )
    goto LABEL_17;
  v15 = 1;
LABEL_18:
  if ( (*(_BYTE *)(this + 250) & 1) != 0 )
  {
    if ( !v15 && (!v13 || !(*(unsigned __int8 (__thiscall **)(int *))(*v13 + 320))(v13)) )
      return;
  }
  else if ( !v15 )
  {
    return;
  }
  if ( (v13[63] & 0x800) != 0 )
    sub_100DAE60((int)v13);
  v16 = *((float *)v13 + 146) - *(float *)&v36;
  v17 = v16 * v16;
  v18 = *((float *)v13 + 145) - *(float *)&v35;
  v19 = v17;
  v20 = *((float *)v13 + 147) - *(float *)&v37;
  if ( v18 * v18 + v19 + v20 * v20 <= 67600.0 )
  {
    v21 = (float *)(*(int (__thiscall **)(int *, float *))(*v13 + 504))(v13, &v44);
    v22 = (float *)(*(int (__thiscall **)(int *))(*v13 + 576))(v13);
    v23 = v21[1] + v22[1];
    v24 = v21[2] + v22[2];
    v38 = (*v21 + *v22) * 0.5;
    v39 = v23 * 0.5;
    v40 = 0.5 * v24;
    if ( (v13[63] & 0x800) != 0 )
      sub_100DAE60((int)v13);
    v35 = v13[145];
    v36 = v13[146];
    v37 = v13[147];
    sub_100BF1B0((void *)this, "left foot", (int)v31, 0, 0, 0);
    sub_10165630(v30, this, (int)"NPC_Strider.Skewer");
    sub_1023C580(this, (int)v13, v30, 0, (int)"NPC_Strider.Skewer", (int)&v35, 0.0, 0);
    sub_10248110((int)v29, this, this, 500.0, 1, 0);
    (*(void (__thiscall **)(int *, float *, _DWORD, _DWORD))(*v13 + 528))(v13, v33, 0, 0);
    v29[4] = v35;
    v29[5] = v36;
    v29[6] = v37;
    *(float *)&v29[1] = v33[0] * -15000.0;
    *(float *)&v29[2] = v33[1] * -15000.0;
    *(float *)&v29[3] = -15000.0 * v33[2];
    sub_100D9E70(v13, (int)v13, v29);
    if ( v48 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v48 + 264))(v48) )
    {
      v41 = *(float *)v31 - v38;
      v42 = *(float *)&v31[1] - v39;
      v43 = 0.0;
      off_10689714();
      v44 = v41 * 4.0 + v38;
      v45 = v42 * 4.0 + v39;
      v46 = 4.0 * v43 + v40;
      sub_10124BC0(&v44, &v41, 0, 8, COERCE_FLOAT(255));
      v44 = v41 * 4.0 + v38;
      v45 = v42 * 4.0 + v39;
      v46 = 4.0 * v43 + v40;
      sub_10124BC0(&v44, &v41, 0, 11, COERCE_FLOAT(1));
      v25 = (unsigned __int16 *)sub_101CFAB0(v48, &flt_106F1CA8, -1, 1, (int *)v47, this, *v34, (int)&v38, -1, v32);
      v26 = (int)v25;
      if ( v25 )
      {
        sub_10023430(v25, 4);
        sub_10019680((_DWORD *)(this + 3796), v26);
        *(float *)(this + 3660) = *(float *)(dword_106B31C8 + 12) + 10.0;
        sub_1025FAC0(v48);
      }
    }
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v30);
  }
}
