void __usercall sub_102522B0(float *a1@<ecx>, int a2@<edi>)
{
  long double v3; // st7
  long double v4; // st5
  long double v5; // st5
  float v6; // edx
  int (__thiscall *v7)(float *); // edx
  int v8; // edi
  int (__thiscall *v9)(float *, float *, _DWORD); // edx
  float *v10; // eax
  int v11; // edi
  int (__thiscall *v12)(float *, float *, _DWORD); // edx
  float *v13; // eax
  _DWORD *v14; // eax
  bool v15; // zf
  const char *v16; // eax
  int v17; // eax
  int v18; // eax
  const char *v19; // eax
  double v20; // st7
  int v21; // eax
  int v22; // eax
  double v23; // st7
  const char *v24; // eax
  double v25; // st7
  int v26; // eax
  _DWORD *v27; // ecx
  const char *v28; // eax
  int v29; // [esp+24h] [ebp-B0h]
  _DWORD v31[8]; // [esp+30h] [ebp-A4h] BYREF
  _DWORD v32[8]; // [esp+50h] [ebp-84h] BYREF
  float v33[3]; // [esp+70h] [ebp-64h] BYREF
  int v34; // [esp+7Ch] [ebp-58h] BYREF
  const char *v35; // [esp+80h] [ebp-54h]
  float v36; // [esp+84h] [ebp-50h]
  int v37; // [esp+88h] [ebp-4Ch]
  int v38; // [esp+8Ch] [ebp-48h]
  int v39; // [esp+90h] [ebp-44h]
  _DWORD *v40; // [esp+94h] [ebp-40h]
  int v41[6]; // [esp+A8h] [ebp-2Ch] BYREF
  _DWORD v42[3]; // [esp+C0h] [ebp-14h] BYREF
  float v43; // [esp+CCh] [ebp-8h]
  float v44; // [esp+D0h] [ebp-4h]

  if ( *((_DWORD *)a1 + 219) || *((_DWORD *)a1 + 221) || *((_DWORD *)a1 + 220) )
  {
    v3 = 1.0;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC)
      && *((_BYTE *)a1 + 920) )
    {
      if ( *(float *)(dword_106B31C8 + 12) < (double)a1[249] )
        return;
      a1[249] = *(float *)(dword_106B31C8 + 12) + 1.0;
    }
    v4 = fabs(a1[27]);
    if ( ((_DWORD)a1[62] & 0x100) != 0 )
    {
      v5 = v4 / a1[217];
      if ( v5 > 1.0 )
        goto LABEL_13;
    }
    else
    {
      v5 = v4 * 0.001;
      if ( v5 > 1.0 )
        goto LABEL_13;
    }
    v3 = v5;
    if ( v5 < 0.0 )
      v3 = 0.0;
LABEL_13:
    v6 = *a1;
    v44 = v3;
    v7 = *(int (__thiscall **)(float *))(LODWORD(v6) + 580);
    v43 = v3 * ((double)*((int *)a1 + 227) - (double)*((int *)a1 + 226)) + (double)*((int *)a1 + 226);
    v8 = v7(a1);
    sub_10219BB0(v31);
    v31[0] = &CPASFilter::`vftable';
    sub_1021A370(v31, v8);
    v9 = *(int (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)a1 + 580);
    v31[0] = &CPASAttenuationFilter::`vftable';
    v10 = (float *)v9(a1, v33, 0.80000001);
    sub_1021A0E0(v31, v10, COERCE_FLOAT(v33));
    v11 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 580))(a1);
    sub_10219BB0(v32);
    v32[0] = &CPASFilter::`vftable';
    sub_1021A370(v32, v11);
    v12 = *(int (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)a1 + 580);
    v32[0] = &CPASAttenuationFilter::`vftable';
    v13 = (float *)v12(a1, v33, 0.80000001);
    sub_1021A0E0(v32, v13, COERCE_FLOAT(v33));
    sub_10219A50(v32);
    v14 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 576))(a1);
    v15 = *((_BYTE *)a1 + 920) == 0;
    v42[0] = *v14;
    v42[1] = v14[1];
    v42[2] = v14[2];
    if ( v15 )
    {
      if ( *((_DWORD *)a1 + 221) )
      {
        sub_100F8510((float *)&v34);
        v16 = (const char *)*((_DWORD *)a1 + 221);
        v34 = 3;
        v35 = v16;
        if ( !v16 )
          v35 = String;
        v17 = *((_DWORD *)a1 + 6);
        v36 = a1[212];
        v40 = v42;
        v37 = 75;
        v18 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v17);
        sub_1023BE40(v31, v18, (int)&v34);
        sub_102375F0(v41);
      }
      if ( *((_DWORD *)a1 + 219) )
      {
        sub_100F8510((float *)&v34);
        v19 = (const char *)*((_DWORD *)a1 + 219);
        v34 = 6;
        v35 = v19;
        if ( !v19 )
          v35 = String;
        v20 = a1[212];
        v37 = 75;
        v36 = v20;
        v39 = (int)v43;
        v21 = *((_DWORD *)a1 + 6);
        v40 = v42;
        v22 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v21);
        sub_1023BE40(v32, v22, (int)&v34);
        sub_102375F0(v41);
      }
      v23 = a1[224] + (a1[223] - a1[224]) * v44 + *(float *)(dword_106B31C8 + 12);
      *((_BYTE *)a1 + 920) = 1;
    }
    else
    {
      if ( *((_DWORD *)a1 + 219) )
      {
        sub_100F8510((float *)&v34);
        v24 = (const char *)*((_DWORD *)a1 + 219);
        v34 = 6;
        v35 = v24;
        if ( !v24 )
          v35 = String;
        v25 = a1[212];
        v37 = 75;
        v36 = v25;
        v39 = (int)v43;
        v40 = v42;
        v38 = 2;
        v15 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC, a2) == 0;
        v29 = *((_DWORD *)a1 + 6);
        if ( v15 )
        {
          v26 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
          v27 = v32;
        }
        else
        {
          v26 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
          v27 = v31;
        }
        sub_1023BE40(v27, v26, v29);
        sub_102375F0(v41);
      }
      if ( !*((_DWORD *)a1 + 220) || a1[225] >= (double)*(float *)(dword_106B31C8 + 12) )
        goto LABEL_36;
      v28 = (const char *)*((_DWORD *)a1 + 220);
      if ( !v28 )
        v28 = String;
      sub_1023C380(a1, (int)v28, 0.0, 0);
      v23 = sub_1001F0E0(v44, 0.0, 1.0, a1[224], a1[223]) + *(float *)(dword_106B31C8 + 12);
    }
    a1[225] = v23;
LABEL_36:
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v32);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v31);
  }
}
