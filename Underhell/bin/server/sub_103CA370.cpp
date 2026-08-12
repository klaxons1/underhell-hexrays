int __userpurge sub_103CA370@<eax>(int a1@<ecx>, int a2@<ebp>, float *a3, float a4, char a5)
{
  int v5; // edi
  int v6; // eax
  int result; // eax
  int *v8; // edi
  int *v9; // edi
  float *v10; // eax
  double v11; // st7
  double v12; // st5
  unsigned int v13; // edx
  float v14; // [esp+BCh] [ebp-1A8h]
  _DWORD v15[32]; // [esp+D0h] [ebp-194h] BYREF
  _BYTE v16[12]; // [esp+150h] [ebp-114h] BYREF
  float v17[19]; // [esp+15Ch] [ebp-108h] BYREF
  _DWORD v18[3]; // [esp+1A8h] [ebp-BCh] BYREF
  _DWORD v19[2]; // [esp+1B4h] [ebp-B0h] BYREF
  int v20; // [esp+1BCh] [ebp-A8h] BYREF
  float v21[4]; // [esp+1C8h] [ebp-9Ch] BYREF
  float v22[14]; // [esp+1D8h] [ebp-8Ch] BYREF
  __int16 v23; // [esp+210h] [ebp-54h]
  int v24; // [esp+214h] [ebp-50h]
  int v25; // [esp+218h] [ebp-4Ch]
  int v26; // [esp+21Ch] [ebp-48h]
  char v27; // [esp+220h] [ebp-44h]
  int v28; // [esp+22Ch] [ebp-38h]
  float v29; // [esp+230h] [ebp-34h]
  float v30; // [esp+234h] [ebp-30h]
  float v31[3]; // [esp+238h] [ebp-2Ch] BYREF
  int v32; // [esp+244h] [ebp-20h]
  int v33; // [esp+248h] [ebp-1Ch]
  float v34; // [esp+24Ch] [ebp-18h] BYREF
  float v35; // [esp+250h] [ebp-14h]
  float v36; // [esp+254h] [ebp-10h]
  int v37; // [esp+258h] [ebp-Ch]
  void *v38; // [esp+25Ch] [ebp-8h]
  void *retaddr; // [esp+264h] [ebp+0h]

  v37 = a2;
  v38 = retaddr;
  v5 = a1;
  v32 = a1;
  if ( a5 )
  {
    sub_10261B70(a3, 20.0, 150.0, 1.0, 1250.0, 0, 0);
    sub_10219BB0(v18);
    v18[0] = &CBroadcastRecipientFilter::`vftable';
    sub_1021A200((int)v18);
    ((void (__stdcall *)(_DWORD *, _DWORD, float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, _DWORD, int))(*off_1065C5EC)[8])(
      v18,
      0.0,
      a3,
      64.0,
      800.0,
      *(_DWORD *)(v5 + 5684),
      0,
      0,
      2,
      0.1,
      128.0,
      0,
      0.0,
      255,
      255,
      225,
      32,
      0,
      8);
    v34 = *a3;
    v35 = a3[1];
    v6 = *(_DWORD *)(v5 + 5684);
    v36 = a3[2] + 16.0;
    ((void (__stdcall *)(_DWORD *, _DWORD, float *, _DWORD, _DWORD, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, _DWORD, int))(*off_1065C5EC)[8])(
      v18,
      0.0,
      &v34,
      64.0,
      800.0,
      v6,
      0,
      0,
      2,
      0.2,
      64.0,
      0,
      0.0,
      255,
      255,
      225,
      200,
      0,
      8);
    v21[3] = 0.0;
    v22[0] = 0.0;
    v22[1] = 0.0;
    v22[2] = 0.0;
    v22[3] = 0.0;
    v22[4] = 0.0;
    v22[8] = 0.0;
    v22[5] = 0.0;
    v22[9] = 0.0;
    v22[6] = 0.0;
    v22[13] = 0.0;
    v22[7] = 0.0;
    v23 = 0;
    v24 = 0;
    v22[10] = 1.0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v22[11] = 0.0;
    v22[12] = 0.0;
    v21[0] = *a3;
    v21[1] = a3[1];
    v21[2] = a3[2];
    sub_1028E890((int)"VortDispel", (int)v21);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v18);
  }
  v34 = *a3 + a4;
  v35 = a4 + a3[1];
  v36 = a4 + a3[2];
  v31[0] = *a3 - a4;
  v31[1] = a3[1] - a4;
  v31[2] = a3[2] - a4;
  sub_1025F990(v19, (int)v15, 32, 0x2000);
  result = sub_1025F9C0((int)v31, (int)&v34, (int)v19);
  v28 = result;
  v33 = 0;
  if ( result > 0 )
  {
    do
    {
      v8 = &v15[v33];
      if ( sub_102FB3B0(*v8) )
      {
        v9 = (int *)*v8;
        if ( (v9[62] & 0x40000) == 0 )
        {
          v10 = (float *)(*(int (__thiscall **)(int *, int *, float *, int))(*v9 + 520))(v9, &v20, a3, 1);
          sub_1001F180(v22, a3, v10);
          sub_10265570(v31, v32, 0);
          (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v22,
            16395,
            v31,
            v16);
          if ( *(_DWORD *)(dword_106CE63C + 48) )
            sub_101A0AD0((int)v16, (int)v17, 255, 0, 0, 1, 5.0);
          if ( v17[8] >= 1.0 || (int *)LODWORD(v17[16]) == v9 )
          {
            if ( (v9[63] & 0x800) != 0 )
              sub_100DAE60((int)v9);
            v34 = *((float *)v9 + 145) - *a3;
            v35 = *((float *)v9 + 146) - a3[1];
            v36 = 0.0;
            v29 = off_10689714();
            v14 = a4 * 0.75;
            v11 = sub_10134630(v29, 0.0, v14, 1.0, 0.1);
            v30 = v11;
            v12 = 1.5 * a4 * v11;
            v34 = v34 * v12;
            v35 = v35 * v12;
            v36 = v11 * (a4 * 0.5) + v12 * v36;
            sub_100EA150((int)v9, &v34);
            if ( v29 < 128.0 && a5 )
            {
              v13 = (unsigned int)v9[63] >> 11;
              v36 = v30 * 400.0 + v36;
              if ( (v13 & 1) != 0 )
                sub_100DAE60((int)v9);
              sub_102487B0((int)v22, v32, v32, &v34, (float *)v9 + 145, 100.0, 256, 0, 0);
              sub_100D9E70(v9, (int)a3, v22);
            }
            else
            {
              sub_102FF150((int)v9, 128.0, 1);
            }
          }
        }
      }
      result = v33 + 1;
      v33 = result;
    }
    while ( result < v28 );
    v5 = v32;
  }
  if ( a5 )
    return sub_103CA280(v5, -1);
  return result;
}
