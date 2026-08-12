int __usercall sub_102BB9A0@<eax>(int a1@<ecx>, float a2@<edi>)
{
  int v3; // edi
  int (__thiscall *v4)(int, _BYTE *, _DWORD); // edx
  float *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp+8h] [ebp-60h]
  float v11; // [esp+14h] [ebp-54h]
  int v13[8]; // [esp+20h] [ebp-48h] BYREF
  _BYTE v14[12]; // [esp+40h] [ebp-28h] BYREF
  int v15[3]; // [esp+4Ch] [ebp-1Ch] BYREF
  int v16[3]; // [esp+58h] [ebp-10h] BYREF
  float v17; // [esp+64h] [ebp-4h]

  sub_102BE0F0(*(float *)(dword_106B31C8 + 12), (int)v16, (int)v15);
  sub_1025F370((void *)a1, (float *)v16, 0);
  sub_100E0EA0(a1, (float *)v15);
  if ( (*(_BYTE *)(a1 + 248) & 1) == 0 )
  {
    v3 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 580))(a1, v14);
    sub_10219BB0(v13);
    v13[0] = (int)&CPASFilter::`vftable';
    sub_1021A370(v13, v3);
    v4 = *(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)a1 + 580);
    v13[0] = (int)&CPASAttenuationFilter::`vftable';
    v5 = (float *)v4(a1, v14, 0.0);
    sub_1021A0E0(v13, v5, a2);
    v10 = *(_DWORD *)(a1 + 24);
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
    sub_1023C580(v3, a1, v13, v6, v10, (int)"HeadcrabCanister.SkyboxExplosion", 0.0, COERCE_INT(0.0));
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
  }
  v7 = *(_DWORD *)(a1 + 1372);
  if ( v7 )
  {
    v8 = v7 - 1;
    *(_DWORD *)(a1 + 1372) = v8;
    if ( v8 <= 0 )
      return sub_100EC3F0((_DWORD *)a1, 0, 0.0, 0);
  }
  v17 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          *(float *)(a1 + 1364),
          *(float *)(a1 + 1368))
      + 3.0;
  sub_100EC3F0((_DWORD *)a1, (int)sub_102BDA70, 0.0, 0);
  v11 = *(float *)(dword_106B31C8 + 12) + v17;
  return sub_100EC4A0((int *)a1, v11, 0);
}
