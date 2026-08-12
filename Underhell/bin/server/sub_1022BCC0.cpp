void __userpurge sub_1022BCC0(int a1@<ecx>, _DWORD *a2@<edi>, int a3)
{
  int v3; // eax
  float *v4; // esi
  int *v5; // edx
  int v6; // edi
  float *v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // [esp+4h] [ebp-9Ch]
  _BYTE v13[12]; // [esp+14h] [ebp-8Ch] BYREF
  _BYTE v14[12]; // [esp+20h] [ebp-80h] BYREF
  _DWORD v15[8]; // [esp+2Ch] [ebp-74h] BYREF
  _DWORD v16[3]; // [esp+4Ch] [ebp-54h] BYREF
  int v17; // [esp+58h] [ebp-48h]
  int v18; // [esp+5Ch] [ebp-44h]
  int v19; // [esp+60h] [ebp-40h]
  int v20; // [esp+64h] [ebp-3Ch]
  float v21; // [esp+68h] [ebp-38h]
  int v22; // [esp+6Ch] [ebp-34h]
  __int16 v23; // [esp+70h] [ebp-30h]
  char v24; // [esp+72h] [ebp-2Eh]
  int v25; // [esp+74h] [ebp-2Ch]
  _DWORD v26[5]; // [esp+78h] [ebp-28h] BYREF
  __int16 v27; // [esp+8Ch] [ebp-14h]
  int v28; // [esp+90h] [ebp-10h]
  int v29; // [esp+94h] [ebp-Ch]
  int v30; // [esp+98h] [ebp-8h]
  int v31; // [esp+9Ch] [ebp-4h]

  v3 = *(_DWORD *)(a1 + 832);
  v29 = a1;
  if ( v3 > 0 )
  {
    v31 = 0;
    v30 = v3;
    do
    {
      v4 = (float *)(v31 + *(_DWORD *)(a1 + 820));
      if ( *(_DWORD *)v4 != -1 )
      {
        v5 = &off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 1];
        if ( off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 2] == *(_DWORD *)v4 >> 12
          && *v5
          && fabs(v4[34] * 1000.0) <= 4096.0 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 2] == *(_DWORD *)v4 >> 12 )
            v6 = *v5;
          else
            v6 = 0;
          v28 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 580))(v6, v13);
          sub_10219BB0(v15);
          v15[0] = &CPASFilter::`vftable';
          sub_1021A370(v15, v28);
          v15[0] = &CPASAttenuationFilter::`vftable';
          v7 = (float *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v6 + 580))(v6, v14, 0.80000001);
          sub_1021A0E0(v15, v7, *(float *)&a2);
          v21 = 0.0;
          v17 = 0;
          *(float *)&v16[2] = 1.0;
          v27 = -1;
          v18 = 0;
          v19 = 100;
          v20 = 0;
          v22 = 0;
          v23 = 1;
          v24 = 0;
          v25 = -1;
          memset(v26, 0, sizeof(v26));
          v16[0] = 2;
          v16[1] = v4 + 1;
          v17 = *((_DWORD *)v4 + 33);
          v21 = *(float *)(dword_106B31C8 + 12) - v4[34];
          v8 = *(_DWORD *)v4;
          if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
            v9 = 0;
          else
            v9 = off_1061BE18[4 * (v8 & 0xFFF) + 1];
          a2 = v16;
          v11 = *(_DWORD *)(v9 + 24);
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
          sub_1023BE40(v15, v10, v11);
          sub_102375F0(v26);
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
          a1 = v29;
        }
      }
      v31 += 140;
      --v30;
    }
    while ( v30 );
  }
  *(_DWORD *)(a1 + 832) = 0;
}
