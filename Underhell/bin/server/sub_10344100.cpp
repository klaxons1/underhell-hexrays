unsigned int __thiscall sub_10344100(int this, float *a2, float *a3)
{
  unsigned int result; // eax
  int *v5; // ecx
  int v6; // ecx
  double v7; // st7
  double v8; // st7
  double (__stdcall *v9)(_DWORD, float); // edx
  double v10; // st7
  double (__stdcall *v11)(_DWORD, float); // edx
  double v12; // st7
  int v13; // eax
  float v14; // ecx
  float v15; // edx
  unsigned int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // ecx
  _DWORD *v20; // esi
  int v21; // edi
  int v22; // ecx
  int v23; // eax
  float v24; // [esp+10h] [ebp-28h]
  float v25; // [esp+10h] [ebp-28h]
  float v26; // [esp+10h] [ebp-28h]
  float v27[3]; // [esp+20h] [ebp-18h] BYREF
  float v28; // [esp+2Ch] [ebp-Ch] BYREF
  float v29; // [esp+30h] [ebp-8h]
  float v30; // [esp+34h] [ebp-4h]

  result = *(_DWORD *)(this + 3644);
  if ( result != -1 )
  {
    v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    result >>= 12;
    if ( v5[1] == result )
    {
      if ( *v5 )
      {
        if ( v5[1] == result )
          v6 = *v5;
        else
          v6 = 0;
        sub_100FB0C0(v6);
        if ( *a3 == flt_106F1CA8 && a3[1] == flt_106F1CAC && a3[2] == flt_106F1CB0 )
        {
          v28 = *(float *)(this + 3628);
          v29 = *(float *)(this + 3632);
          v7 = *(float *)(this + 3636);
        }
        else
        {
          v28 = *a2;
          v29 = a2[1];
          v7 = a2[2];
        }
        v30 = v7;
        v24 = -*a3;
        v8 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(LODWORD(v24), *a3);
        v9 = *(double (__stdcall **)(_DWORD, float))(*(_DWORD *)dword_106B31E4 + 4);
        v28 = v8 + v28;
        v25 = -a3[1];
        v10 = ((double (__stdcall *)(_DWORD, _DWORD))v9)(LODWORD(v25), a3[1]);
        v11 = *(double (__stdcall **)(_DWORD, float))(*(_DWORD *)dword_106B31E4 + 4);
        v29 = v10 + v29;
        v26 = -a3[2];
        v12 = ((double (__stdcall *)(_DWORD, _DWORD))v11)(LODWORD(v26), a3[2]);
        v13 = *(_DWORD *)(this + 252) >> 11;
        v30 = v12 + v30;
        if ( (v13 & 1) != 0 )
          sub_100DAE60(this);
        v14 = *(float *)(this + 580);
        v15 = *(float *)(this + 584);
        v27[2] = *(float *)(this + 588);
        v16 = *(_DWORD *)(this + 3644);
        v27[0] = v14;
        v27[1] = v15;
        if ( v16 == -1 || off_1061BE18[4 * (v16 & 0xFFF) + 2] != v16 >> 12 )
          v17 = 0;
        else
          v17 = off_1061BE18[4 * (v16 & 0xFFF) + 1];
        sub_100E10C0(v17, v27);
        v18 = *(_DWORD *)(this + 3644);
        if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v18 >> 12 )
          v19 = 0;
        else
          v19 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
        result = (unsigned int)sub_100F9FC0((float *)(v19 + 948), &v28);
        *(float *)(this + 3672) = v28;
        *(float *)(this + 3676) = v29;
        *(float *)(this + 3680) = v30;
      }
    }
  }
  v20 = (_DWORD *)(this + 3648);
  v21 = 4;
  do
  {
    if ( *v20 != -1 )
    {
      result = (unsigned int)&off_1061BE18[4 * (*v20 & 0xFFF) + 1];
      v22 = *v20 >> 12;
      if ( off_1061BE18[4 * (*v20 & 0xFFF) + 2] == v22 )
      {
        if ( *(_DWORD *)result )
        {
          if ( off_1061BE18[4 * (*v20 & 0xFFF) + 2] == v22 )
            v23 = *(_DWORD *)result;
          else
            v23 = 0;
          result = sub_100FB0C0(v23);
        }
      }
    }
    ++v20;
    --v21;
  }
  while ( v21 );
  return result;
}
