int __thiscall sub_102E3DE0(int this)
{
  int v2; // edx
  int (*v3)(void); // eax
  int v4; // edi
  double v5; // st6
  double v6; // st5
  double v7; // st5
  double v8; // rt0
  double v9; // st7
  int v10; // eax
  float v11; // eax
  double v12; // st7
  float v13; // eax
  float *v14; // edi
  float v15; // ecx
  float *v16; // edi
  float v17; // ecx
  int v19; // ecx
  _DWORD v20[8]; // [esp+Ch] [ebp-30h] BYREF
  float v21; // [esp+2Ch] [ebp-10h]
  float v22; // [esp+30h] [ebp-Ch]
  float v23; // [esp+34h] [ebp-8h]
  float v24; // [esp+38h] [ebp-4h]

  if ( 0.0 != *(float *)(this + 3456)
    || *(float *)(this + 3460) != 0.0
    || *(_DWORD *)(this + 3468) != *(_DWORD *)(this + 3464) )
  {
    v2 = *(_DWORD *)dword_106B3CDC;
    v21 = *(float *)(this + 3444);
    v3 = *(int (**)(void))(v2 + 92);
    v22 = *(float *)(this + 3448);
    v23 = *(float *)(this + 3452);
    v4 = v3() & *(_DWORD *)(this + 3464);
    if ( *(float *)(this + 3456) <= 255.0 )
    {
      if ( *(float *)(this + 3456) >= 0.0 )
        v7 = *(float *)(this + 3456);
      else
        v7 = 0.0;
      v8 = v7;
      v6 = 0.0;
      v5 = v8;
    }
    else
    {
      v5 = 255.0;
      v6 = 0.0;
    }
    *(float *)(this + 3456) = v5;
    v9 = v6;
    if ( *(float *)(this + 3460) <= 255.0 )
    {
      if ( v6 <= *(float *)(this + 3460) )
        v9 = *(float *)(this + 3460);
    }
    else
    {
      v9 = 255.0;
    }
    *(float *)(this + 3460) = v9;
    if ( (v4 & 0x20000) != 0 && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3516) > 0.1 )
      v4 &= ~0x20000u;
    sub_10219BB0(v20);
    v20[0] = &CSingleUserRecipientFilter::`vftable';
    sub_10219D00((int)v20, (int *)this);
    sub_10219A50(v20);
    sub_10154B40((int)v20, "Damage");
    sub_10154BB0((int)*(float *)(this + 3460));
    sub_10154BB0((int)*(float *)(this + 3456));
    sub_10154C40(v4);
    sub_10154C70(v21);
    sub_10154C70(v22);
    sub_10154C70(v23);
    sub_10154B90();
    v10 = *(_DWORD *)(this + 3464);
    *(float *)(this + 3456) = 0.0;
    *(_DWORD *)(this + 3468) = v10;
    *(float *)(this + 3460) = 0.0;
    *(_DWORD *)(this + 3464) &= (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 84))(dword_106B3CDC);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v20);
  }
  if ( sub_102DA6D0() )
  {
    v19 = *(_DWORD *)(this + 5128);
    v24 = -1.0;
    if ( v19 != COERCE_INT(-1.0) )
    {
      (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5128);
      *(float *)(this + 5128) = -1.0;
      return sub_101ED5A0((char *)this);
    }
  }
  else
  {
    if ( !*(_DWORD *)(dword_106E08E4 + 48) )
    {
      if ( *(_BYTE *)(this + 3369) )
      {
        v11 = *(float *)(this + 5128);
        v24 = v11 - (*(float *)(dword_106B31C8 + 16) + *(float *)(dword_106B31C8 + 16));
        if ( LODWORD(v11) != LODWORD(v24) )
        {
          (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5128);
          *(float *)(this + 5128) = v24;
        }
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 1264))(this) )
      {
        v12 = *(_BYTE *)(this + 5040) ? 0.80000001 : *(float *)(dword_106E09BC + 44);
        v13 = *(float *)(this + 5128);
        v24 = v13 - v12 * *(float *)(dword_106B31C8 + 16);
        if ( LODWORD(v13) != LODWORD(v24) )
        {
          (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5128);
          *(float *)(this + 5128) = v24;
        }
      }
      v14 = (float *)(this + 5128);
      if ( *(float *)(this + 5128) < 1.0 )
      {
        v15 = *v14;
        if ( *(int *)(this + 5044) <= 0 )
        {
          v24 = 5.0;
          if ( LODWORD(v15) != COERCE_INT(5.0) )
          {
            (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5128);
            *v14 = 5.0;
          }
          if ( *(_BYTE *)(this + 3369) )
            (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
              dword_106B31D0,
              *(_DWORD *)(this + 24),
              "NightVision_Toggle");
        }
        else
        {
          v24 = 100.0;
          if ( LODWORD(v15) != COERCE_INT(100.0) )
          {
            (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5128);
            *v14 = 100.0;
          }
          sub_102E20A0((int *)(this + 5044), 0);
        }
      }
    }
    v16 = (float *)(this + 5128);
    if ( *(float *)(this + 5128) > 100.0 )
    {
      v17 = *v16;
      v24 = 100.0;
      if ( LODWORD(v17) != COERCE_INT(100.0) )
      {
        (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5128);
        *v16 = 100.0;
        return sub_101ED5A0((char *)this);
      }
    }
  }
  return sub_101ED5A0((char *)this);
}
