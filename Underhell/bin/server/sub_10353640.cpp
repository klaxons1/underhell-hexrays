// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_10353640(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  double v5; // st7
  unsigned int v6; // eax
  double v7; // st6
  double v8; // st5
  int *v9; // ecx
  unsigned int v10; // eax
  double v11; // st7
  int v12; // [esp+64h] [ebp-18Ch]
  float v14[22]; // [esp+74h] [ebp-17Ch] BYREF
  float v15; // [esp+CCh] [ebp-124h] BYREF
  _DWORD v16[8]; // [esp+D8h] [ebp-118h] BYREF
  _DWORD v17[3]; // [esp+F8h] [ebp-F8h] BYREF
  float v18[3]; // [esp+104h] [ebp-ECh] BYREF
  float v19[2]; // [esp+110h] [ebp-E0h] BYREF
  float v20; // [esp+118h] [ebp-D8h]
  float v21[13]; // [esp+11Ch] [ebp-D4h] BYREF
  int v22; // [esp+150h] [ebp-A0h]
  float v23; // [esp+15Ch] [ebp-94h] BYREF
  float v24; // [esp+160h] [ebp-90h]
  float v25; // [esp+164h] [ebp-8Ch]
  float v26; // [esp+168h] [ebp-88h]
  float v27; // [esp+16Ch] [ebp-84h]
  float v28; // [esp+170h] [ebp-80h]
  float v29; // [esp+174h] [ebp-7Ch]
  float v30; // [esp+178h] [ebp-78h]
  float v31; // [esp+17Ch] [ebp-74h]
  float v32; // [esp+180h] [ebp-70h]
  float v33; // [esp+184h] [ebp-6Ch]
  float v34; // [esp+188h] [ebp-68h]
  int v35; // [esp+18Ch] [ebp-64h]
  int v36; // [esp+190h] [ebp-60h]
  float v37; // [esp+194h] [ebp-5Ch]
  float v38; // [esp+198h] [ebp-58h]
  float v39; // [esp+19Ch] [ebp-54h]
  float v40; // [esp+1A0h] [ebp-50h]
  float v41; // [esp+1A4h] [ebp-4Ch]
  int v42; // [esp+1A8h] [ebp-48h]
  int v43; // [esp+1ACh] [ebp-44h]
  int v44; // [esp+1B0h] [ebp-40h]
  char v45; // [esp+1B4h] [ebp-3Ch]
  float v46; // [esp+1C0h] [ebp-30h] BYREF
  float v47; // [esp+1C4h] [ebp-2Ch]
  float v48; // [esp+1C8h] [ebp-28h]
  float v49[3]; // [esp+1CCh] [ebp-24h] BYREF
  float v50; // [esp+1D8h] [ebp-18h] BYREF
  float v51; // [esp+1DCh] [ebp-14h]
  float v52; // [esp+1E0h] [ebp-10h]
  _DWORD v53[3]; // [esp+1E4h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+1F0h] [ebp+0h]

  v53[0] = a2;
  v53[1] = retaddr;
  v12 = a3;
  sub_100BF1B0(a1, "BellyGun", (int)&v46, &v15, 0, 0);
  v5 = v46;
  v6 = a1[1023];
  v50 = v46;
  v7 = v47;
  v51 = v47;
  v8 = v48;
  v52 = v48;
  if ( v6 != -1 )
  {
    v9 = &off_1061BE18[4 * (v6 & 0xFFF) + 1];
    v10 = v6 >> 12;
    if ( v9[1] == v10 )
    {
      if ( *v9 )
      {
        if ( v9[1] == v10 )
          a3 = *v9;
        else
          a3 = 0;
        if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
          sub_100DAE60(a3);
        v5 = *(float *)(a3 + 580);
        v50 = *(float *)(a3 + 580);
        v7 = *(float *)(a3 + 584);
        v51 = *(float *)(a3 + 584);
        v8 = *(float *)(a3 + 588);
        v52 = *(float *)(a3 + 588);
      }
    }
  }
  v49[0] = v5;
  v49[1] = v7;
  v49[2] = v8 - 56755.84;
  sub_1001F180(v14, &v50, v49);
  sub_10265570(v17, (int)a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, float *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v14,
    1174421507,
    v17,
    v18,
    v12,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v18, (int)v19, 255, 0, 0, 1, 5.0);
  sub_10264E40((int)v18, (int)"Scorch");
  v11 = 0.0;
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    ((void (__thiscall *)(int (__stdcall ***)(char), float *, float *, _DWORD))(*off_1061B7A0)[7])(
      off_1061B7A0,
      v19,
      v21,
      0);
    sub_10219BB0(v16);
    v16[0] = &CBroadcastRecipientFilter::`vftable';
    sub_1021A200((int)v16);
    ((void (__stdcall *)(_DWORD *, _DWORD, float *, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, _DWORD, int))(*off_1065C5EC)[8])(
      v16,
      0.0,
      v19,
      0.0,
      256.0,
      dword_10671968,
      0,
      0,
      0,
      0.2,
      10.0,
      0,
      0.0,
      255,
      255,
      255,
      50,
      0,
      8);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
    v11 = 0.0;
  }
  v23 = v11;
  v24 = v11;
  LOWORD(v41) = 0;
  v25 = v11;
  v26 = v11;
  v35 = 0;
  v27 = v11;
  v36 = 0;
  v28 = v11;
  v40 = 0.0;
  v29 = v11;
  v42 = 0;
  v30 = v11;
  v43 = 0;
  v31 = v11;
  v44 = 0;
  v32 = v11;
  v45 = 0;
  v33 = v11;
  v34 = v11;
  v37 = 1.0;
  v38 = v11;
  v39 = v11;
  if ( v22
    && !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v22 + 24)) )
  {
    v39 = 256.0;
    v29 = v21[0];
    v30 = v21[1];
    v31 = v21[2];
    v23 = v19[0];
    v24 = v19[1];
    v25 = v20;
    sub_1028E890((int)"AR2Explosion", (int)&v23);
  }
  v52 = v48 - v20;
  sub_103531F0((int)a1, (int)v53, (float *)a3, (int)a1, v18, -16.0, -16.0, 16.0, 16.0, 16.0, v52);
  v52 = 0.0;
  sub_103531F0((int)a1, (int)v53, (float *)a3, (int)a1, v18, 256.0, 96.0, 0.0, 96.0, 256.0, 96.0);
}
