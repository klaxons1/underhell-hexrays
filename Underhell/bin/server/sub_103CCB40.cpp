int __stdcall sub_103CCB40(float *a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  float v4; // [esp+10h] [ebp-3Ch]
  _DWORD v5[8]; // [esp+20h] [ebp-2Ch] BYREF
  float v6[3]; // [esp+40h] [ebp-Ch] BYREF

  v1 = sub_10243040("sprites/vortring1.vmt", a1, 1);
  v2 = v1;
  if ( v1 )
  {
    sub_10128950((int)v1, 7, 255, 255, 255, 255, 0);
    sub_10242820((int)v2, 255, 0.0);
    v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           1.0,
           1.5);
    sub_102428B0((int)v2, v4, 0.0);
    sub_102CCE20((int)v2, 45.0);
    sub_1023C380(v2, (int)"NPC_Vortigaunt.Explode", 0.0, 0);
  }
  sub_10219BB0(v5);
  v5[0] = &CPVSFilter::`vftable';
  sub_1021A300(v5, (int)a1);
  v6[0] = 0.0;
  v6[1] = 0.0;
  v6[2] = 1.0;
  ((void (__stdcall *)(_DWORD *, _DWORD, float *, float *, _DWORD))(*off_1065C5EC)[37])(v5, 0.0, a1, v6, 0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
}
