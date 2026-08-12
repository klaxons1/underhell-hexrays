int __thiscall sub_1023F500(_DWORD *this, int *a2)
{
  int result; // eax
  int v3; // esi
  const char *v4; // eax
  int v5; // edx
  double v6; // st7
  int v7; // ecx
  double v8; // st7
  unsigned int v9; // esi
  int *v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // [esp+0h] [ebp-6Ch] BYREF
  const char *v15; // [esp+4h] [ebp-68h]
  float v16; // [esp+8h] [ebp-64h]
  int v17; // [esp+Ch] [ebp-60h]
  int v18; // [esp+10h] [ebp-5Ch]
  int v19; // [esp+14h] [ebp-58h]
  int v20; // [esp+18h] [ebp-54h]
  float v21; // [esp+1Ch] [ebp-50h]
  int v22; // [esp+20h] [ebp-4Ch]
  __int16 v23; // [esp+24h] [ebp-48h]
  char v24; // [esp+26h] [ebp-46h]
  int v25; // [esp+28h] [ebp-44h]
  int v26[5]; // [esp+2Ch] [ebp-40h] BYREF
  __int16 v27; // [esp+40h] [ebp-2Ch]
  _DWORD v28[8]; // [esp+44h] [ebp-28h] BYREF
  _DWORD *v29; // [esp+64h] [ebp-8h]
  int v30; // [esp+68h] [ebp-4h]

  result = this[7] - 1;
  v29 = this;
  v30 = result;
  if ( result >= 0 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(this[4] + 4 * result);
      if ( (*(_BYTE *)(v3 + 80) & 1) != 0
        && (*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)(v3 + 76) + 20))(v3 + 76, a2) )
      {
        sub_10219BB0(v28);
        v28[0] = &CSingleUserRecipientFilter::`vftable';
        sub_10219D00((int)v28, a2);
        v4 = *(const char **)(v3 + 44);
        v21 = 0.0;
        v5 = *(_DWORD *)(v3 + 56);
        v20 = 0;
        v22 = 0;
        v23 = 1;
        v24 = 0;
        v25 = -1;
        memset(v26, 0, sizeof(v26));
        v27 = -1;
        v14 = v5;
        v15 = v4;
        if ( !v4 )
          v15 = String;
        v6 = *(float *)(v3 + 72) * *(float *)(v3 + 16);
        v7 = *(_DWORD *)(v3 + 64) | 1;
        v17 = *(_DWORD *)(v3 + 32);
        v16 = v6;
        v18 = v7;
        v8 = *(float *)v3;
        v9 = *(_DWORD *)(v3 + 52);
        v19 = (int)v8;
        if ( v9 != -1 && (v10 = &off_1061BE18[4 * (v9 & 0xFFF) + 1], v11 = v9 >> 12, v10[1] == v11) && *v10 )
        {
          if ( v10[1] == v11 )
            v12 = *v10;
          else
            v12 = 0;
          v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                  dword_106B31D0,
                  *(_DWORD *)(v12 + 24));
        }
        else
        {
          v13 = -1;
        }
        sub_1023BE40(v28, v13, (int)&v14);
        sub_102375F0(v26);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v28);
      }
      result = --v30;
      if ( v30 < 0 )
        break;
      this = v29;
    }
  }
  return result;
}
