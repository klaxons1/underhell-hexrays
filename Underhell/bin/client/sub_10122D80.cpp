int __thiscall sub_10122D80(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edx
  int v5; // eax
  double v6; // st7
  int v7; // edx
  int v8; // ecx
  double v9; // st7
  unsigned int v10; // esi
  _DWORD *v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  _DWORD v14[9]; // [esp+0h] [ebp-6Ch] BYREF
  __int16 v15; // [esp+24h] [ebp-48h]
  char v16; // [esp+26h] [ebp-46h]
  int v17; // [esp+28h] [ebp-44h]
  int v18[5]; // [esp+2Ch] [ebp-40h] BYREF
  __int16 v19; // [esp+40h] [ebp-2Ch]
  _DWORD v20[8]; // [esp+44h] [ebp-28h] BYREF
  _DWORD *v21; // [esp+64h] [ebp-8h]
  int v22; // [esp+68h] [ebp-4h]

  result = this[7] - 1;
  v21 = this;
  v22 = result;
  if ( result >= 0 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(this[4] + 4 * result);
      if ( (*(_BYTE *)(v3 + 80) & 1) != 0
        && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(v3 + 76) + 20))(v3 + 76, a2) )
      {
        sub_1015B880(v20);
        v20[0] = &CSingleUserRecipientFilter::`vftable';
        sub_1015B9D0(a2);
        v4 = *(_DWORD *)(v3 + 56);
        *(float *)&v14[7] = 0.0;
        v5 = *(_DWORD *)(v3 + 44);
        v6 = *(float *)(v3 + 72) * *(float *)(v3 + 16);
        v14[0] = v4;
        v7 = *(_DWORD *)(v3 + 64);
        v19 = -1;
        v8 = *(_DWORD *)(v3 + 32);
        *(float *)&v14[2] = v6;
        v9 = *(float *)v3;
        v14[6] = 0;
        v14[8] = 0;
        v15 = 1;
        v16 = 0;
        v17 = -1;
        memset(v18, 0, sizeof(v18));
        v14[1] = v5;
        v14[3] = v8;
        v14[4] = v7 | 1;
        v10 = *(_DWORD *)(v3 + 52);
        v14[5] = (int)v9;
        if ( v10 != -1
          && (v11 = (_DWORD *)((char *)off_103DCD74 + 16 * (v10 & 0xFFF) + 4), v12 = v10 >> 12, v11[1] == v12)
          && *v11 )
        {
          if ( v11[1] == v12 )
            v13 = (*(int (__thiscall **)(int))(*(_DWORD *)(*v11 + 8) + 36))(*v11 + 8);
          else
            v13 = (*(int (__thiscall **)(int))(MEMORY[8] + 36))(8);
        }
        else
        {
          v13 = -1;
        }
        sub_10121280((int)v20, v13, (int)v14);
        sub_1011A810(v18);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v20);
      }
      result = --v22;
      if ( v22 < 0 )
        break;
      this = v21;
    }
  }
  return result;
}
