int __thiscall sub_10355CF0(int this)
{
  float v2; // edx
  unsigned int v3; // eax
  float *v4; // esi
  int *v5; // ecx
  unsigned int v6; // eax
  _DWORD *v7; // ecx
  unsigned int v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  int v11; // ebx
  int *v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // esi
  const char *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // esi
  unsigned int v21; // ecx
  int *v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // eax
  int **v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // eax
  int *v29; // ecx
  double v30; // st7
  int *v31; // eax
  int *v32; // eax
  int v34; // [esp+4h] [ebp-A8h]
  float v35; // [esp+28h] [ebp-84h]
  _DWORD v36[8]; // [esp+3Ch] [ebp-70h] BYREF
  float v37[3]; // [esp+5Ch] [ebp-50h] BYREF
  int v38; // [esp+68h] [ebp-44h] BYREF
  float v39; // [esp+6Ch] [ebp-40h]
  float v40; // [esp+70h] [ebp-3Ch]
  int v41; // [esp+74h] [ebp-38h] BYREF
  float v42; // [esp+78h] [ebp-34h]
  float v43; // [esp+7Ch] [ebp-30h]
  float v44; // [esp+80h] [ebp-2Ch] BYREF
  float v45; // [esp+84h] [ebp-28h]
  float v46; // [esp+88h] [ebp-24h]
  float v47[3]; // [esp+8Ch] [ebp-20h] BYREF
  float v48; // [esp+98h] [ebp-14h] BYREF
  float v49; // [esp+9Ch] [ebp-10h]
  float v50; // [esp+A0h] [ebp-Ch]
  int v51; // [esp+A4h] [ebp-8h]
  int v52; // [esp+A8h] [ebp-4h]

  sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  if ( *(_BYTE *)(this + 224) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 472))(this, this + 224);
    *(_BYTE *)(this + 224) = 2;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 408))(this);
  sub_10352CE0((_DWORD *)this);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v2 = *(float *)(this + 480);
  v47[0] = *(float *)(this + 476);
  v47[2] = 0.0;
  v47[1] = v2;
  sub_100DD660(this, v47);
  v3 = *(_DWORD *)(this + 4224);
  v4 = (float *)this;
  if ( v3 != -1
    && (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 1],
        v6 = v3 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 2] == v6)
    && *v5 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 2] == v6 )
      v7 = (_DWORD *)*v5;
    else
      v7 = 0;
    sub_1023C380(v7, (int)"NPC_CombineGunship.Explode", 0.0, 0);
    v8 = *(_DWORD *)(this + 4224);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      sub_100DAE60(v9);
    v10 = *(_DWORD *)(this + 4224);
    v48 = *(float *)(v9 + 580);
    v49 = *(float *)(v9 + 584);
    v50 = *(float *)(v9 + 588);
    if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
      v4 = 0;
    else
      v4 = (float *)off_1061BE18[4 * (v10 & 0xFFF) + 1];
  }
  else
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_CombineGunship.Explode", 0.0, 0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v48 = *(float *)(this + 580);
    v49 = *(float *)(this + 584);
    v50 = *(float *)(this + 588);
  }
  v11 = 6;
  do
  {
    v52 = sub_10219A30();
    v44 = (double)v52 * 0.000030518509 * 400.0 - 200.0;
    v52 = sub_10219A30();
    v45 = (double)v52 * 0.000030518509 * 400.0 - 200.0;
    v52 = sub_10219A30();
    *(float *)&v41 = -90.0;
    v42 = 0.0;
    v43 = 0.0;
    *(float *)&v38 = v44 + v48;
    v39 = v45 + v49;
    v40 = (double)v52 * 0.000030518509 * 400.0 - 200.0 + v50;
    sub_1013D530((float *)&v38, (float *)&v41, this, 10, 10, 0, 0.0, 0, 0, -1);
    --v11;
  }
  while ( v11 );
  v12 = (int *)sub_102AF950(&v48);
  if ( v12 )
    sub_100F5880(v12, 10.0);
  v13 = *(_DWORD *)(this + 4228);
  if ( v13 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 4228) & 0xFFF) + 2] == v13 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 4228) & 0xFFF) + 1] )
  {
    v25 = *(_DWORD *)(this + 4088);
    if ( v25 != -1 )
    {
      v26 = (int **)&off_1061BE18[4 * (*(_DWORD *)(this + 4088) & 0xFFF) + 1];
      v27 = v25 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 4088) & 0xFFF) + 2] == *(_DWORD *)(this + 4088) >> 12 )
      {
        if ( *v26 )
        {
          v28 = *(_DWORD *)(this + 4224);
          if ( v28 != -1
            && off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 2] == v28 >> 12
            && off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 1] )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(this + 4088) & 0xFFF) + 2] == v27 )
            {
              v29 = *v26;
              v30 = 3.0;
            }
            else
            {
              v30 = 3.0;
              v29 = 0;
            }
          }
          else
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(this + 4088) & 0xFFF) + 2] == v27 )
              v29 = *v26;
            else
              v29 = 0;
            v30 = 0.1;
          }
          v35 = v30;
          sub_100F5880(v29, v35);
          *(_DWORD *)(this + 4088) = -1;
        }
      }
    }
  }
  else
  {
    v14 = *((_DWORD *)v4 + 63);
    v38 = *((int *)v4 + 124);
    v39 = v4[122];
    v40 = v4[123];
    if ( (v14 & 0x1000) != 0 )
      sub_100DAFD0((int)v4);
    if ( ((_DWORD)v4[63] & 0x800) != 0 )
      sub_100DAE60((int)v4);
    if ( ((_DWORD)v4[63] & 0x800) != 0 )
      sub_100DAE60((int)v4);
    v34 = *((_DWORD *)v4 + 106);
    v15 = (*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 24))(v4);
    sub_10217520(v15, v34, (int)(v4 + 145), (int)(v4 + 176), (int)(v4 + 119), (int)&v38, 1.0, 800.0, 9, v4, 1);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10219BB0(v36);
    v36[0] = &CPVSFilter::`vftable';
    sub_1021A300(v36, this + 580);
    v52 = 20;
    do
    {
      v51 = sub_10219A30();
      *(float *)&v41 = (double)v51 * 0.000030518509 * 200.0 - 100.0;
      v51 = sub_10219A30();
      v42 = (double)v51 * 0.000030518509 * 200.0 - 100.0;
      v51 = sub_10219A30();
      v44 = *(float *)&v41 * 10.0;
      v45 = v42 * 10.0;
      v46 = ((double)v51 * 0.000030518509 * 200.0 - 100.0) * 10.0;
      v16 = *(_DWORD *)dword_106B31F0;
      v17 = sub_10215C30((int)&dword_106C29C8, "MetalChunks", -1);
      v18 = (*(int (__thiscall **)(int, const char *))(v16 + 8))(dword_106B31F0, v17);
      v19 = *(_DWORD *)(this + 252);
      v37[0] = 40.0;
      v37[1] = 40.0;
      v37[2] = 40.0;
      v20 = v18;
      if ( (v19 & 0x800) != 0 )
        sub_100DAE60(this);
      ((void (__cdecl *)(_DWORD *, _DWORD, int, float *, float *, float *, int, int, int, _DWORD, int))(*off_1065C5EC)[12])(
        v36,
        0.0,
        this + 580,
        &flt_106F1CB4,
        v37,
        &v44,
        v20,
        400,
        1,
        2.5,
        2);
      --v52;
    }
    while ( v52 );
    v21 = *(_DWORD *)(this + 4224);
    if ( v21 != -1 )
    {
      v22 = &off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 1];
      v23 = v21 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 2] == v23 )
      {
        if ( *v22 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 2] == v23 )
            v24 = *v22;
          else
            v24 = 0;
          sub_1025FAC0(v24);
        }
      }
    }
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v36);
  }
  sub_1025FAC0(this);
  if ( sub_10337EB0() )
  {
    v31 = (int *)sub_10337EB0();
    sub_103349E0(v31, 1);
  }
  v32 = sub_1006AFF0();
  return sub_1006D050((int)v32, "TLK_CITIZEN_RESPONSE_KILLED_GUNSHIP", 0, 0);
}
