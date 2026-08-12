int __thiscall sub_103F62E0(float *this)
{
  int v2; // edi
  int (__thiscall *v3)(float *, _BYTE *, _DWORD); // edx
  float *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int *v9; // ecx
  int v10; // edi
  const char *v11; // esi
  int v13; // [esp+0h] [ebp-48h]
  float v14; // [esp+0h] [ebp-48h]
  float v15; // [esp+4h] [ebp-44h]
  float v16; // [esp+8h] [ebp-40h]
  float v17; // [esp+10h] [ebp-38h]
  int v18[8]; // [esp+18h] [ebp-30h] BYREF
  _BYTE v19[12]; // [esp+38h] [ebp-10h] BYREF
  float v20; // [esp+44h] [ebp-4h]

  v2 = (*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 580))(this, v19);
  sub_10219BB0(v18);
  v18[0] = (int)&CPASFilter::`vftable';
  sub_1021A370(v18, v2);
  v3 = *(int (__thiscall **)(float *, _BYTE *, _DWORD))(*(_DWORD *)this + 580);
  v18[0] = (int)&CPASAttenuationFilter::`vftable';
  v4 = (float *)v3(this, v19, 0.80000001);
  sub_1021A0E0(v18, v4, v17);
  v13 = *((_DWORD *)this + 6);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
  sub_1023C580(v2, (int)this, v18, v5, v13, (int)"Weapon_Bugbait.Splat", 0.0, COERCE_INT(0.0));
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v14 = this[145];
  v15 = this[146];
  v16 = this[147];
  v6 = sub_100D1940(this);
  if ( !sub_102D4A40(v6, v14, v15, v16, 1) )
  {
    v7 = sub_100D1940(this);
    sub_102AD3B0(dword_106DBB00, v7);
  }
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 944))(this, 182);
  sub_100D18C0((int)this);
  v8 = *((_DWORD *)this + 284);
  v20 = *(float *)(dword_106B31C8 + 12) + 0.0;
  if ( v8 != LODWORD(v20) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v9 = (int *)*((_DWORD *)this + 6);
      if ( v9 )
        sub_100194B0(v9, 1136);
    }
    this[284] = v20;
  }
  v10 = sub_100D1940(this);
  if ( v10 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 320))(v10) )
  {
    ++*((_DWORD *)this + 344);
    v11 = (const char *)*((_DWORD *)this + 23);
    if ( !v11 )
      v11 = String;
    (*(void (__thiscall **)(int, int, _DWORD, const char *))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, v10, 0, v11);
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v18);
}
