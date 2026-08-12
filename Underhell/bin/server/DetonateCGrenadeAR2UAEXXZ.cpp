void __thiscall CGrenadeAR2::Detonate(CGrenadeAR2 *this)
{
  int *v2; // ecx
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  float v7; // edx
  float v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  float v13; // [esp+30h] [ebp-10Ch]
  float v14; // [esp+40h] [ebp-FCh]
  _BYTE v15[80]; // [esp+54h] [ebp-E8h] BYREF
  _BYTE v16[76]; // [esp+A4h] [ebp-98h] BYREF
  int v17; // [esp+F0h] [ebp-4Ch]
  int v18; // [esp+F4h] [ebp-48h]
  _DWORD v19[8]; // [esp+F8h] [ebp-44h] BYREF
  float v20[3]; // [esp+118h] [ebp-24h] BYREF
  float v21; // [esp+124h] [ebp-18h]
  float v22; // [esp+128h] [ebp-14h]
  float v23; // [esp+12Ch] [ebp-10h]
  float v24; // [esp+130h] [ebp-Ch]
  float v25; // [esp+134h] [ebp-8h]
  float v26; // [esp+138h] [ebp-4h]
  int savedregs; // [esp+13Ch] [ebp+0h] BYREF

  if ( *((_BYTE *)this + 2109) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v2 = (int *)*((_DWORD *)this + 6);
      if ( v2 )
        sub_100194B0(v2, 2109);
    }
    *((_BYTE *)this + 2109) = 0;
    if ( *((_BYTE *)this + 225) )
    {
      (*(void (__thiscall **)(CGrenadeAR2 *, char *))(*(_DWORD *)this + 480))(this, (char *)this + 225);
      *((_BYTE *)this + 225) = 0;
    }
    v3 = *((_DWORD *)this + 536);
    if ( v3 != -1 )
    {
      v4 = &off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 1];
      v5 = v3 >> 12;
      if ( off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 2] == v5 )
      {
        if ( *v4 )
        {
          if ( off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 2] == v5 )
            v6 = *v4;
          else
            v6 = 0;
          sub_1025FAC0(v6);
          *((_DWORD *)this + 536) = -1;
        }
      }
    }
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    sub_10219BB0(v19);
    v19[0] = &CPASFilter::`vftable';
    sub_1021A370(v19, (int)this + 580);
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD *, _DWORD, char *, _DWORD, _DWORD, int, _DWORD, int, int, _DWORD, int))(*off_1065C5EC)[19])(
      off_1065C5EC,
      v19,
      0.0,
      (char *)this + 580,
      word_10696BA4,
      2.0,
      15,
      0,
      (int)*((float *)this + 528),
      (int)*((float *)this + 532),
      0,
      67);
    if ( (*((_DWORD *)this + 63) & 0x1000) != 0 )
      sub_100DAFD0((int)this);
    v7 = *((float *)this + 120);
    v8 = *((float *)this + 121);
    v24 = *((float *)this + 119);
    v25 = v7;
    v26 = v8;
    off_10689714();
    v9 = *((_DWORD *)this + 63) >> 11;
    v21 = v24 * 60.0;
    v22 = v25 * 60.0;
    v23 = 60.0 * v26;
    if ( (v9 & 1) != 0 )
      sub_100DAE60((int)this);
    v10 = *((_DWORD *)this + 63) >> 11;
    v20[0] = *((float *)this + 145) + v21;
    v20[1] = *((float *)this + 146) + v22;
    v20[2] = *((float *)this + 147) + v23;
    if ( (v10 & 1) != 0 )
      sub_100DAE60((int)this);
    sub_1002A5F0((int)&savedregs, (int)this, (float *)this + 145, v20, 1174421507, (int)this, 0, (int)v16);
    if ( v17 != sub_10280AC0() || v18 )
    {
      if ( v17 && !(*(unsigned __int8 (**)(void))(*(_DWORD *)v17 + 284))() )
        sub_10264E40((int)v16, (int)"SmallScorch");
    }
    else
    {
      sub_10264E40((int)v16, (int)"Scorch");
    }
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    sub_10261B70((float *)this + 145, 25.0, 150.0, 1.0, 750.0, 0, 0);
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    v14 = *((float *)this + 528);
    v13 = *((float *)this + 532);
    v11 = sub_100F4030(this);
    v12 = sub_10248110((int)v15, (int)this, v11, v13, 64, 0);
    sub_100C9F20(v12, (int)this + 580, v14, 0, 0);
    sub_1025FAC0((int)this);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v19);
  }
}
