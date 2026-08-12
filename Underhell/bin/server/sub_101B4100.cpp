int __thiscall sub_101B4100(char *this)
{
  int v2; // edi
  int (__thiscall *v3)(char *, float *, _DWORD); // edx
  int v4; // eax
  float v5; // edx
  float v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  const char *v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v15; // [esp+14h] [ebp-A8h]
  float v16[3]; // [esp+28h] [ebp-94h] BYREF
  _DWORD v17[8]; // [esp+34h] [ebp-88h] BYREF
  int v18; // [esp+54h] [ebp-68h] BYREF
  const char *v19; // [esp+58h] [ebp-64h]
  float v20; // [esp+5Ch] [ebp-60h]
  int v21; // [esp+60h] [ebp-5Ch]
  int v22; // [esp+64h] [ebp-58h]
  int v23; // [esp+68h] [ebp-54h]
  float *v24; // [esp+6Ch] [ebp-50h]
  float v25; // [esp+70h] [ebp-4Ch]
  int v26; // [esp+74h] [ebp-48h]
  __int16 v27; // [esp+78h] [ebp-44h]
  char v28; // [esp+7Ah] [ebp-42h]
  int v29; // [esp+7Ch] [ebp-40h]
  _DWORD v30[5]; // [esp+80h] [ebp-3Ch] BYREF
  __int16 v31; // [esp+94h] [ebp-28h]
  float v32; // [esp+98h] [ebp-24h] BYREF
  float v33; // [esp+9Ch] [ebp-20h]
  float v34; // [esp+A0h] [ebp-1Ch]
  float v35; // [esp+A4h] [ebp-18h] BYREF
  float v36; // [esp+A8h] [ebp-14h]
  float v37; // [esp+ACh] [ebp-10h]
  float v38; // [esp+B0h] [ebp-Ch] BYREF
  float v39; // [esp+B4h] [ebp-8h]
  float v40; // [esp+B8h] [ebp-4h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 720))(this);
  if ( *((_DWORD *)this + 203) )
  {
    v2 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 580))(this);
    sub_10219BB0(v17);
    v17[0] = &CPASFilter::`vftable';
    sub_1021A370(v2);
    v3 = *(int (__thiscall **)(char *, float *, _DWORD))(*(_DWORD *)this + 580);
    v17[0] = &CPASAttenuationFilter::`vftable';
    v4 = v3(this, v16, 1.25);
    sub_1021A0E0(v4, COERCE_FLOAT(v16));
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    v5 = *((float *)this + 146);
    v6 = *((float *)this + 147);
    v32 = *((float *)this + 145);
    v35 = v32;
    v38 = v32;
    v7 = *((_DWORD *)this + 200);
    v34 = v6;
    v37 = v6;
    v40 = v6;
    v33 = v5;
    v36 = v5;
    v39 = v5;
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
    v9 = v8;
    if ( v8 && v8 != dword_106BAFEC )
    {
      (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v8 + 188))(v8, &v35, 0);
      v38 = v35;
      v39 = v36;
      v40 = v37;
    }
    v10 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 200) + 24))(*((_DWORD *)this + 200));
    if ( v10 )
    {
      if ( v10 != dword_106BAFEC )
      {
        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v10 + 188))(v10, &v38, 0);
        if ( !v9 || v9 == dword_106BAFEC )
        {
          v35 = v38;
          v36 = v39;
          v37 = v40;
        }
      }
    }
    v31 = -1;
    v11 = (const char *)*((_DWORD *)this + 203);
    v22 = 0;
    v23 = 100;
    v26 = 0;
    v27 = 1;
    v28 = 0;
    v29 = -1;
    memset(v30, 0, sizeof(v30));
    v32 = (v38 + v35) * 0.5;
    v18 = 6;
    v33 = (v39 + v36) * 0.5;
    v19 = v11;
    v34 = 0.5 * (v40 + v37);
    v25 = 0.0;
    if ( !v11 )
      v19 = String;
    v12 = *((_DWORD *)this + 6);
    v20 = 1.0;
    v24 = &v32;
    v21 = 66;
    v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v12);
    sub_1023BE40(v17, v13, &v18);
    sub_102375F0(v30);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v17);
  }
  HIDWORD(v15) = this;
  LODWORD(v15) = this;
  sub_1010DD80((_DWORD *)this + 209, v15, 0.0);
  return sub_101BA8E0(this + 12);
}
