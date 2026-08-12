void __usercall sub_1008DF90(int a1@<ebp>, float *a2, float *a3, int a4)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st7
  float v8; // [esp+1Ch] [ebp-1E0h]
  float v9[20]; // [esp+50h] [ebp-1ACh] BYREF
  float v10[22]; // [esp+A0h] [ebp-15Ch] BYREF
  float v11[5]; // [esp+F8h] [ebp-104h] BYREF
  int v12; // [esp+10Ch] [ebp-F0h]
  int v13; // [esp+118h] [ebp-E4h] BYREF
  _BYTE v14[32]; // [esp+1A0h] [ebp-5Ch] BYREF
  int v15; // [esp+1C0h] [ebp-3Ch] BYREF
  float v16; // [esp+1C4h] [ebp-38h]
  float v17; // [esp+1C8h] [ebp-34h]
  float v18; // [esp+1CCh] [ebp-30h] BYREF
  float v19; // [esp+1D0h] [ebp-2Ch]
  float v20; // [esp+1D4h] [ebp-28h]
  float v21; // [esp+1D8h] [ebp-24h] BYREF
  float v22; // [esp+1DCh] [ebp-20h]
  float v23; // [esp+1E0h] [ebp-1Ch]
  int v24; // [esp+1E4h] [ebp-18h] BYREF
  float v25; // [esp+1E8h] [ebp-14h]
  const char *v26; // [esp+1ECh] [ebp-10h]
  int v27; // [esp+1F0h] [ebp-Ch]
  void *v28; // [esp+1F4h] [ebp-8h]
  void *retaddr; // [esp+1FCh] [ebp+0h]

  v27 = a1;
  v28 = retaddr;
  v25 = 72.0;
  v17 = 0.1;
  v16 = 0.1;
  v4 = sub_101356D0();
  v21 = *(float *)v4;
  v22 = *(float *)(v4 + 4);
  v23 = *(float *)(v4 + 8);
  switch ( a4 )
  {
    case 1:
      v25 = 24.0;
      v26 = "Bullets.DefaultNearmiss";
      sub_1000E430(v9, a2, a3);
      v18 = v21;
      v19 = v22;
      v20 = v23 - 24.0;
      sub_1000E430(v10, &v21, &v18);
      sub_10090510(v9, v10, &v15, &v24);
      v5 = 1.0;
      if ( *(float *)&v24 > 1.0 || (v5 = *(float *)&v24, *(float *)&v24 >= 0.0) )
        v23 = v23 - v5 * 24.0;
      else
        v23 = v23 - 0.0 * 24.0;
      goto LABEL_9;
    case 2:
      v26 = "Bullets.GunshipNearmiss";
      goto LABEL_9;
    case 4:
      v26 = "Bullets.StriderNearmiss";
      goto LABEL_9;
    case 16:
      v26 = "Underwater.BulletImpact";
      v25 = 48.0;
      v17 = 0.30000001;
      v16 = 0.60000002;
LABEL_9:
      if ( flt_1042C73C - *((float *)off_103DC81C + 3) <= 0.0 )
      {
        v6 = sub_101F12F0(&v21, a2, a3, 0);
        if ( v25 * v25 > v6 )
        {
          sub_1000B450(v11);
          if ( (unsigned __int8)sub_10120700(v26, v11, 0) )
          {
            v18 = *a3 - *a2;
            v19 = a3[1] - a2[1];
            v20 = a3[2] - a2[2];
            off_103EDFEC();
            sub_1015BB00(v14);
            if ( v12 <= 50 )
            {
              v7 = 4.0;
            }
            else
            {
              v24 = v12 - 50;
              v7 = 20.0 / (double)(v12 - 50);
            }
            v8 = v7;
            (*(void (__thiscall **)(int, _BYTE *, _DWORD, int, int *, _DWORD, _DWORD, _DWORD, _DWORD, float *, float *, _DWORD, int, _DWORD, int))(*(_DWORD *)dword_10413194 + 20))(
              dword_10413194,
              v14,
              0,
              6,
              &v13,
              LODWORD(v11[1]),
              LODWORD(v8),
              0,
              LODWORD(v11[2]),
              a2,
              &v18,
              0,
              1,
              0.0,
              -1);
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
          }
          flt_1042C73C = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                           dword_10413198,
                           LODWORD(v17),
                           LODWORD(v16))
                       + *((float *)off_103DC81C + 3);
        }
      }
      break;
    default:
      return;
  }
}
