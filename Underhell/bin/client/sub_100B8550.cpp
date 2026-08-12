void __thiscall sub_100B8550(float *this)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // eax
  double v5; // st7
  unsigned int v6; // eax
  float *v7; // eax
  unsigned int v8; // eax
  float v9; // edx
  float v10; // eax
  float *v11; // eax
  double v12; // st7
  double v13; // st7
  float v14; // [esp+8h] [ebp-80h]
  float v15; // [esp+10h] [ebp-78h]
  _BYTE v16[12]; // [esp+1Ch] [ebp-6Ch] BYREF
  _BYTE v17[12]; // [esp+28h] [ebp-60h] BYREF
  float v18[3]; // [esp+34h] [ebp-54h] BYREF
  float v19[3]; // [esp+40h] [ebp-48h] BYREF
  float v20; // [esp+4Ch] [ebp-3Ch] BYREF
  float v21; // [esp+50h] [ebp-38h]
  float v22; // [esp+54h] [ebp-34h]
  float v23[3]; // [esp+58h] [ebp-30h] BYREF
  float v24[3]; // [esp+64h] [ebp-24h] BYREF
  float v25; // [esp+70h] [ebp-18h] BYREF
  float v26; // [esp+74h] [ebp-14h]
  float v27; // [esp+78h] [ebp-10h]
  _BYTE v28[4]; // [esp+7Ch] [ebp-Ch] BYREF
  _BYTE v29[4]; // [esp+80h] [ebp-8h] BYREF
  int v30; // [esp+84h] [ebp-4h]

  sub_102361D0(v28, v29);
  sub_1023E950(this);
  v2 = sub_100422D0();
  v3 = v2;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 5192);
    if ( v4 != -1
      && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 5192) & 0xFFF) + 2) == v4 >> 12
      && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 5192) & 0xFFF) + 1) )
    {
      v5 = *(float *)(dword_1042FE4C + 44);
    }
    else
    {
      v5 = *(float *)(dword_1042FE04 + 44);
    }
    if ( *(_BYTE *)(v3 + 5172) || *(_BYTE *)(v3 + 5189) )
      v5 = 0.0;
    v15 = *(float *)(dword_1042FE94 + 44) * *((float *)off_103DC81C + 4);
    v14 = v5;
    sub_101F0510(v14, this[57], v15);
    this[57] = v5;
    if ( *(_DWORD *)(dword_1042FD74 + 48) == 1 )
    {
      v8 = *(_DWORD *)(v3 + 5192);
      if ( v8 != -1 && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 5192) & 0xFFF) + 2) == v8 >> 12 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 5192) & 0xFFF) + 1) )
        {
          if ( *(_BYTE *)(v3 + 5209) )
          {
            if ( !sub_10012CD0((_DWORD *)v3) )
            {
              sub_10013260((_DWORD *)v3, (int)v23, 0, 0);
              sub_10038150(v3);
              v9 = *(float *)(v3 + 248);
              v10 = *(float *)(v3 + 252);
              v25 = *(float *)(v3 + 244);
              v26 = v9;
              v27 = v10;
              if ( off_103EDFEC() >= 100.0 && fabs(v23[1] * v26 + v25 * v23[0] + v23[2] * v27) <= 0.70700002 )
              {
                (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v18);
                v11 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 532))(v3, v16);
                v24[0] = *(float *)(v3 + 5196) - *v11;
                v24[1] = *(float *)(v3 + 5200) - v11[1];
                v24[2] = *(float *)(v3 + 5204) - v11[2];
                off_103EDFEC();
                sub_101EE190(v24, &v20);
                v30 = *(int *)(dword_1042FEDC + 44);
                v12 = v20;
                sub_101F0550(v20, v18[0], *(float *)&v30);
                v19[0] = v12;
                v13 = v21;
                sub_101F0550(v21, v18[1], *(float *)&v30);
                v19[1] = v13;
                v19[2] = v22;
                (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, v19);
              }
            }
          }
        }
      }
    }
    else if ( *(_DWORD *)(dword_1042FD74 + 48) == 2 )
    {
      v6 = *(_DWORD *)(v3 + 5192);
      if ( v6 != -1 && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 5192) & 0xFFF) + 2) == v6 >> 12 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 5192) & 0xFFF) + 1) )
        {
          (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v19);
          v7 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 532))(v3, v17);
          v25 = *(float *)(v3 + 5196) - *v7;
          v26 = *(float *)(v3 + 5200) - v7[1];
          v27 = *(float *)(v3 + 5204) - v7[2];
          off_103EDFEC();
          sub_101EE190(&v25, v19);
          (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, v19);
        }
      }
    }
  }
  else
  {
    v30 = sub_10076740() / 2;
    this[52] = (float)v30;
    v30 = sub_10076720() / 2;
    this[53] = (float)v30;
    this[54] = 0.0;
    this[55] = 0.0;
    this[56] = 1.0;
    this[57] = 0.0;
  }
}
