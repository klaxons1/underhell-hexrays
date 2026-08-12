// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_1013CE20@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  float v6; // edi
  double v7; // st7
  double v8; // st6
  double v9; // st5
  float v10; // edx
  float v11; // ecx
  int v12; // eax
  char v13; // cl
  double v14; // st7
  double v15; // st7
  float v16; // edx
  int v17; // eax
  void (__stdcall *v18)(_DWORD *, _DWORD, int *, int, _DWORD); // eax
  int v19; // eax
  unsigned int v20; // ecx
  int *v21; // edx
  unsigned int v22; // ecx
  int v23; // edi
  unsigned int v24; // eax
  int v25; // eax
  double v26; // st7
  unsigned int v27; // eax
  int v28; // edi
  int v29; // eax
  int (__thiscall **v30)(int, int); // edx
  int v31; // eax
  int v32; // esi
  _BYTE v36[12]; // [esp+50h] [ebp-114h] BYREF
  float v37[3]; // [esp+5Ch] [ebp-108h] BYREF
  float v38[16]; // [esp+68h] [ebp-FCh] BYREF
  float v39[16]; // [esp+A8h] [ebp-BCh] BYREF
  int v40; // [esp+E8h] [ebp-7Ch]
  _DWORD v41[8]; // [esp+FCh] [ebp-68h] BYREF
  float v42[3]; // [esp+11Ch] [ebp-48h] BYREF
  float v43[3]; // [esp+128h] [ebp-3Ch] BYREF
  float v44[2]; // [esp+134h] [ebp-30h] BYREF
  float v45; // [esp+13Ch] [ebp-28h]
  int v46; // [esp+140h] [ebp-24h] BYREF
  float v47; // [esp+144h] [ebp-20h]
  float v48; // [esp+148h] [ebp-1Ch]
  float v49; // [esp+14Ch] [ebp-18h]
  int v50; // [esp+150h] [ebp-14h]
  int v51; // [esp+154h] [ebp-10h]
  int v52; // [esp+158h] [ebp-Ch]
  void *v53; // [esp+15Ch] [ebp-8h]
  void *retaddr; // [esp+164h] [ebp+0h]

  v52 = a2;
  v53 = retaddr;
  v6 = 0.0;
  *(_DWORD *)(a1 + 460) = 0;
  sub_100D8500((_DWORD *)a1);
  sub_10112C00(a1 + 320, 0);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v7 = *(float *)(a1 + 580);
  v43[0] = *(float *)(a1 + 580);
  v8 = *(float *)(a1 + 584);
  v43[1] = *(float *)(a1 + 584);
  v9 = *(float *)(a1 + 588) + 8.0;
  v43[2] = v9;
  v44[0] = v7;
  v44[1] = v8;
  v45 = v9 - 40.0;
  sub_1001F180(v39, v43, v44);
  sub_10265570(a1, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v39,
    16443,
    v42,
    v36,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v36, (int)v37, 255, 0, 0, 1, 5.0);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v10 = *(float *)(a1 + 580);
  v11 = *(float *)(a1 + 588);
  v47 = *(float *)(a1 + 584);
  *(float *)&v46 = v10;
  v48 = v11;
  if ( 1.0 != v38[5] )
  {
    *(float *)&v46 = v38[0] * 24.0 + v37[0];
    v47 = v38[1] * 24.0 + v37[1];
    v48 = 24.0 * v38[2] + v37[2];
  }
  if ( (*(_BYTE *)(a1 + 248) & 0x10) == 0 )
    sub_10264E40(v36, "Scorch");
  v12 = *(_DWORD *)(a1 + 248);
  if ( (v12 & 4) != 0 )
    LODWORD(v6) = 64;
  if ( (v12 & 0x40) != 0 )
    LODWORD(v6) |= 4u;
  if ( (v12 & 0x80u) != 0 )
    LODWORD(v6) |= 0x20u;
  v13 = *(_BYTE *)(a1 + 113);
  if ( v13 == 4 )
  {
    LODWORD(v6) |= 0x10u;
  }
  else if ( v13 != 5 )
  {
    LODWORD(v6) |= 1u;
  }
  if ( (v12 & 0x200) != 0 )
    LODWORD(v6) |= 8u;
  if ( (v12 & 0x400) != 0 )
    LODWORD(v6) |= 2u;
  if ( (v12 & 0x100) != 0 )
    LODWORD(v6) |= 0x80u;
  v50 = *(int *)(a1 + 804);
  if ( v50 <= 0 )
    v14 = (double)*(int *)(a1 + 800) * 2.5;
  else
    v14 = (double)v50;
  v50 = (int)v14;
  sub_10219BB0(v41);
  v41[0] = &CPASFilter::`vftable';
  sub_1021A370(&v46);
  if ( (*(_BYTE *)(a1 + 248) & 4) != 0 )
    v15 = 0.0;
  else
    v15 = (double)*(int *)(a1 + 808) * 0.1;
  if ( *(__int16 *)(a1 + 820) >= 1 )
    v51 = *(unsigned __int16 *)(a1 + 820);
  else
    LOWORD(v51) = word_10696BA4;
  v16 = *(float *)(a1 + 800);
  v17 = (int)*off_1065C5EC;
  v51 = 67;
  v18 = *(void (__stdcall **)(_DWORD *, _DWORD, int *, int, _DWORD))(v17 + 76);
  *(float *)&v50 = 0.0;
  v49 = v16;
  v48 = 0.0;
  v47 = v6;
  v46 = 15;
  v45 = v15;
  v18(v41, 0.0, &v46, 67, LODWORD(v45));
  v19 = *(_DWORD *)(a1 + 248);
  if ( (v19 & 1) == 0 )
  {
    v20 = *(_DWORD *)(a1 + 412);
    if ( v20 != -1
      && (v21 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1],
          v22 = v20 >> 12,
          off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] == v22)
      && *v21 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] == v22 )
        v51 = *v21;
      else
        v51 = 0;
    }
    else
    {
      v51 = a1;
    }
    v23 = *(_DWORD *)(a1 + 828);
    if ( v23 == -1 )
      v23 = ((v19 & 0x4000) == 0) << 6;
    v24 = *(_DWORD *)(a1 + 824);
    if ( v24 != -1
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 824) & 0xFFF) + 2] == v24 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 824) & 0xFFF) + 1] )
    {
      v49 = *(float *)(a1 + 824);
    }
    else
    {
      v49 = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    }
    if ( v49 == NAN || off_1061BE18[4 * (LOWORD(v49) & 0xFFF) + 2] != LODWORD(v49) >> 12 )
      v25 = 0;
    else
      v25 = off_1061BE18[4 * (LOWORD(v49) & 0xFFF) + 1];
    v49 = (float)*(int *)(a1 + 800);
    sub_10248110(v25, v51, v49, v23, 0);
    if ( (*(_DWORD *)(a1 + 248) & 0x2000) != 0 )
      v40 |= 0x8000000u;
    v26 = 0.0;
    if ( 0.0 != *(float *)(a1 + 812) )
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      {
        sub_100DAE60(a1);
        v26 = 0.0;
      }
      v39[4] = *(float *)(a1 + 580);
      v39[5] = *(float *)(a1 + 584);
      v39[6] = *(float *)(a1 + 588);
      v39[1] = *(float *)(a1 + 812);
      v39[2] = v26;
      v39[3] = v26;
    }
    v27 = *(_DWORD *)(a1 + 836);
    if ( v27 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 836) & 0xFFF) + 2] != v27 >> 12 )
      v28 = 0;
    else
      v28 = off_1061BE18[4 * (*(_DWORD *)(a1 + 836) & 0xFFF) + 1];
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v29 = *(_DWORD *)(a1 + 832);
    v49 = (float)v50;
    sub_100C9F20((int)v39, a1 + 580, v49, v29, v28);
  }
  sub_100EC3F0((_DWORD *)a1, (int)sub_1013CB10, 0.0, 0);
  *(float *)&v50 = *(float *)(dword_106B31C8 + 12) + 0.3;
  sub_100EC4A0((int *)a1, *(float *)&v50, 0);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v30 = *(int (__thiscall ***)(int, int))dword_106B31F4;
  v51 = 0;
  if ( ((*v30)(dword_106B31F4, a1 + 580) & 0x20) != 0 && (*(_BYTE *)(a1 + 248) & 0x20) == 0 )
  {
    v31 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3);
    if ( v31 > 0 )
    {
      v32 = v31;
      do
      {
        sub_10422540(v38, v42);
        sub_100E3960((int)"spark_shower", (float *)&v46, v42, 0);
        --v32;
      }
      while ( v32 );
    }
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v41);
}
