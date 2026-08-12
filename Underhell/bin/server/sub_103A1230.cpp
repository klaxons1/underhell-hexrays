int __thiscall sub_103A1230(int this, _DWORD *a2)
{
  bool v2; // zf
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // esi
  void *v6; // ebx
  int v7; // ecx
  int *v8; // ecx
  double v9; // st7
  int v10; // ecx
  int *v11; // ecx
  int v12; // edi
  int *v13; // ecx
  int *v14; // ecx
  float *v15; // eax
  float *v16; // esi
  float v18; // [esp+0h] [ebp-5Ch]
  float v19; // [esp+Ch] [ebp-50h]
  _DWORD v20[8]; // [esp+14h] [ebp-48h] BYREF
  float v21[3]; // [esp+34h] [ebp-28h] BYREF
  float v22; // [esp+40h] [ebp-1Ch] BYREF
  float v23; // [esp+44h] [ebp-18h]
  float v24; // [esp+48h] [ebp-14h]
  void *v25; // [esp+4Ch] [ebp-10h]
  float v26; // [esp+50h] [ebp-Ch]
  float *v27; // [esp+54h] [ebp-8h]
  int v28; // [esp+58h] [ebp-4h]

  v2 = *(_BYTE *)(this + 3829) == 0;
  v19 = 4.0;
  v27 = (float *)this;
  if ( v2 )
    v3 = sub_100FB5C0("sprites/rollermine_shock.vmt", v19);
  else
    v3 = sub_100FB5C0("sprites/rollermine_shock_yellow.vmt", v19);
  v4 = a2;
  v5 = v3;
  v28 = -1;
  v6 = (void *)__RTDynamicCast(
                 (int)a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                 (int)&CBaseAnimating `RTTI Type Descriptor',
                 0);
  v25 = v6;
  if ( v5 )
  {
    sub_100FAE40(v5, a2, v27);
    if ( v6 && sub_100D7240(v6) )
    {
      v28 = sub_100BEF30((int)v6, "beam_damage");
      sub_1024A060(v5, v28);
    }
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
    {
      sub_1005C410(v5, 8.0);
      v7 = *(_DWORD *)(v5 + 928);
      v26 = 4.0;
      if ( v7 != COERCE_INT(4.0) )
      {
        if ( *(_BYTE *)(v5 + 84) )
        {
          *(_BYTE *)(v5 + 88) |= 1u;
        }
        else
        {
          v8 = *(int **)(v5 + 24);
          if ( v8 )
            sub_100194B0(v8, 928);
        }
        *(float *)(v5 + 928) = 4.0;
      }
      sub_100EC3F0((_DWORD *)v5, (int)sub_10246D70, 0.0, 0);
      v9 = *(float *)(dword_106B31C8 + 12) + 0.2;
    }
    else
    {
      sub_1005C410(v5, 16.0);
      v10 = *(_DWORD *)(v5 + 928);
      v26 = 16.0;
      if ( v10 != COERCE_INT(16.0) )
      {
        if ( *(_BYTE *)(v5 + 84) )
        {
          *(_BYTE *)(v5 + 88) |= 1u;
        }
        else
        {
          v11 = *(int **)(v5 + 24);
          if ( v11 )
            sub_100194B0(v11, 928);
        }
        *(float *)(v5 + 928) = 16.0;
      }
      sub_100EC3F0((_DWORD *)v5, (int)sub_10246D70, 0.0, 0);
      v9 = *(float *)(dword_106B31C8 + 12) + 0.5;
    }
    v18 = v9;
    sub_100EC4A0((int *)v5, v18, 0);
    v12 = *(_DWORD *)(v5 + 816);
    if ( *(_DWORD *)(v5 + 4 * v12 + 868) != 1 )
    {
      if ( *(_BYTE *)(v5 + 84) )
      {
        *(_BYTE *)(v5 + 88) |= 1u;
      }
      else
      {
        v13 = *(int **)(v5 + 24);
        if ( v13 )
          sub_100194B0(v13, 4 * v12 - 4 + 872);
      }
      *(_DWORD *)(v5 + 872 + 4 * v12 - 4) = 1;
    }
    sub_1005C3A0(v5, 1.0);
    if ( *(_BYTE *)(v5 + 119) != 0xFF )
    {
      if ( *(_BYTE *)(v5 + 84) )
      {
        *(_BYTE *)(v5 + 88) |= 1u;
      }
      else
      {
        v14 = *(int **)(v5 + 24);
        if ( v14 )
          sub_100194B0(v14, 116);
      }
      *(_BYTE *)(v5 + 119) = -1;
    }
    sub_1005C620((_BYTE *)(v5 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v5 + 116)));
    sub_100F9B80(v5);
    v6 = v25;
    v4 = a2;
  }
  v15 = (float *)(*(int (__thiscall **)(_DWORD *))(*v4 + 576))(v4);
  v22 = *v15;
  v23 = v15[1];
  v24 = v15[2];
  if ( v28 > 0 && v6 )
    sub_100BD6D0(v6, v28, (int)&v22, 0, 0, 0);
  v16 = v27;
  if ( ((_DWORD)v27[63] & 0x800) != 0 )
    sub_100DAE60((int)v27);
  v21[0] = v16[145] - v22;
  v21[1] = v16[146] - v23;
  v21[2] = v16[147] - v24;
  off_10689714();
  sub_10219BB0(v20);
  v20[0] = &CPVSFilter::`vftable';
  sub_1021A300(v20, (int)&v22);
  ((void (__stdcall *)(_DWORD *, _DWORD, float *, float *, _DWORD))(*off_1065C5EC)[37])(v20, 0.0, &v22, v21, 0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v20);
}
