void __thiscall sub_103FEDE0(_DWORD *this, float *a2)
{
  int v3; // edi
  float v4; // ecx
  float v5; // edx
  const char *v6; // eax
  int v7; // eax
  int v8; // esi
  float *v9; // eax
  int v10; // esi
  float *v11; // eax
  unsigned int v12; // eax
  int *v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // ecx
  float v20; // [esp+18h] [ebp-64h]
  _DWORD v21[8]; // [esp+2Ch] [ebp-50h] BYREF
  float v22[3]; // [esp+4Ch] [ebp-30h] BYREF
  float v23[3]; // [esp+58h] [ebp-24h] BYREF
  float v24; // [esp+64h] [ebp-18h]
  float v25; // [esp+68h] [ebp-14h]
  float v26; // [esp+6Ch] [ebp-10h]
  float v27; // [esp+70h] [ebp-Ch] BYREF
  float v28; // [esp+74h] [ebp-8h]
  float v29; // [esp+78h] [ebp-4h]

  if ( a2 )
  {
    v3 = sub_100D1940(this);
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
      {
        v4 = a2[1];
        v5 = a2[2];
        v27 = *a2;
        v28 = v4;
        v29 = v5;
        v6 = "sprites/lgtning_noz.vmt";
        if ( *(_BYTE *)(dword_106B3CDC + 12) != 1 )
          v6 = "sprites/orangelight1.vmt";
        v7 = sub_100FB5C0(v6, 8.0);
        v8 = v7;
        if ( v7 )
        {
          sub_100FAD20(v7, &v27, this);
          sub_1005BC90(v8, 1);
          sub_1005C3A0(v8, 6.4000001);
          sub_1005C410(v8, 12.8);
          sub_100FB020(v8, 255);
          sub_1005C620((_BYTE *)(v8 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v8 + 116)));
          sub_100EC3F0((_DWORD *)v8, (int)sub_10246D70, 0.0, 0);
          v20 = *(float *)(dword_106B31C8 + 12) + 0.1;
          sub_100EC4A0((int *)v8, v20, 0);
          sub_100F9B80(v8);
          sub_100FA790(v8, 2.0);
        }
        v9 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v3 + 968))(v3, v23);
        v24 = v27 - *v9;
        v25 = v28 - v9[1];
        v26 = v29 - v9[2];
        off_10689714();
        sub_10219BB0(v21);
        v21[0] = &CPVSFilter::`vftable';
        sub_1021A300(v21, (int)&v27);
        v23[0] = v27 - v24 * 4.0;
        v23[1] = v28 - v25 * 4.0;
        v23[2] = v29 - 4.0 * v26;
        v10 = (int)*off_1065C5EC;
        v11 = sub_1001F010(v22, -1.0, 1.0);
        (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, float *, float *, _DWORD))(v10 + 148))(
          off_1065C5EC,
          v21,
          0.0,
          v23,
          v11,
          0);
        v12 = this[373];
        if ( v12 != -1 )
        {
          v13 = &off_1061BE18[4 * (this[373] & 0xFFF) + 1];
          v14 = v12 >> 12;
          if ( off_1061BE18[4 * (this[373] & 0xFFF) + 2] == v14 )
          {
            if ( *v13 )
            {
              if ( off_1061BE18[4 * (this[373] & 0xFFF) + 2] == v14 )
                v15 = *v13;
              else
                v15 = 0;
              sub_10242BA0(v15);
              v16 = this[373];
              if ( v16 == -1 || off_1061BE18[4 * (this[373] & 0xFFF) + 2] != v16 >> 12 )
                v17 = 0;
              else
                v17 = off_1061BE18[4 * (this[373] & 0xFFF) + 1];
              sub_102428B0(v17, 2.0, 0.1);
              v18 = this[373];
              if ( v18 == -1 || off_1061BE18[4 * (this[373] & 0xFFF) + 2] != v18 >> 12 )
                v19 = 0;
              else
                v19 = off_1061BE18[4 * (this[373] & 0xFFF) + 1];
              sub_10242820(v19, 0, 0.1);
            }
          }
        }
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v21);
      }
    }
  }
}
