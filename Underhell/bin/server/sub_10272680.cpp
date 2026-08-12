int __thiscall sub_10272680(int this)
{
  int result; // eax
  int v2; // edi
  int *v3; // ebx
  int *v4; // esi
  int v5; // esi
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // esi
  int v13; // edx
  int v14; // eax
  int v15; // ebx
  unsigned int v16; // esi
  int v17; // edi
  _DWORD v18[8]; // [esp+4h] [ebp-48h] BYREF
  int v19; // [esp+24h] [ebp-28h]
  int v20; // [esp+28h] [ebp-24h]
  int v21; // [esp+2Ch] [ebp-20h]
  int *v22; // [esp+30h] [ebp-1Ch]
  int *v23; // [esp+34h] [ebp-18h]
  int v24; // [esp+38h] [ebp-14h] BYREF
  int v25; // [esp+3Ch] [ebp-10h]
  int v26; // [esp+40h] [ebp-Ch]
  int v27; // [esp+44h] [ebp-8h] BYREF
  bool v28; // [esp+4Ah] [ebp-2h]
  char v29; // [esp+4Bh] [ebp-1h] BYREF

  *(double *)(this + 16) = 0.0;
  v26 = this;
  result = dword_106CF9D4;
  v28 = *(_DWORD *)(dword_106CF9D4 + 48) != 0;
  v2 = 0;
  v22 = 0;
  if ( *(int *)(this + 12) > 0 )
  {
    while ( 1 )
    {
      v3 = (int *)(v2 + 1);
      v23 = (int *)(v2 + 1);
      result = sub_1025FB50(v2 + 1);
      v4 = (int *)result;
      v21 = result;
      if ( result )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
        if ( (_BYTE)result )
        {
          sub_10219BB0(v18);
          v18[0] = &CSingleUserRecipientFilter::`vftable';
          sub_10219D00((int)v18, v4);
          v5 = 1 << (v2 & 0x1F);
          v6 = v2 >> 5;
          v19 = v5;
          if ( (v5 & dword_106CF894[v6]) != 0 )
          {
            sub_10154B40((int)v18, "RequestState");
            sub_10154B90();
            dword_106CF894[v6] &= ~v5;
          }
          v27 = 0;
          v24 = 0;
          v29 = 0;
          if ( (v5 & dword_106CF890[v6]) != 0 )
          {
            v7 = 0;
            if ( *(int *)(v26 + 12) > 0 )
            {
              do
              {
                v20 = v7 + 1;
                v8 = sub_1025FB50(v7 + 1);
                v9 = v8;
                if ( v8
                  && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8)
                  && (v28
                   || (*(unsigned __int8 (__thiscall **)(_DWORD, int, int, char *))(**(_DWORD **)(v26 + 8) + 4))(
                        *(_DWORD *)(v26 + 8),
                        v21,
                        v9,
                        &v29)) )
                {
                  v10 = 1 << (v7 & 0x1F);
                  v11 = 4 * (v7 >> 5);
                  *(int *)((char *)&v27 + v11) |= v10;
                  v12 = (int *)((char *)&v24 + v11);
                  if ( v29 )
                    *v12 |= v10;
                  else
                    *v12 &= ~v10;
                }
                v7 = v20;
              }
              while ( v20 < *(_DWORD *)(v26 + 12) );
              v2 = (int)v22;
            }
          }
          if ( !sub_10272330(&v27, &dword_106CF8E0[v2], -1)
            || (v22 = &dword_106CF898[v2], !sub_10272330(v22, &dword_106CF928[v2], -1)) )
          {
            v13 = dword_106CF898[v2];
            dword_106CF8E0[v2] = v27;
            v22 = &dword_106CF898[v2];
            dword_106CF928[v2] = v13;
            sub_10154B40((int)v18, "VoiceMask");
            sub_10154C40(v27);
            sub_10154C40(dword_106CF898[v2]);
            sub_10154BB0((v19 & dword_106CF890[v6]) != 0);
            sub_10154B90();
          }
          v14 = 0;
          if ( *(int *)(v26 + 12) > 0 )
          {
            do
            {
              v15 = 1 << (v14 & 0x1F);
              v16 = 4 * (v14 >> 5);
              if ( (v15 & *(int *)((char *)&v27 + v16)) == 0 || (LOBYTE(v25) = 1, (v15 & v22[v16 / 4]) != 0) )
                LOBYTE(v25) = 0;
              v17 = v14 + 1;
              (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)dword_106B31D4 + 8))(
                dword_106B31D4,
                v23,
                v14 + 1,
                v25);
              if ( (_BYTE)v25 )
                (*(void (__stdcall **)(int *, int, bool))(*(_DWORD *)dword_106B31D4 + 12))(
                  v23,
                  v17,
                  (v15 & *(int *)((char *)&v24 + v16)) != 0);
              v14 = v17;
            }
            while ( v17 < *(_DWORD *)(v26 + 12) );
          }
          result = std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v18);
          v3 = v23;
        }
      }
      v22 = v3;
      if ( (int)v3 >= *(_DWORD *)(v26 + 12) )
        break;
      v2 = (int)v22;
    }
  }
  return result;
}
