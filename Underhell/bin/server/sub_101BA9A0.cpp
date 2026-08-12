int __usercall sub_101BA9A0@<eax>(int a1@<edi>, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int result; // eax
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  double v10; // st7
  int v11; // ecx
  double v12; // st7
  float v13; // [esp+Ch] [ebp-124h]
  int v15; // [esp+1Ch] [ebp-114h] BYREF
  float v16; // [esp+20h] [ebp-110h]
  int v17; // [esp+24h] [ebp-10Ch]
  int v18; // [esp+28h] [ebp-108h]
  int v19; // [esp+2Ch] [ebp-104h]
  int v20; // [esp+30h] [ebp-100h]
  char v21; // [esp+34h] [ebp-FCh]
  int v22; // [esp+38h] [ebp-F8h]
  char v23; // [esp+3Ch] [ebp-F4h] BYREF
  int v24; // [esp+BCh] [ebp-74h]
  _DWORD v25[8]; // [esp+C0h] [ebp-70h] BYREF
  _DWORD v26[9]; // [esp+E0h] [ebp-50h] BYREF
  __int16 v27; // [esp+104h] [ebp-2Ch]
  char v28; // [esp+106h] [ebp-2Ah]
  int v29; // [esp+108h] [ebp-28h]
  _DWORD v30[5]; // [esp+10Ch] [ebp-24h] BYREF
  __int16 v31; // [esp+120h] [ebp-10h]
  int v32; // [esp+124h] [ebp-Ch]
  int i; // [esp+128h] [ebp-8h]
  int v34; // [esp+12Ch] [ebp-4h]

  v2 = a2;
  result = a2[3] - 1;
  v32 = result;
  if ( result >= 0 )
  {
    v4 = 36 * result;
    for ( i = v4; ; v4 = i )
    {
      v5 = v4 + *v2;
      v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(
             dword_106BAFF8,
             *(unsigned __int16 *)(v5 + 20));
      if ( *(_WORD *)(v6 + 50) )
      {
        v7 = (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)dword_106BAFF8 + 20))(*(unsigned __int16 *)(v5 + 22), a1);
        v8 = *(unsigned __int16 *)(v6 + 50);
        if ( v7
          && *(_WORD *)(v6 + 48)
          && (*(float *)(v6 + 36) > (double)*(float *)(v7 + 24)
           || *(float *)(v6 + 40) > 0.0 && *(float *)(v5 + 16) < (double)*(float *)(v6 + 40)) )
        {
          v8 = *(unsigned __int16 *)(v6 + 48);
        }
        a1 = v8;
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106BAFF8 + 24))(dword_106BAFF8);
        v16 = 1.0;
        v17 = 100;
        v18 = 100;
        v19 = 100;
        v15 = 0;
        v20 = 75;
        v23 = 0;
        v21 = 0;
        v22 = 0;
        v24 = 0;
        result = sub_1023A760(v9, &v15, 0);
        if ( !(_BYTE)result )
        {
          a2[3] = 0;
          return result;
        }
        if ( *(float *)(v5 + 12) > 1.0 )
          *(float *)(v5 + 12) = 1.0;
        v34 = v20;
        sub_10219BB0(v25);
        v25[0] = &CPASFilter::`vftable';
        sub_1021A370(v5 + 24);
        v25[0] = &CPASAttenuationFilter::`vftable';
        if ( v34 <= 50 )
        {
          v10 = 4.0;
        }
        else
        {
          v34 -= 50;
          v10 = 20.0 / (double)v34;
        }
        v13 = v10;
        sub_1021A0E0(v5 + 24, v13);
        v11 = *(_DWORD *)(v5 + 8);
        *(float *)&v26[7] = 0.0;
        v12 = *(float *)(v5 + 12) * v16;
        v31 = -1;
        v26[1] = &v23;
        *(float *)&v26[2] = v12;
        v26[3] = v20;
        v26[0] = v11;
        v26[4] = 0;
        v26[8] = 0;
        v27 = 1;
        v28 = 0;
        v29 = -1;
        memset(v30, 0, sizeof(v30));
        v26[5] = v17;
        v26[6] = v5 + 24;
        sub_1023BE40(v25, 0, v26);
        sub_102375F0(v30);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v25);
      }
      i -= 36;
      v2 = a2;
      result = v32 - 1;
      v32 = result;
      if ( result < 0 )
      {
        a2[3] = 0;
        return result;
      }
    }
  }
  a2[3] = 0;
  return result;
}
