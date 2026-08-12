int __thiscall sub_10188670(_DWORD *this, int a2, int a3, int a4, float a5, int a6, int a7, int a8)
{
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v14; // [esp+8h] [ebp-64h] BYREF
  int v15; // [esp+Ch] [ebp-60h]
  float v16; // [esp+10h] [ebp-5Ch]
  int v17; // [esp+14h] [ebp-58h]
  int v18; // [esp+18h] [ebp-54h]
  int v19; // [esp+1Ch] [ebp-50h]
  int v20; // [esp+20h] [ebp-4Ch]
  float v21; // [esp+24h] [ebp-48h]
  int v22; // [esp+28h] [ebp-44h]
  __int16 v23; // [esp+2Ch] [ebp-40h]
  char v24; // [esp+2Eh] [ebp-3Eh]
  int v25; // [esp+30h] [ebp-3Ch]
  int v26; // [esp+34h] [ebp-38h] BYREF
  int v27; // [esp+38h] [ebp-34h]
  int v28; // [esp+3Ch] [ebp-30h]
  int v29; // [esp+40h] [ebp-2Ch]
  int v30; // [esp+44h] [ebp-28h]
  __int16 v31; // [esp+48h] [ebp-24h]
  _BYTE v32[32]; // [esp+4Ch] [ebp-20h] BYREF

  sub_10219BB0(v32);
  sub_1021A370(a2);
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v21 = 0.0;
    v22 = 0;
    v16 = a5;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = -1;
    v14 = a3;
    v15 = a4;
    v17 = a6;
    v9 = this[1];
    v18 = a7;
    v23 = 1;
    v25 = -1;
    v19 = a8;
    v20 = a2;
    v10 = *(_DWORD *)(v9 + 24);
  }
  else
  {
    sub_1021A070(v32);
    v21 = 0.0;
    v16 = a5;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = -1;
    v15 = a4;
    v14 = a3;
    v17 = a6;
    v11 = this[1];
    v19 = a8;
    v23 = 1;
    v25 = -1;
    v18 = a7;
    v20 = a2;
    v10 = *(_DWORD *)(v11 + 24);
  }
  v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v10);
  sub_1023BE40(v32, v12, &v14);
  sub_102375F0(&v26);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v32);
}
