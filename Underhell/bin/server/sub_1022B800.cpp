void __userpurge sub_1022B800(int a1@<ecx>, _DWORD *a2@<esi>, float a3)
{
  double v3; // st7
  int v4; // edi
  int v5; // ecx
  _DWORD *v6; // esi
  int v7; // edi
  int (__thiscall *v8)(_DWORD *, _BYTE *, _DWORD); // edx
  float *v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  char Destination[256]; // [esp+18h] [ebp-184h] BYREF
  _BYTE v16[12]; // [esp+118h] [ebp-84h] BYREF
  _BYTE v17[12]; // [esp+124h] [ebp-78h] BYREF
  _DWORD v18[8]; // [esp+130h] [ebp-6Ch] BYREF
  _DWORD v19[9]; // [esp+150h] [ebp-4Ch] BYREF
  __int16 v20; // [esp+174h] [ebp-28h]
  char v21; // [esp+176h] [ebp-26h]
  int v22; // [esp+178h] [ebp-24h]
  _DWORD v23[5]; // [esp+17Ch] [ebp-20h] BYREF
  __int16 v24; // [esp+190h] [ebp-Ch]
  int v25; // [esp+194h] [ebp-8h]
  int v26; // [esp+198h] [ebp-4h]

  v3 = 2.5;
  v4 = a1;
  v25 = a1;
  if ( a3 <= 2.5 )
  {
    v3 = a3;
    if ( a3 < 0.25 )
    {
      v3 = 0.25;
      a3 = 0.25;
    }
  }
  else
  {
    a3 = 2.5;
  }
  v5 = *(_DWORD *)(a1 + 976);
  *(float *)(v4 + 904) = v3;
  if ( v5 )
  {
    v26 = 0;
    if ( sub_1041CB40(v5) > 0 )
    {
      do
      {
        v6 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 896))(v4, v26);
        if ( v6 )
        {
          if ( (unsigned __int8)sub_1041D1A0(Destination, 0x100u) )
          {
            v7 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*v6 + 580))(v6, v16);
            sub_10219BB0(v18);
            v18[0] = &CPASFilter::`vftable';
            sub_1021A370(v18, v7);
            v8 = *(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*v6 + 580);
            v18[0] = &CPASAttenuationFilter::`vftable';
            v9 = (float *)v8(v6, v17, 0.80000001);
            sub_1021A0E0(v18, v9, *(float *)&a2);
            *(float *)&v19[2] = 1.0;
            *(float *)&v19[7] = 0.0;
            v19[0] = 0;
            v19[3] = 0;
            v19[6] = 0;
            v19[8] = 0;
            v20 = 1;
            v21 = 0;
            v22 = -1;
            memset(v23, 0, sizeof(v23));
            v24 = -1;
            v19[1] = Destination;
            v10 = v6[6];
            v19[5] = (int)(a3 * 100.0);
            v19[4] = 2;
            a2 = v19;
            v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
            sub_1023BE40(v18, v11, v10);
            sub_102375F0(v23);
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v18);
            v4 = v25;
          }
        }
        v12 = *(_DWORD *)(v4 + 976);
        v13 = ++v26;
      }
      while ( v13 < sub_1041CB40(v12) );
    }
  }
}
