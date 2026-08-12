void __thiscall sub_103E7AF0(int this, float a2)
{
  double v3; // st7
  double v4; // st6
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  void (__thiscall *v10)(int, int); // edx
  double v11; // st5
  unsigned int v12; // eax
  double v13; // st7
  int v14; // eax
  float *v15; // ecx
  long double v16; // st7
  double v17; // st7
  double v18; // st6
  int v19; // eax
  const char *v20; // eax
  int v21; // eax
  int v22; // eax
  float v23; // [esp+0h] [ebp-74h]
  float v24; // [esp+4h] [ebp-70h]
  float v25; // [esp+8h] [ebp-6Ch]
  float v26; // [esp+8h] [ebp-6Ch]
  int v27; // [esp+10h] [ebp-64h] BYREF
  const char *v28; // [esp+14h] [ebp-60h]
  float v29; // [esp+18h] [ebp-5Ch]
  int v30; // [esp+1Ch] [ebp-58h]
  int v31[6]; // [esp+3Ch] [ebp-38h] BYREF
  _DWORD v32[8]; // [esp+54h] [ebp-20h] BYREF
  float v33; // [esp+7Ch] [ebp+8h]

  v3 = 0.0;
  if ( 0.0 != *(float *)(this + 1664) )
  {
    v4 = *(float *)(this + 1664) * 10.0 * a2 + *(float *)(this + 1660);
    if ( v4 <= 2.0 )
    {
      if ( v4 < 0.0 )
        goto LABEL_5;
    }
    else
    {
      v4 = 2.0;
    }
    v3 = v4;
LABEL_5:
    *(float *)(this + 1660) = v3;
    v25 = v3;
    sub_10078870((_DWORD *)this, "armextensionpose", v25);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
    v3 = 0.0;
  }
  if ( *(_BYTE *)(this + 1668) )
  {
    v5 = *(_DWORD *)(this + 1716);
    if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 1];
    if ( *(_BYTE *)(v6 + 1213) )
    {
      v7 = *(_DWORD *)(this + 1720);
      if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 2] != v7 >> 12 )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 1];
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v8 + 1120) + 8))(100000.0);
      v9 = *(_DWORD *)(this + 1124);
      *(_BYTE *)(this + 1668) = 0;
      *(float *)(this + 1680) = *(float *)(dword_106B31C8 + 12) + 3.0;
      v10 = *(void (__thiscall **)(int, int))(v9 + 272);
      *(float *)(this + 1684) = *(float *)(dword_106B31C8 + 12);
      v10(this + 1124, 6);
      v3 = 0.0;
    }
  }
  else if ( *(float *)(this + 1684) + 5.0 > *(float *)(dword_106B31C8 + 12) )
  {
    v11 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 1684);
    if ( v11 <= 5.0 )
    {
      if ( v11 >= v3 )
        v3 = v11;
    }
    else
    {
      v3 = 5.0;
    }
    v12 = *(_DWORD *)(this + 1720);
    v13 = v3 * 100000.0 * 0.2 + 100000.0;
    if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 2] != v12 >> 12 )
      v14 = 0;
    else
      v14 = off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 1];
    v26 = v13;
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v14 + 1120) + 8))(LODWORD(v26));
    v3 = 0.0;
  }
  if ( *(_BYTE *)(this + 1668)
    || *(float *)(this + 1664) != v3
    || *(float *)(this + 488) != flt_106F1CB4
    || *(float *)(this + 492) != flt_106F1CB8
    || *(float *)(this + 496) != flt_106F1CBC )
  {
    sub_103E59A0((_DWORD *)this);
  }
  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1676) )
  {
    v15 = *(_DWORD *)(this + 1716) == -1
       || off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 2] != *(_DWORD *)(this + 1716) >> 12
        ? 0
        : (float *)off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 1];
    if ( sub_101DC8E0(v15) > 100.0 )
    {
      v16 = fabs(*(float *)(this + 1652)) / *(float *)(this + 1692);
      if ( v16 <= 1.0 )
      {
        if ( v16 >= 0.0 )
        {
          v33 = v16;
          v18 = 0.0;
          v17 = 1.0;
        }
        else
        {
          v18 = 0.0;
          v17 = 1.0;
          v33 = 0.0;
        }
      }
      else
      {
        v17 = 1.0;
        v33 = 1.0;
        v18 = 0.0;
      }
      v24 = v17;
      v23 = v18;
      if ( 0.95 - v33 * 0.1 < RandomFloat(LODWORD(v23), LODWORD(v24)) )
      {
        if ( *(_DWORD *)(this + 1344) )
        {
          v19 = sub_1026A890((unsigned int *)(this + 1716));
          sub_100D78A0(v32, v19, 0.80000001);
          sub_100F8510((float *)&v27);
          v20 = *(const char **)(this + 1344);
          v27 = 2;
          v28 = v20;
          if ( !v20 )
            v28 = String;
          v29 = 1.0;
          v30 = 75;
          v21 = sub_1026A890((unsigned int *)(this + 1716));
          v22 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                  dword_106B31D0,
                  *(_DWORD *)(v21 + 24));
          sub_1023BE40(v32, v22, (int)&v27);
          sub_102375F0(v31);
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v32);
        }
        *(float *)(this + 1676) = *(float *)(dword_106B31C8 + 12) + 5.0;
      }
    }
  }
}
