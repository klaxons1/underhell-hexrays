void __userpurge sub_10139380(unsigned int a1@<ecx>, float a2@<edi>, int *a3)
{
  int v4; // eax
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // ecx
  _DWORD *v8; // edx
  int v9; // eax
  const char *v10; // eax
  int v11; // ecx
  int v12; // eax
  const char *v13; // edi
  int v14; // eax
  int v15; // edi
  int (__thiscall *v16)(unsigned int, _BYTE *, _DWORD); // edx
  int v17; // eax
  int v18; // eax
  int v19; // [esp+8h] [ebp-84h]
  _DWORD v21[5]; // [esp+44h] [ebp-48h] BYREF
  __int16 v22; // [esp+58h] [ebp-34h]
  _DWORD v23[8]; // [esp+5Ch] [ebp-30h] BYREF
  _BYTE v24[12]; // [esp+7Ch] [ebp-10h] BYREF
  int v25; // [esp+88h] [ebp-4h]

  v4 = sub_10261B20();
  if ( !v4 )
    return;
  if ( *(_BYTE *)(a1 + 893) )
  {
    v5 = *(_DWORD *)(a1 + 804);
    *(_BYTE *)(a1 + 893) = 0;
    v6 = *(_DWORD *)(v4 + 4 * v5 + 3188);
    if ( v6 != -1 && v5 < 8 )
    {
      *(_DWORD *)(a1 + 876) = v6;
      v7 = 0;
      v8 = (_DWORD *)(a1 + 816);
      do
      {
        *(v8 - 1) = *(_DWORD *)(v4 + 4 * (v7 + 16 * *(_DWORD *)(a1 + 804)) + 2676);
        *v8 = *(_DWORD *)(v4 + 4 * (v7 + 16 * *(_DWORD *)(a1 + 804)) + 2680);
        v8[1] = *(_DWORD *)(v4 + 4 * (v7 + 16 * *(_DWORD *)(a1 + 804)) + 2684);
        v8[2] = *(_DWORD *)(v4 + 4 * (v7 + 16 * (*(_DWORD *)(a1 + 804) + 42)));
        v7 += 4;
        v8 += 4;
      }
      while ( v7 < 16 );
    }
  }
  if ( (*(_BYTE *)(a1 + 248) & 2) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 876);
    if ( v9 )
    {
      v10 = *(const char **)(a1 + 4 * v9 + 808);
      if ( !v10 )
        v10 = String;
    }
    else
    {
      v10 = *(const char **)(a1 + 808);
      if ( !v10 )
        v10 = String;
    }
    sub_1025F270(v10);
    goto LABEL_29;
  }
  if ( *a3 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*a3 + 320))(*a3) )
  {
    v11 = *a3;
    v25 = *a3;
LABEL_20:
    if ( v11 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 320))(v11) )
    {
      v12 = *(_DWORD *)(a1 + 876);
      if ( v12 )
      {
        v13 = *(const char **)(a1 + 4 * v12 + 808);
        if ( !v13 )
          v13 = String;
      }
      else
      {
        v13 = *(const char **)(a1 + 808);
        if ( !v13 )
          v13 = String;
      }
      v14 = sub_1001F4B0(v25);
      sub_1025F210(v13, v14);
    }
    goto LABEL_29;
  }
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v25 = sub_10261B20();
    v11 = v25;
    goto LABEL_20;
  }
LABEL_29:
  if ( *(_DWORD *)(a1 + 896) )
  {
    v15 = (*(int (__thiscall **)(unsigned int, _BYTE *))(*(_DWORD *)a1 + 580))(a1, v24);
    sub_10219BB0(v23);
    v23[0] = &CPASFilter::`vftable';
    sub_1021A370(v15);
    v16 = *(int (__thiscall **)(unsigned int, _BYTE *, _DWORD))(*(_DWORD *)a1 + 580);
    v23[0] = &CPASAttenuationFilter::`vftable';
    v17 = v16(a1, v24, 0.80000001);
    sub_1021A0E0(v17, a2);
    v22 = -1;
    memset(v21, 0, sizeof(v21));
    v19 = *(_DWORD *)(a1 + 24);
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
    sub_1023BE40(v23, v18, v19);
    sub_102375F0(v21);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v23);
  }
  if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
    sub_1025FAC0(a1);
  sub_1010DD80((_DWORD *)(a1 + 900), __SPAIR64__(a1, *a3), 0.0);
}
