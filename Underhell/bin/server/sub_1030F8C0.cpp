int __thiscall sub_1030F8C0(float *this, char a2)
{
  int result; // eax
  int v4; // edi
  double v5; // st7
  double v6; // st5
  double v7; // st4
  double v8; // st7
  float v9; // edx
  int (__thiscall *v10)(float *); // edx
  int v11; // edi
  int (__thiscall *v12)(float *, float *, _DWORD); // edx
  float *v13; // eax
  bool v14; // c0
  bool v15; // c3
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  float v20; // [esp+0h] [ebp-94h]
  int v21; // [esp+20h] [ebp-74h] BYREF
  const char *v22; // [esp+24h] [ebp-70h]
  float v23; // [esp+28h] [ebp-6Ch]
  int v24; // [esp+2Ch] [ebp-68h]
  int v25; // [esp+30h] [ebp-64h]
  int v26; // [esp+34h] [ebp-60h]
  int v27; // [esp+38h] [ebp-5Ch]
  float v28; // [esp+3Ch] [ebp-58h]
  int v29; // [esp+40h] [ebp-54h]
  __int16 v30; // [esp+44h] [ebp-50h]
  char v31; // [esp+46h] [ebp-4Eh]
  int v32; // [esp+48h] [ebp-4Ch]
  int v33[5]; // [esp+4Ch] [ebp-48h] BYREF
  __int16 v34; // [esp+60h] [ebp-34h]
  _DWORD v35[8]; // [esp+64h] [ebp-30h] BYREF
  float v36[3]; // [esp+84h] [ebp-10h] BYREF
  float v37; // [esp+90h] [ebp-4h]

  result = dword_106B31C8;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    result = sub_10261B20();
    v4 = result;
    if ( result )
    {
      if ( ((_DWORD)this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
        sub_100DAE60(v4);
      v5 = *(float *)(v4 + 580) - this[145];
      v6 = *(float *)(v4 + 588) - this[147];
      v7 = *(float *)(v4 + 584) - this[146];
      v20 = v6 * v6 + v7 * v7 + v5 * v5;
      v8 = sub_10134630(v20, 14400.0, 921600.0, 1.0, 0.0);
      v9 = *this;
      v37 = v8;
      v10 = *(int (__thiscall **)(float *))(LODWORD(v9) + 580);
      v23 = 1.0;
      v34 = -1;
      v28 = 0.0;
      v21 = 0;
      v22 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 100;
      v27 = 0;
      v29 = 0;
      v30 = 1;
      v31 = 0;
      v32 = -1;
      memset(v33, 0, sizeof(v33));
      v11 = v10(this);
      sub_10219BB0(v35);
      v35[0] = &CPASFilter::`vftable';
      sub_1021A370(v35, v11);
      v12 = *(int (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)this + 580);
      v35[0] = &CPASAttenuationFilter::`vftable';
      v13 = (float *)v12(this, v36, 0.80000001);
      sub_1021A0E0(v35, v13, COERCE_FLOAT(v36));
      v14 = v37 < 0.0;
      v15 = v37 == 0.0;
      if ( a2 )
      {
        if ( v14 || v15 )
        {
          sub_1023C380(this, (int)"NPC_AntlionGuard.FarStepHeavy", 0.0, 0);
        }
        else
        {
          v16 = *((_DWORD *)this + 6);
          v23 = v37;
          v22 = "NPC_AntlionGuard.NearStepHeavy";
          v25 = 1;
          v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v16);
          sub_1023BE40(v35, v17, (int)&v21);
          sub_1023C380(this, (int)"NPC_AntlionGuard.FarStepHeavy", 0.0, 0);
        }
      }
      else
      {
        if ( !v14 && !v15 )
        {
          v18 = *((_DWORD *)this + 6);
          v23 = v37;
          v22 = "NPC_AntlionGuard.NearStepLight";
          v25 = 1;
          v19 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v18);
          sub_1023BE40(v35, v19, (int)&v21);
        }
        sub_1023C380(this, (int)"NPC_AntlionGuard.FarStepLight", 0.0, 0);
      }
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v35);
      return sub_102375F0(v33);
    }
  }
  return result;
}
