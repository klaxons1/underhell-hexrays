void __thiscall sub_103DD4C0(int this, int a2)
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // eax
  float *v5; // eax
  int v6; // eax
  float *v7; // eax
  int v8; // eax
  int v9; // eax
  double v10; // st7
  double v11; // st6
  double v12; // rt1
  double v13; // st6
  double v14; // st7
  int v15; // ecx
  int v16; // eax
  int (__thiscall *v17)(int); // eax
  int v18; // eax
  float *v19; // eax
  int v20; // eax
  double v21; // st7
  int v22; // eax
  float *v23; // [esp+4h] [ebp-54h]
  float v24; // [esp+4h] [ebp-54h]
  float *v25; // [esp+8h] [ebp-50h]
  float v26; // [esp+8h] [ebp-50h]
  float v27; // [esp+8h] [ebp-50h]
  float v28; // [esp+8h] [ebp-50h]
  int v29[8]; // [esp+14h] [ebp-44h] BYREF
  _BYTE v30[12]; // [esp+34h] [ebp-24h] BYREF
  float v31; // [esp+40h] [ebp-18h] BYREF
  float v32; // [esp+44h] [ebp-14h]
  float v33; // [esp+48h] [ebp-10h]
  float v34; // [esp+4Ch] [ebp-Ch] BYREF
  float v35; // [esp+50h] [ebp-8h]
  float v36; // [esp+54h] [ebp-4h]

  v2 = this;
  switch ( *(_DWORD *)a2 )
  {
    case 0x4A:
    case 0x4B:
    case 0x96:
    case 0x9B:
      return;
    case 0x4E:
      sub_100D78A0(v29, this, 0.80000001);
      v22 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v2 + 24));
      sub_1023C580(a2, v2, v29, v22, (int)"NPC_Sniper.Reload", 0, 0.0, 0);
      *(_BYTE *)(v2 + 3644) = 1;
      sub_10027CD0((_DWORD *)v2, 0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v29);
      return;
    case 0x97:
      *(_BYTE *)(this + 3816) = 0;
      if ( (unsigned __int8)sub_103E0CF0(0) && (*(_DWORD *)(sub_1026A890((unsigned int *)(v2 + 3660)) + 248) & 8) == 0 )
      {
        sub_103D86A0((_DWORD *)v2);
        *(_DWORD *)(v2 + 3660) = -1;
      }
      if ( (*(_DWORD *)(v2 + 248) & 0x20000) != 0 )
      {
        sub_10022750((float *)v2, 0.25, 0.0);
        v25 = &flt_106F1CA8;
        v23 = (float *)(v2 + 3628);
      }
      else
      {
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 368))(v2);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9) )
        {
          v26 = 0.0;
          if ( *(float *)(dword_106B31C8 + 12) - *(float *)(v2 + 3804) > 3.0 )
          {
            sub_10022750((float *)v2, *(float *)(v2 + 3620), v26);
            *(float *)(v2 + 3640) = *(float *)(v2 + 3620);
          }
          else
          {
            sub_10022750((float *)v2, 0.40000001, v26);
            *(float *)(v2 + 3640) = 0.40000001;
          }
        }
        else
        {
          if ( *(float *)(v2 + 3624) <= 0.0 )
          {
            v11 = 0.0;
            v10 = *(float *)(v2 + 3620);
          }
          else
          {
            v10 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    0.0,
                    *(float *)(v2 + 3624))
                + *(float *)(v2 + 3620);
            v11 = 0.0;
          }
          v12 = v11;
          v13 = v10;
          v14 = v12;
          v15 = *(_DWORD *)(v2 + 248) >> 20;
          *(float *)(v2 + 3640) = v13;
          if ( (v15 & 1) != 0 )
            *(float *)(v2 + 3640) = v13 * 0.75;
          v27 = v14;
          sub_10022750((float *)v2, *(float *)(v2 + 3640), v27);
        }
        if ( (*(_DWORD *)(v2 + 248) & 0x200000) != 0 )
        {
          sub_103DD1A0(v2, (float *)(v2 + 3628), &flt_106F1CA8);
          goto LABEL_30;
        }
        v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 368))(v2);
        sub_10422220(v16 + 728, &v34);
        v17 = *(int (__thiscall **)(int))(*(_DWORD *)v2 + 368);
        v34 = v34 * 300.0;
        v35 = v35 * 300.0;
        v36 = 300.0 * v36;
        v18 = v17(v2);
        v19 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v18 + 504))(v18, v30);
        v34 = *v19 + v34;
        v35 = v19[1] + v35;
        v25 = &v31;
        v23 = &v34;
        v36 = v19[2] + v36;
        v31 = 16.0;
        v32 = 16.0;
        v33 = 16.0;
      }
      sub_103DD1A0(v2, v23, v25);
LABEL_30:
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 368))(v2);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 320))(v20) )
        sub_103D8D50(v2);
      return;
    case 0x98:
      sub_10022750((float *)this, *(float *)(a2 + 4), 0.0);
      v31 = 64.0;
      v32 = 64.0;
      v33 = 64.0;
      sub_103DD1A0(v2, (float *)(v2 + 3664), &v31);
      return;
    case 0x99:
      v21 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.0,
              1.0)
          + 1.0;
      this = v2;
      *(float *)(v2 + 3640) = v21;
      v28 = 0.0;
      goto LABEL_33;
    case 0x9A:
      if ( sub_1026A890((unsigned int *)(this + 3660)) )
      {
        v6 = sub_1026A890((unsigned int *)(v2 + 3660));
        sub_10022750((float *)v2, *(float *)(v6 + 108), 0.0);
        if ( (*(_DWORD *)(sub_1026A890((unsigned int *)(v2 + 3660)) + 248) & 0x10) != 0 )
        {
          v7 = (float *)sub_1026A890((unsigned int *)(v2 + 3660));
          *(float *)(v2 + 3628) = v7[179];
          *(float *)(v2 + 3632) = v7[180];
          *(float *)(v2 + 3636) = v7[181];
        }
        v8 = sub_1026A890((unsigned int *)(v2 + 3660));
        sub_103DD1A0(v2, (float *)(v8 + 716), &flt_106F1CA8);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 1312))(v2, 1);
      }
      return;
    case 0x9C:
      v28 = 0.0;
      v21 = 0.69999999;
LABEL_33:
      v24 = v21;
      sub_10022750((float *)this, v24, v28);
      if ( (unsigned __int8)sub_103DBBE0(*(float *)(a2 + 4)) )
      {
        sub_103D8550((int *)v2);
        sub_103DD1A0(v2, (float *)(v2 + 3676), &flt_106F1CA8);
      }
      else
      {
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 1312))(v2, "Frustrated shot with no enemy");
      }
      return;
    case 0x9D:
      if ( *(int *)(dword_106B31C8 + 20) <= 1 )
        v3 = sub_10261B20();
      else
        v3 = 0;
      sub_10019680((_DWORD *)(v2 + 3660), v3);
      sub_10022750((float *)v2, 4.0, 0.0);
      v4 = (_DWORD *)sub_1026A890((unsigned int *)(v2 + 3660));
      v5 = (float *)sub_10019640(v4);
      sub_103DD1A0(v2, v5, &flt_106F1CA8);
      return;
    default:
      sub_10046510(this, a2);
      return;
  }
}
