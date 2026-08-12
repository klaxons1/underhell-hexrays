int __thiscall sub_1020BA60(unsigned int this, int (__thiscall ***a2)(_DWORD), int a3)
{
  const char *v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi
  char v9; // al
  int v10; // eax
  int v11; // edi
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  int v15; // eax
  int v16; // ebx
  unsigned int v17; // eax
  int *v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int *v22; // ecx
  char v23; // al
  double v24; // st7
  float *v25; // eax
  float *v26; // eax
  int v27; // eax
  int v28; // edi
  int v29; // edi
  int v30; // edi
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // edi
  _DWORD *v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int i; // edi
  int v43; // eax
  int v45; // [esp+44h] [ebp-8B4h]
  int v46; // [esp+4Ch] [ebp-8ACh]
  float v47; // [esp+50h] [ebp-8A8h]
  _DWORD *v48; // [esp+54h] [ebp-8A4h]
  _DWORD *v49; // [esp+54h] [ebp-8A4h]
  char v50; // [esp+5Ch] [ebp-89Ch]
  char v51; // [esp+5Ch] [ebp-89Ch]
  char v52; // [esp+5Ch] [ebp-89Ch]
  int v53; // [esp+60h] [ebp-898h]
  __int16 v54; // [esp+60h] [ebp-898h]
  int v55; // [esp+60h] [ebp-898h]
  int v56; // [esp+60h] [ebp-898h]
  _DWORD v57[514]; // [esp+70h] [ebp-888h] BYREF
  _DWORD v58[8]; // [esp+878h] [ebp-80h] BYREF
  _DWORD v59[6]; // [esp+898h] [ebp-60h] BYREF
  int v60; // [esp+8B0h] [ebp-48h]
  float v61[3]; // [esp+8B4h] [ebp-44h] BYREF
  float v62[3]; // [esp+8C0h] [ebp-38h] BYREF
  float v63[3]; // [esp+8CCh] [ebp-2Ch] BYREF
  int v64[3]; // [esp+8D8h] [ebp-20h] BYREF
  int v65[3]; // [esp+8E4h] [ebp-14h] BYREF
  int v66; // [esp+8F0h] [ebp-8h] BYREF
  char v67; // [esp+8F7h] [ebp-1h]

  v4 = *(const char **)(*(int (__thiscall **)(unsigned int, int *))(*(_DWORD *)this + 28))(this, &v66);
  if ( !v4 )
    v4 = String;
  if ( sub_10429530(v4, "crate") )
  {
    if ( a2 && (unsigned __int8)(*a2)[80](a2)
      || (v5 = *(_DWORD *)(this + 1288), v5 != -1)
      && off_1061BE18[4 * (*(_DWORD *)(this + 1288) & 0xFFF) + 2] == v5 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 1288) & 0xFFF) + 1]
      && (v6 = sub_1026A890(this + 1288), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6))
      || a2
      && __RTDynamicCast(
           (int)a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CPropVehicleDriveable `RTTI Type Descriptor',
           0)
      && (v7 = (*a2[371])(a2 + 371)) != 0
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 320))(v7) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 104))(off_10627F88);
    }
  }
  v8 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
         dword_106B31F8,
         "break_prop",
         0);
  if ( v8 )
  {
    if ( a2 && (unsigned __int8)(*a2)[80](a2) )
    {
      v9 = (*a2)[80](a2);
      v53 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 60))(
              dword_106B31D0,
              *(v9 != 0 ? a2 + 6 : (int (__thiscall ***)(_DWORD))24));
    }
    else
    {
      v53 = 0;
    }
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v8 + 40))(v8, "userid", v53);
    v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v8 + 40))(v8, "entindex", v10);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v8, 0);
  }
  if ( *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 0;
  }
  sub_1010DD80((_DWORD *)(this + 1128), __SPAIR64__(this, (unsigned int)a2), 0.0);
  v11 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 844))(this);
  v54 = *(_WORD *)(this + 356) | 4;
  v66 = v11;
  sub_101129A0((unsigned __int16 *)(this + 320), v54);
  if ( v11 )
  {
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v11 + 204))(v11, v63, v62);
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v11 + 188))(v11, v64, v65);
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v12 = *(_DWORD *)(this + 252);
    v63[0] = *(float *)(this + 476);
    v63[1] = *(float *)(this + 480);
    v63[2] = *(float *)(this + 484);
    v62[0] = *(float *)(this + 496);
    v62[1] = *(float *)(this + 488);
    v62[2] = *(float *)(this + 492);
    if ( (v12 & 0x800) != 0 )
      sub_100DAE60(this);
    v13 = *(_DWORD *)(this + 252);
    v64[0] = *(int *)(this + 580);
    v64[1] = *(int *)(this + 584);
    v64[2] = *(int *)(this + 588);
    if ( (v13 & 0x800) != 0 )
      sub_100DAE60(this);
    v65[0] = *(int *)(this + 704);
    v65[1] = *(int *)(this + 708);
    v65[2] = *(int *)(this + 712);
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_101BA7A0(this, *(_DWORD *)(this + 424), *(_DWORD *)(this + 580), *(_DWORD *)(this + 584), *(_DWORD *)(this + 588));
  v14 = *(_DWORD *)(a3 + 44);
  v67 = 0;
  if ( v14 == -1 || off_1061BE18[4 * (v14 & 0xFFF) + 2] != v14 >> 12 )
    v15 = 0;
  else
    v15 = off_1061BE18[4 * (v14 & 0xFFF) + 1];
  v16 = v15;
  v17 = *(_DWORD *)(this + 1428);
  if ( v17 != -1 )
  {
    v18 = &off_1061BE18[4 * (*(_DWORD *)(this + 1428) & 0xFFF) + 1];
    v19 = v17 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1428) & 0xFFF) + 2] == v19 )
    {
      if ( *v18 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1428) & 0xFFF) + 2] == v19 )
        {
          v20 = *v18;
LABEL_50:
          v16 = v20;
          goto LABEL_51;
        }
        goto LABEL_49;
      }
    }
  }
  v21 = *(_DWORD *)(this + 1288);
  if ( v21 != -1 )
  {
    v22 = &off_1061BE18[4 * (*(_DWORD *)(this + 1288) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1288) & 0xFFF) + 2] == v21 >> 12
      && *v22
      && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 1292) <= 2.0 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 1288) & 0xFFF) + 2] == v21 >> 12 )
      {
        v20 = *v22;
        goto LABEL_50;
      }
LABEL_49:
      v20 = 0;
      goto LABEL_50;
    }
  }
LABEL_51:
  if ( *(float *)(this + 1276) > 0.0 || *(float *)(this + 1280) > 0.0 )
  {
    v23 = (*(int (__thiscall **)(unsigned int, int))(*(_DWORD *)(this + 1120) + 92))(this + 1120, 6);
    v47 = 0.0;
    v24 = *(float *)(this + 1280);
    v45 = (int)*(float *)(this + 1276);
    if ( v23 )
    {
      v25 = (float *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 576))(this);
      sub_1013D350(v25, (float *)v65, v16, v45, (int)v24, 9320, v47, this, -1, 0, 0);
      sub_1023C380((int)"PropaneTank.Burst", 0.0, 0);
    }
    else
    {
      v26 = (float *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 576))(this);
      sub_1013D350(v26, (float *)v65, v16, v45, (int)v24, 9256, v47, this, -1, 0, 0);
    }
    v67 = 1;
  }
  (*(void (__thiscall **)(unsigned int, float *, float *, int (__thiscall ***)(_DWORD)))(*(_DWORD *)this + 848))(
    this,
    v63,
    v62,
    a2);
  *(float *)&v59[4] = *(float *)(this + 1200);
  v59[0] = v64;
  v59[3] = v62;
  v27 = *(_DWORD *)(this + 420);
  v59[1] = v65;
  v59[2] = v63;
  v60 = v27;
  if ( !v27 )
    v60 = 4;
  *(float *)&v59[5] = 100.0;
  if ( *(int *)(dword_106B31C8 + 20) > 1 && *(_DWORD *)(dword_106C1C44 + 48) )
  {
    v28 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 576))(this);
    sub_10219BB0(v58);
    v58[0] = &CPASFilter::`vftable';
    sub_1021A370(v28);
    v29 = v66;
    v61[0] = 0.0;
    v61[1] = 0.0;
    v61[2] = 0.0;
    if ( v66 )
      (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v66 + 204))(v66, v61, 0);
    switch ( (*(int (__thiscall **)(unsigned int))(*(_DWORD *)(this + 1120) + 108))(this + 1120) )
    {
      case 0:
      case 2:
        v30 = (int)*off_1065C5EC;
        v55 = *(_DWORD *)(this + 192);
        v48 = sub_1001F410((_DWORD *)this);
        v31 = sub_10019640((_DWORD *)this);
        v32 = (*(int (__thiscall **)(unsigned int, _DWORD, _DWORD *, _DWORD *, float *, int, int))(*(_DWORD *)this + 24))(
                this,
                *(_DWORD *)(this + 848),
                v31,
                v48,
                v61,
                1,
                v55);
        (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, int))(v30 + 156))(
          off_1065C5EC,
          v58,
          -1.0,
          v32);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v58);
        break;
      case 1:
        v33 = *(_DWORD *)(this + 1232);
        if ( v33 != 1 || *(_DWORD *)(dword_106C1BFC + 48) )
        {
          v50 = v33 == 2;
          v34 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 24))(this);
          sub_10216B90(v34, v29, v59, this, -1, v50, 0);
        }
        goto LABEL_71;
      case 3:
        v35 = (int)*off_1065C5EC;
        v56 = *(_DWORD *)(this + 192);
        v49 = sub_1001F410((_DWORD *)this);
        v36 = sub_10019640((_DWORD *)this);
        v37 = (*(int (__thiscall **)(unsigned int, _DWORD, _DWORD *, _DWORD *, float *, int, int))(*(_DWORD *)this + 24))(
                this,
                *(_DWORD *)(this + 848),
                v36,
                v49,
                v61,
                1,
                v56);
        (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, int))(v35 + 156))(
          off_1065C5EC,
          v58,
          -1.0,
          v37);
        v38 = *(_DWORD *)(this + 1232);
        if ( v38 != 1 || *(_DWORD *)(dword_106C1BFC + 48) )
        {
          v51 = v38 == 2;
          v46 = v66;
          v39 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 24))(this);
          sub_10216B90(v39, v46, v59, this, -1, v51, 0);
        }
        goto LABEL_71;
      default:
LABEL_71:
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v58);
        break;
    }
  }
  else
  {
    v40 = *(_DWORD *)(this + 1232);
    if ( v40 != 1 || *(_DWORD *)(dword_106C1BFC + 48) )
    {
      v52 = v40 == 2;
      v41 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 24))(this);
      sub_10216B90(v41, v11, v59, this, -1, v52, 1);
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(unsigned int, int))(*(_DWORD *)(this + 1120) + 92))(this + 1120, 6) )
  {
    if ( !v67 )
      sub_1013D350((float *)v64, (float *)v65, v16, 1, (int)*(float *)(this + 1280), 1064, 0.0, this, -1, 0, 0);
    sub_10261520((int)v64, *(float *)(this + 1280), 0);
    for ( i = sub_1025EEE0(v57); i; i = sub_1025EEE0(v57) )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)i + 288))(i)
        && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)i + 244))(i, a3) )
      {
        v43 = (*(int (__thiscall **)(int))(*(_DWORD *)i + 288))(i);
        (*(void (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v43 + 808))(v43, 30.0, 1, 0.0, 0);
      }
      ++v57[0];
    }
  }
  return sub_1025FAC0(this);
}
