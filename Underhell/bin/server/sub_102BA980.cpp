unsigned int __thiscall sub_102BA980(int this)
{
  int *v2; // ecx
  int v3; // ebx
  int *v4; // ecx
  unsigned int v5; // eax
  unsigned int result; // eax
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  _DWORD *v14; // edx
  unsigned int v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int *v26; // esi
  unsigned int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // eax
  int v32; // esi
  unsigned int v33; // eax
  int v34; // esi
  unsigned int v35; // eax
  int v36; // esi
  int v37; // esi
  float *v38; // eax
  float v39; // [esp+14h] [ebp-60h]
  float v40; // [esp+14h] [ebp-60h]
  _DWORD v41[8]; // [esp+24h] [ebp-50h] BYREF
  float v42[3]; // [esp+44h] [ebp-30h] BYREF
  float v43[3]; // [esp+50h] [ebp-24h] BYREF
  float v44; // [esp+5Ch] [ebp-18h]
  float v45; // [esp+60h] [ebp-14h]
  float v46; // [esp+64h] [ebp-10h]
  float v47; // [esp+68h] [ebp-Ch]
  float v48; // [esp+6Ch] [ebp-8h]
  float v49; // [esp+70h] [ebp-4h]

  sub_1023C380((_DWORD *)this, (int)"AlyxEmp.Discharge", 0.0, 0);
  if ( *(_DWORD *)(this + 824) != 2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 824);
    }
    *(_DWORD *)(this + 824) = 2;
  }
  v3 = dword_106B31C8;
  if ( *(_DWORD *)(this + 832) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 832);
    }
    *(float *)(this + 832) = *(float *)(v3 + 12);
  }
  v5 = *(_DWORD *)(this + 800);
  if ( v5 == -1
    || (result = v5 >> 12, off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1] )
  {
    result = *(_DWORD *)(this + 804);
    if ( result != -1 )
    {
      result >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] == result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1] )
        {
          v7 = sub_100FB5C0("effects/laser1.vmt", 8.0);
          if ( v7 )
            *(_DWORD *)(this + 800) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
          else
            *(_DWORD *)(this + 800) = -1;
          v8 = *(_DWORD *)(this + 800);
          if ( v8 != -1
            && off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == v8 >> 12
            && off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1] )
          {
            v9 = *(_DWORD *)(this + 804);
            if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != v9 >> 12 )
              v10 = 0;
            else
              v10 = off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
            if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
              sub_100DAE60(v10);
            v11 = *(_DWORD *)(this + 800);
            if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v11 >> 12 )
              v12 = 0;
            else
              v12 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
            sub_100FAD20(v12, (float *)(v10 + 580), (_DWORD *)this);
            v13 = *(_DWORD *)(this + 804);
            if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != v13 >> 12 )
              v14 = 0;
            else
              v14 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
            v15 = *(_DWORD *)(this + 800);
            if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v15 >> 12 )
              v16 = 0;
            else
              v16 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
            sub_100FA570(v16, v14);
            v17 = *(_DWORD *)(this + 800);
            if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v17 >> 12 )
              v18 = 0;
            else
              v18 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
            sub_1005C3A0(v18, 4.0);
            v19 = *(_DWORD *)(this + 800);
            if ( v19 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v19 >> 12 )
              v20 = 0;
            else
              v20 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
            sub_1005C410(v20, 8.0);
            v21 = *(_DWORD *)(this + 800);
            if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v21 >> 12 )
              v22 = 0;
            else
              v22 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
            sub_100FB020(v22, 255);
            v23 = *(_DWORD *)(this + 800);
            if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v23 >> 12 )
              v24 = 0;
            else
              v24 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
            sub_1005C620((_BYTE *)(v24 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v24 + 116)));
            v25 = *(_DWORD *)(this + 800);
            if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v25 >> 12 )
              v26 = 0;
            else
              v26 = (int *)off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
            sub_100EC3F0(v26, (int)sub_10246D70, 0.0, 0);
            v39 = *(float *)(dword_106B31C8 + 12) + 999.0;
            sub_100EC4A0(v26, v39, 0);
            v27 = *(_DWORD *)(this + 800);
            if ( v27 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v27 >> 12 )
              v28 = 0;
            else
              v28 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
            sub_100F9B80(v28);
            v29 = *(_DWORD *)(this + 800);
            if ( v29 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v29 >> 12 )
              v30 = 0;
            else
              v30 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
            sub_100FA790(v30, 16.0);
          }
          v31 = *(_DWORD *)(this + 804);
          if ( v31 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != v31 >> 12 )
            v32 = 0;
          else
            v32 = off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
          if ( (*(_DWORD *)(v32 + 252) & 0x800) != 0 )
            sub_100DAE60(v32);
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v47 = *(float *)(this + 580) - *(float *)(v32 + 580);
          v48 = *(float *)(this + 584) - *(float *)(v32 + 584);
          v49 = *(float *)(this + 588) - *(float *)(v32 + 588);
          off_10689714();
          v33 = *(_DWORD *)(this + 804);
          if ( v33 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != v33 >> 12 )
            v34 = 0;
          else
            v34 = off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
          if ( (*(_DWORD *)(v34 + 252) & 0x800) != 0 )
            sub_100DAE60(v34);
          sub_10219BB0(v41);
          v41[0] = &CPVSFilter::`vftable';
          sub_1021A300(v41, v34 + 580);
          v35 = *(_DWORD *)(this + 804);
          v44 = v47 * 4.0;
          v45 = v48 * 4.0;
          v46 = 4.0 * v49;
          if ( v35 == -1 || off_1061BE18[4 * (v35 & 0xFFF) + 2] != v35 >> 12 )
            v36 = 0;
          else
            v36 = off_1061BE18[4 * (v35 & 0xFFF) + 1];
          if ( (*(_DWORD *)(v36 + 252) & 0x800) != 0 )
            sub_100DAE60(v36);
          v43[0] = *(float *)(v36 + 580) - v44;
          v43[1] = *(float *)(v36 + 584) - v45;
          v43[2] = *(float *)(v36 + 588) - v46;
          v37 = (int)*off_1065C5EC;
          v38 = sub_1001F010(v42, -1.0, 1.0);
          (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, float *, float *, _DWORD))(v37 + 148))(
            off_1065C5EC,
            v41,
            0.0,
            v43,
            v38,
            0);
          result = std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v41);
        }
      }
    }
  }
  if ( *(_BYTE *)(this + 820) )
  {
    v40 = *(float *)(dword_106B31C8 + 12) + 0.5;
    return sub_100EC4A0((int *)this, v40, 0);
  }
  return result;
}
