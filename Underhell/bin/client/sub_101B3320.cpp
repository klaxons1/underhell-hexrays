void __thiscall sub_101B3320(int this)
{
  int v2; // edi
  int v3; // kr18_4
  int v4; // edi
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  double v8; // st7
  _DWORD *v9; // ecx
  int v10; // eax
  double v11; // st7
  int (__thiscall *v12)(_DWORD *); // edx
  int (__thiscall *v13)(_DWORD *); // edx
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  int v18; // edi
  double v19; // st7
  float v20; // eax
  double v21; // st6
  bool v22; // c0
  char v23; // dl
  double v24; // st5
  char v25; // cl
  int *v26; // eax
  double v27; // st7
  int (__thiscall *v28)(_DWORD *); // eax
  char v29; // cl
  int *v30; // eax
  float v31; // [esp+4h] [ebp-58h]
  float v32; // [esp+4h] [ebp-58h]
  int v33[8]; // [esp+1Ch] [ebp-40h] BYREF
  float v34; // [esp+3Ch] [ebp-20h] BYREF
  float v35; // [esp+40h] [ebp-1Ch]
  int v36; // [esp+44h] [ebp-18h]
  float v37; // [esp+48h] [ebp-14h]
  int v38; // [esp+4Ch] [ebp-10h]
  int v39; // [esp+50h] [ebp-Ch] BYREF
  int v40; // [esp+54h] [ebp-8h] BYREF
  _DWORD *v41; // [esp+58h] [ebp-4h]

  v37 = COERCE_FLOAT(sub_100422D0());
  if ( v37 != 0.0 )
  {
    v41 = (_DWORD *)sub_10033760();
    if ( v41 )
    {
      v2 = *(_DWORD *)(*(_DWORD *)(this + 232) + 160) - *(_DWORD *)(*(_DWORD *)(this + 232) + 156);
      v3 = sub_10076740() - v2;
      v4 = *(_DWORD *)(*(_DWORD *)(this + 232) + 168) - *(_DWORD *)(*(_DWORD *)(this + 232) + 164);
      v5 = v3 / 2;
      v6 = (sub_10076720() - v4) / 2;
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED0D8 + 8))(off_103ED0D8) )
      {
        (*(void (__thiscall **)(int *, float *))(*off_103ED0D8 + 12))(off_103ED0D8, &v34);
        v38 = sub_10076740() / 2;
        v40 = (int)((double)v38 * (v34 + 1.0));
        v38 = *(_DWORD *)(*(_DWORD *)(this + 248) + 160) - *(_DWORD *)(*(_DWORD *)(this + 248) + 156);
        v5 = (int)((double)v40 - (double)v38 * 0.5);
        v38 = sub_10076720() / 2;
        v40 = (int)((double)v38 * (v35 + 1.0));
        v38 = *(_DWORD *)(*(_DWORD *)(this + 248) + 168) - *(_DWORD *)(*(_DWORD *)(this + 248) + 164);
        v6 = (int)((double)v40 - (double)v38 * 0.5);
      }
      v7 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v37) + 416))(COERCE_FLOAT(LODWORD(v37)));
      v36 = v7;
      if ( v7 != *(_DWORD *)(this + 212) )
      {
        v8 = *((float *)off_103DC81C + 3);
        *(_DWORD *)(this + 212) = v7;
        *(float *)(this + 228) = v8;
        if ( v7 > 25 )
        {
          *(_BYTE *)(this + 225) = 0;
        }
        else if ( !*(_BYTE *)(this + 225) )
        {
          *(float *)(this + 220) = 255.0;
          *(_BYTE *)(this + 225) = 1;
          sub_1015BB00(v33);
          sub_101213E0((int)v33, -1, (int)"HUDQuickInfo.LowHealth", 0, 0.0, 0);
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v33);
        }
      }
      v9 = v41;
      v10 = v41[510];
      v38 = v10;
      if ( v10 != *(_DWORD *)(this + 208) )
      {
        v11 = *((float *)off_103DC81C + 3);
        *(_DWORD *)(this + 208) = v10;
        *(float *)(this + 228) = v11;
        v12 = *(int (__thiscall **)(_DWORD *))(*v9 + 1128);
        *(float *)&v40 = (float)v38;
        v37 = COERCE_FLOAT(v12(v9));
        v13 = *(int (__thiscall **)(_DWORD *))(*v41 + 1128);
        v37 = *(float *)&v40 / (double)SLODWORD(v37);
        if ( v13(v41) <= 1 || v37 > 0.25 )
        {
          *(_BYTE *)(this + 224) = 0;
        }
        else if ( !*(_BYTE *)(this + 224) )
        {
          *(float *)(this + 216) = 255.0;
          *(_BYTE *)(this + 224) = 1;
          sub_1015BB00(v33);
          sub_101213E0((int)v33, -1, (int)"HUDQuickInfo.LowAmmo", 0, 0.0, 0);
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v33);
        }
      }
      v39 = dword_1042FB88;
      v14 = *(_DWORD **)(this + 232);
      HIBYTE(v39) = -118;
      sub_100B3BE0(v14, v5, v6, &v39);
      v15 = sub_10076740();
      v16 = *(_DWORD *)(*(_DWORD *)(this + 248) + 168) - *(_DWORD *)(*(_DWORD *)(this + 248) + 164);
      v17 = v15 / 2;
      v40 = v15 / 2;
      v18 = (sub_10076720() - v16) / 2;
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED0D8 + 8))(off_103ED0D8) )
      {
        (*(void (__thiscall **)(int *, float *))(*off_103ED0D8 + 12))(off_103ED0D8, &v34);
        v17 = (int)((v34 + 1.0) * (double)v40);
        LODWORD(v37) = sub_10076720() / 2;
        v19 = 1.0;
        v40 = (int)((v35 + 1.0) * (double)SLODWORD(v37));
        LODWORD(v37) = *(_DWORD *)(*(_DWORD *)(this + 248) + 168) - *(_DWORD *)(*(_DWORD *)(this + 248) + 164);
        v18 = (int)((double)v40 - (double)SLODWORD(v37) * 0.5);
      }
      else
      {
        v19 = 1.0;
      }
      if ( *(_DWORD *)(dword_1044EE6C + 48) )
      {
        LODWORD(v20) = (int)(fabs(sin(*((float *)off_103DC81C + 3) * 8.0)) * 128.0);
        v21 = 0.0;
        v22 = *(float *)(this + 220) > 0.0;
        v23 = LOBYTE(v20);
        v35 = v20;
        if ( v22 )
        {
          sub_101B3080(
            v17 + 2 * (*(_DWORD *)(*(_DWORD *)(this + 248) + 156) - *(_DWORD *)(*(_DWORD *)(this + 248) + 160)),
            v18,
            *(_DWORD **)(this + 248),
            (float *)(this + 220));
        }
        else
        {
          v24 = (double)v36 * 0.0099999998;
          if ( v24 <= v19 )
          {
            if ( v24 >= 0.0 )
              v21 = v24;
          }
          else
          {
            v21 = v19;
          }
          v25 = *(_BYTE *)(this + 225);
          v26 = &dword_1042FB8C;
          if ( !v25 )
            v26 = &dword_1042FB88;
          v40 = *v26;
          if ( v25 )
            HIBYTE(v40) = -v23;
          else
            HIBYTE(v40) = -118;
          v31 = v19 - v21;
          sub_100D2880(
            v17 + 2 * (*(_DWORD *)(*(_DWORD *)(this + 248) + 156) - *(_DWORD *)(*(_DWORD *)(this + 248) + 160)),
            v18,
            *(_DWORD **)(this + 248),
            *(void **)(this + 256),
            v31,
            &v40,
            1);
        }
        if ( *(float *)(this + 216) <= 0.0 )
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*v41 + 1128))(v41) > 0 )
          {
            v28 = *(int (__thiscall **)(_DWORD *))(*v41 + 1128);
            v37 = (float)v38;
            v36 = v28(v41);
            v27 = 1.0 - v37 / (double)v36;
            if ( v27 <= 1.0 )
            {
              if ( v27 < 0.0 )
                v27 = 0.0;
            }
            else
            {
              v27 = 1.0;
            }
          }
          else
          {
            v27 = 0.0;
          }
          v29 = *(_BYTE *)(this + 224);
          v30 = &dword_1042FB8C;
          if ( !v29 )
            v30 = &dword_1042FB88;
          v40 = *v30;
          if ( v29 )
            HIBYTE(v40) = -LOBYTE(v35);
          else
            HIBYTE(v40) = -118;
          v32 = v27;
          sub_100D2880(
            v17 + *(_DWORD *)(*(_DWORD *)(this + 244) + 160) - *(_DWORD *)(*(_DWORD *)(this + 244) + 156),
            v18,
            *(_DWORD **)(this + 244),
            *(void **)(this + 252),
            v32,
            &v40,
            1);
        }
        else
        {
          sub_101B3080(
            v17 + *(_DWORD *)(*(_DWORD *)(this + 244) + 160) - *(_DWORD *)(*(_DWORD *)(this + 244) + 156),
            v18,
            *(_DWORD **)(this + 244),
            (float *)(this + 216));
        }
      }
    }
  }
}
