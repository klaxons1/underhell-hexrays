int __usercall sub_100F6720@<eax>(int a1@<edi>, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int result; // eax
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // eax
  double v11; // st7
  int v13; // [esp+0h] [ebp-110h] BYREF
  float v14; // [esp+4h] [ebp-10Ch]
  int v15; // [esp+8h] [ebp-108h]
  int v16; // [esp+Ch] [ebp-104h]
  int v17; // [esp+10h] [ebp-100h]
  int v18; // [esp+14h] [ebp-FCh]
  char v19; // [esp+18h] [ebp-F8h]
  int v20; // [esp+1Ch] [ebp-F4h]
  char v21; // [esp+20h] [ebp-F0h] BYREF
  int v22; // [esp+A0h] [ebp-70h]
  _DWORD v23[8]; // [esp+A4h] [ebp-6Ch] BYREF
  _DWORD v24[9]; // [esp+C4h] [ebp-4Ch] BYREF
  __int16 v25; // [esp+E8h] [ebp-28h]
  char v26; // [esp+EAh] [ebp-26h]
  int v27; // [esp+ECh] [ebp-24h]
  _DWORD v28[5]; // [esp+F0h] [ebp-20h] BYREF
  __int16 v29; // [esp+104h] [ebp-Ch]
  int v30; // [esp+108h] [ebp-8h]
  int i; // [esp+10Ch] [ebp-4h]

  v2 = a2;
  result = a2[3] - 1;
  v30 = result;
  if ( result >= 0 )
  {
    v4 = 36 * result;
    for ( i = v4; ; v4 = i )
    {
      v5 = v4 + *v2;
      v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 20))(
             dword_10436258,
             *(unsigned __int16 *)(v5 + 20));
      if ( *(_WORD *)(v6 + 50) )
      {
        v7 = (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)dword_10436258 + 20))(*(unsigned __int16 *)(v5 + 22), a1);
        v8 = *(unsigned __int16 *)(v6 + 50);
        if ( v7
          && *(_WORD *)(v6 + 48)
          && (*(float *)(v6 + 36) > (double)*(float *)(v7 + 24)
           || *(float *)(v6 + 40) > 0.0 && *(float *)(v5 + 16) < (double)*(float *)(v6 + 40)) )
        {
          v8 = *(unsigned __int16 *)(v6 + 48);
        }
        a1 = v8;
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10436258 + 24))(dword_10436258);
        v14 = 1.0;
        v15 = 100;
        v16 = 100;
        v17 = 100;
        v13 = 0;
        v18 = 75;
        v21 = 0;
        v19 = 0;
        v20 = 0;
        v22 = 0;
        result = sub_10120700(v9, &v13, 0);
        if ( !(_BYTE)result )
        {
          a2[3] = 0;
          return result;
        }
        if ( *(float *)(v5 + 12) > 1.0 )
          *(float *)(v5 + 12) = 1.0;
        sub_1015B880(v23);
        v23[0] = &CPASFilter::`vftable';
        sub_1015BB70(v5 + 24);
        v10 = *(_DWORD *)(v5 + 8);
        *(float *)&v24[7] = 0.0;
        v11 = *(float *)(v5 + 12) * v14;
        v29 = -1;
        v24[1] = &v21;
        *(float *)&v24[2] = v11;
        v24[3] = v18;
        v24[0] = v10;
        v23[0] = &CPASAttenuationFilter::`vftable';
        v24[4] = 0;
        v24[8] = 0;
        v25 = 1;
        v26 = 0;
        v27 = -1;
        memset(v28, 0, sizeof(v28));
        v24[5] = v15;
        v24[6] = v5 + 24;
        sub_10121280(v23, 0, v24);
        sub_1011A810(v28);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v23);
      }
      i -= 36;
      if ( --v30 < 0 )
      {
        result = (int)a2;
        a2[3] = 0;
        return result;
      }
      v2 = a2;
    }
  }
  a2[3] = 0;
  return result;
}
