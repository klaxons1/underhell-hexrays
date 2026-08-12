float *__thiscall sub_103D9EE0(float *this, float *a2, int a3)
{
  const char *v5; // eax
  const char *v6; // eax
  float *result; // eax
  float v8; // edx
  float v9; // ecx
  float *v10; // eax
  float *v11; // eax
  double v12; // st4
  double v13; // st6
  double v14; // st4
  double v15; // st5
  double v16; // st6
  double v17; // st7
  double v18; // st6
  int v19; // eax
  _DWORD *v20; // eax
  float *v21; // eax
  double v22; // st7
  double v23; // st7
  double v24; // st7
  double v25; // st6
  float *v26; // eax
  bool v27; // zf
  double v28; // st7
  float *v29; // eax
  float v30; // edx
  float v31; // ecx
  const char *v32; // [esp+Ch] [ebp-5Ch]
  float v33; // [esp+Ch] [ebp-5Ch]
  _DWORD v34[8]; // [esp+18h] [ebp-50h] BYREF
  float v35; // [esp+38h] [ebp-30h] BYREF
  float v36; // [esp+3Ch] [ebp-2Ch]
  float v37; // [esp+40h] [ebp-28h]
  float v38; // [esp+44h] [ebp-24h] BYREF
  float v39; // [esp+48h] [ebp-20h]
  float v40; // [esp+4Ch] [ebp-1Ch]
  float v41; // [esp+50h] [ebp-18h] BYREF
  float v42; // [esp+54h] [ebp-14h]
  float v43; // [esp+58h] [ebp-10h]
  float v44; // [esp+5Ch] [ebp-Ch] BYREF
  float v45; // [esp+60h] [ebp-8h]
  float v46; // [esp+64h] [ebp-4h]
  float v47; // [esp+74h] [ebp+Ch]

  if ( *(_DWORD *)(dword_106ED204 + 48) )
  {
    if ( a3 )
      v5 = sub_100D6390((_DWORD *)a3);
    else
      v5 = "nobody";
    v32 = v5;
    v6 = sub_100D6390(this);
    Msg("Sniper %s is targeting %s\n", v6, v32);
  }
  if ( !a3 )
  {
    result = a2;
    v8 = flt_106F1CAC;
    *a2 = flt_106F1CA8;
    v9 = flt_106F1CB0;
    a2[1] = v8;
    a2[2] = v9;
    return result;
  }
  v10 = (float *)sub_103D9CD0((int)this, (int)&v35, (char *)a3);
  v38 = *v10;
  v39 = v10[1];
  v40 = v10[2];
  v11 = sub_103D9500(this, &v35);
  v12 = v39 - v11[1];
  v13 = v12 * v12;
  v14 = v38 - *v11;
  v15 = v13;
  v16 = v40 - v11[2];
  v33 = v14 * v14 + v15 + v16 * v16;
  v17 = off_10689708(v33);
  v18 = *(float *)(dword_106ED1BC + 44);
  if ( ((_DWORD)this[62] & 0x100000) != 0 )
    v18 = v18 * 2.5;
  v44 = flt_106F1CA8;
  v19 = *(_DWORD *)a3;
  v45 = flt_106F1CAC;
  v46 = flt_106F1CB0;
  v47 = v17 / v18;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(v19 + 320))(a3)
    && (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 220))(a3) != 21 )
  {
    if ( sub_100D7680(a3) && (v20 = (_DWORD *)sub_100D7680(a3), sub_100223E0(v20) == 2) )
    {
      v21 = (float *)sub_10019660((_DWORD *)a3);
      v44 = *v21;
      v45 = v21[1];
      v22 = v21[2];
    }
    else
    {
      v23 = sub_100BE070(a3, *(_DWORD *)(a3 + 908));
      v35 = 0.0;
      v37 = 0.0;
      v36 = v23 + *(float *)(a3 + 732);
      sub_10422220(&v35, &v44);
      v24 = *(float *)(a3 + 800);
      v44 = v44 * v24;
      v25 = v45 * v24;
      v22 = v24 * v46;
      v45 = v25;
    }
    goto LABEL_18;
  }
  v26 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a3 + 536))(a3, &v35);
  v27 = *(_BYTE *)(a3 + 256) >= 0;
  v44 = *v26;
  v45 = v26[1];
  v22 = v26[2];
  v46 = v26[2];
  if ( !v27 )
  {
    v22 = v22 * 0.25;
LABEL_18:
    v46 = v22;
  }
  if ( *((int *)this + 913) <= 0 || *(char **)(a3 + 92) == "npc_bullseye" )
    goto LABEL_24;
  if ( sub_100D6240((_DWORD *)a3, "npc_bullseye") )
  {
    v22 = v46;
LABEL_24:
    v41 = v44 * v47 + v38;
    v42 = v45 * v47 + v39;
    v43 = v47 * v22 + v40;
    if ( 1.0 == *(float *)(dword_106ED204 + 44) )
    {
      v29 = sub_103D9500(this, &v38);
      v35 = *v29;
      v36 = v29[1];
      v37 = v29[2];
      sub_10219BB0(v34);
      v34[0] = &CPVSFilter::`vftable';
      sub_1021A300(v34, (int)(this + 179));
      ((void (__stdcall *)(_DWORD *, _DWORD, float *, float *))(*off_1065C5EC)[29])(v34, 0.0, &v35, &v41);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v34);
    }
    goto LABEL_26;
  }
  v28 = v38;
  --*((_DWORD *)this + 913);
  v41 = v28;
  v42 = v39;
  v43 = v40 + 16.0;
LABEL_26:
  result = a2;
  v30 = v42;
  *a2 = v41;
  v31 = v43;
  a2[1] = v30;
  a2[2] = v31;
  return result;
}
