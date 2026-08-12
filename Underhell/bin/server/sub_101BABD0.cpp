int __cdecl sub_101BABD0(_DWORD *a1)
{
  int result; // eax
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  double v7; // st7
  int v8; // eax
  float v9; // [esp+8h] [ebp-124h]
  int v10; // [esp+18h] [ebp-114h] BYREF
  float v11; // [esp+1Ch] [ebp-110h]
  int v12; // [esp+20h] [ebp-10Ch]
  int v13; // [esp+24h] [ebp-108h]
  int v14; // [esp+28h] [ebp-104h]
  int v15; // [esp+2Ch] [ebp-100h]
  char v16; // [esp+30h] [ebp-FCh]
  int v17; // [esp+34h] [ebp-F8h]
  char v18; // [esp+38h] [ebp-F4h] BYREF
  int v19; // [esp+B8h] [ebp-74h]
  _DWORD v20[8]; // [esp+BCh] [ebp-70h] BYREF
  _DWORD v21[9]; // [esp+DCh] [ebp-50h] BYREF
  __int16 v22; // [esp+100h] [ebp-2Ch]
  char v23; // [esp+102h] [ebp-2Ah]
  int v24; // [esp+104h] [ebp-28h]
  int v25; // [esp+108h] [ebp-24h]
  int v26; // [esp+10Ch] [ebp-20h]
  int v27; // [esp+110h] [ebp-1Ch]
  int v28; // [esp+114h] [ebp-18h]
  int v29; // [esp+118h] [ebp-14h]
  __int16 v30; // [esp+11Ch] [ebp-10h]
  int v31; // [esp+120h] [ebp-Ch]
  int v32; // [esp+124h] [ebp-8h]
  int i; // [esp+128h] [ebp-4h]

  result = a1[3] - 1;
  v32 = result;
  if ( result < 0 )
  {
LABEL_17:
    a1[3] = 0;
  }
  else
  {
    v2 = 16 * result;
    for ( i = v2; ; v2 = i )
    {
      v3 = v2 + *a1;
      v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, *(_DWORD *)(v3 + 12));
      v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 24))(
             dword_106BAFF8,
             *(unsigned __int16 *)(v4 + 60));
      v12 = 100;
      v13 = 100;
      v11 = 1.0;
      v14 = 100;
      v10 = 0;
      v15 = 75;
      v18 = 0;
      v16 = 0;
      v17 = 0;
      v19 = 0;
      result = sub_1023A760(v5, &v10, 0);
      if ( !(_BYTE)result )
        break;
      v6 = v15;
      sub_10219BB0(v20);
      v20[0] = &CPASFilter::`vftable';
      sub_1021A370(v3);
      v20[0] = &CPASAttenuationFilter::`vftable';
      if ( v6 <= 50 )
      {
        v7 = 4.0;
      }
      else
      {
        v31 = v6 - 50;
        v7 = 20.0 / (double)(v6 - 50);
      }
      v9 = v7;
      sub_1021A0E0(v3, v9);
      *(float *)&v21[7] = 0.0;
      v21[1] = &v18;
      *(float *)&v21[2] = v11;
      v21[3] = v15;
      v30 = -1;
      v21[4] = 0;
      v21[8] = 0;
      v22 = 1;
      v23 = 0;
      v24 = -1;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v21[0] = 6;
      v21[5] = v12;
      v21[6] = v3;
      sub_1023BE40(v20, 0, v21);
      v8 = v25;
      v28 = 0;
      if ( v27 >= 0 )
      {
        if ( v25 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25);
          v8 = 0;
          v25 = 0;
        }
        v26 = 0;
      }
      v29 = v8;
      if ( v27 >= 0 )
      {
        if ( v8 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v8);
          v25 = 0;
        }
        v26 = 0;
      }
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v20);
      i -= 16;
      result = v32 - 1;
      v32 = result;
      if ( result < 0 )
        goto LABEL_17;
    }
  }
  return result;
}
