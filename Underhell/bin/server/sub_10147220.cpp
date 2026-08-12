char __thiscall sub_10147220(int this)
{
  int v2; // ecx
  int v4; // eax
  int v5; // ecx
  float *v6; // ebx
  int (__thiscall *v7)(int); // edx
  int v8; // eax
  long double v9; // st7
  float v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // edi
  int v16; // eax
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // ecx
  char v20; // bl
  double v21; // st7
  int v22; // eax
  int i; // edi
  int v24; // ecx
  int j; // edi
  unsigned int v26; // eax
  int v27; // ecx
  double v28; // st7
  double v29; // st7
  int v30; // eax
  double v31; // st7
  float v32; // [esp+8h] [ebp-48h]
  float v33; // [esp+20h] [ebp-30h]
  float v34; // [esp+20h] [ebp-30h]
  float v35; // [esp+20h] [ebp-30h]
  _DWORD v36[8]; // [esp+28h] [ebp-28h] BYREF
  float v37; // [esp+48h] [ebp-8h]
  float *v38; // [esp+4Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 36);
  if ( !v2 )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  v5 = *(_DWORD *)(this + 36);
  v6 = (float *)v4;
  v7 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 12);
  v38 = (float *)v4;
  v8 = v7(v5);
  v9 = *v6 * 0.056818184;
  v10 = *(float *)&v8;
  v11 = *(_DWORD *)(this + 40);
  v37 = v10;
  *(_DWORD *)(this + 44) = v11;
  *(_DWORD *)(this + 40) = (int)fabs(v9);
  *(_DWORD *)(this + 48) = (int)v6[1];
  v12 = *(_DWORD *)(this + 36);
  *(_DWORD *)(this + 60) = (int)*(float *)(LODWORD(v10) + 580);
  (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)v12 + 4))(*(float *)(dword_106B31C8 + 16), this + 12);
  v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 12))(*(_DWORD *)(this + 36));
  v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 8))(*(_DWORD *)(this + 36));
  if ( v13 && v14 && *(float *)(v14 + 12) - *(float *)(v13 + 580) > 0.0 && !*(_BYTE *)(this + 310) )
  {
    *(_BYTE *)(this + 310) = 1;
    *(float *)(this + 300) = *(float *)(dword_106B31C8 + 12) + 2.75;
  }
  else
  {
    v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 12))(*(_DWORD *)(this + 36));
    v16 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 8))(*(_DWORD *)(this + 36));
    if ( (!v15 || !v16 || *(float *)(v16 + 12) - *(float *)(v15 + 580) <= 0.0)
      && *(_BYTE *)(this + 310)
      && *(float *)(this + 300) <= (double)*(float *)(dword_106B31C8 + 12) )
    {
      *(_BYTE *)(this + 310) = 0;
    }
  }
  *(float *)(this + 52) = v6[3];
  *(float *)(this + 56) = v6[4];
  v17 = *(_DWORD *)(this + 4);
  if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != *(_DWORD *)(this + 4) >> 12 )
    v18 = 0;
  else
    v18 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  if ( *(_DWORD *)(v18 + 424) )
  {
    v19 = v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v17 >> 12
        ? 0
        : off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
    if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v19 + 424) + 280))(*(_DWORD *)(v19 + 424)) )
    {
      v20 = *(_BYTE *)(this + 311);
      if ( v20 )
      {
        v21 = 10.0;
      }
      else
      {
        v21 = *v38 * 0.15000001;
        if ( v21 < 10.0 )
        {
          v32 = fabs(*v38);
          v21 = sub_10134630(v32, 0.0, 66.666664, 80.0, 10.0);
        }
      }
      if ( v21 < v38[5] && *(_BYTE *)(this + 308) )
      {
        if ( !v20 )
        {
          *(_BYTE *)(this + 311) = 1;
          v22 = sub_1026A890(this + 4);
          sub_100D78A0(v36, v22, 0.80000001);
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 8) + 272))(*(_DWORD *)(this + 8), 1);
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v36);
        }
        for ( i = 0; i < 4; ++i )
          sub_10145130(this, i, COERCE_FLOAT(1));
      }
      else if ( v20 == 1 )
      {
        v24 = *(_DWORD *)(this + 8);
        *(_BYTE *)(this + 311) = 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 276))(v24, 1);
      }
      if ( *(int *)(this + 40) >= 5 && *(_BYTE *)(LODWORD(v37) + 669) && *(_BYTE *)(this + 308) )
      {
        for ( j = 0; j < 4; ++j )
          sub_10145130(this, j, 0.0);
      }
      v6 = v38;
    }
  }
  v26 = *(_DWORD *)(this + 4);
  if ( v26 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v26 >> 12 )
    v27 = 0;
  else
    v27 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  v28 = sub_100BE820(v27, *(_DWORD *)(this + 260));
  v29 = v6[7] / *(float *)(LODWORD(v37) + 600) * 0.2 + v28 * 0.8;
  v37 = v29;
  if ( (LODWORD(v37) & 0x7F800000) == 0x7F800000 )
    v29 = 0.0;
  v33 = v29;
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 260), v33);
  v30 = *(_DWORD *)(this + 264);
  v31 = *(float *)(this + 280) * *(float *)(this + 76) * *(float *)(dword_106B31C8 + 16) + *(float *)(this + 276);
  *(float *)(this + 276) = v31;
  v34 = v31;
  sub_10145F10((_DWORD *)this, v30, v34);
  if ( *(_BYTE *)(this + 308) == 1 )
  {
    v35 = (double)*(int *)(this + 40) * 0.01;
    sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 268), v35);
  }
  return *(_BYTE *)(this + 308);
}
