int __thiscall sub_1030F1C0(int this)
{
  int result; // eax
  int (__thiscall *v3)(int); // edx
  float *v4; // eax
  int v5; // eax
  float *v6; // edi
  unsigned int v7; // eax
  int v8; // ecx
  float *v9; // eax
  _DWORD *v10; // edi
  int v11; // eax
  double v12; // st7
  float *v13; // edi
  _DWORD *v14; // eax
  float *v15; // eax
  int v16; // esi
  int v17; // edi
  double v18; // st4
  double v19; // st6
  double v20; // st4
  double v21; // st5
  double v22; // st6
  int v23; // eax
  int v24; // eax
  __int64 v25; // [esp-4h] [ebp-4Ch]
  __int64 v26; // [esp-4h] [ebp-4Ch]
  int v27; // [esp+4h] [ebp-44h]
  int v28; // [esp+10h] [ebp-38h] BYREF
  float v29; // [esp+14h] [ebp-34h]
  float v30; // [esp+18h] [ebp-30h]
  float v31; // [esp+1Ch] [ebp-2Ch]
  float v32; // [esp+20h] [ebp-28h]
  float v33; // [esp+24h] [ebp-24h]
  char v34; // [esp+28h] [ebp-20h]
  float v35; // [esp+2Ch] [ebp-1Ch]
  float v36[3]; // [esp+30h] [ebp-18h] BYREF
  float v37; // [esp+3Ch] [ebp-Ch]
  float v38; // [esp+40h] [ebp-8h]
  float v39; // [esp+44h] [ebp-4h]

  if ( *(_BYTE *)(this + 3675) )
    return 100;
  if ( sub_10023D10((_DWORD *)this, 76) )
    return 97;
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)this + 368);
  v35 = 480.0;
  v32 = 3000.0;
  v34 = 0;
  v33 = -1.0;
  v28 = v3(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v29 = *(float *)(this + 580);
  v30 = *(float *)(this + 584);
  v31 = *(float *)(this + 588);
  v4 = sub_1030D4C0(this, (int)&v28);
  if ( v4 )
    goto LABEL_12;
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    goto LABEL_37;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v6 = (float *)v5;
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  v29 = v6[145];
  v30 = v6[146];
  v31 = v6[147];
  v4 = sub_1030D4C0(this, (int)&v28);
  if ( v4 )
  {
LABEL_12:
    *(_DWORD *)(this + 3716) = *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 8))(v4);
    sub_10023CB0((char *)this, 73);
    v7 = *(_DWORD *)(this + 3716);
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3716) & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*(_DWORD *)(this + 3716) & 0xFFF) + 1];
    v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 576))(v8);
    *(float *)(this + 3676) = *v9;
    *(float *)(this + 3680) = v9[1];
    *(float *)(this + 3684) = v9[2];
    v10 = *(_DWORD **)(this + 2796);
    if ( v10 )
    {
      v11 = sub_1026A890((unsigned int *)(this + 3716));
      sub_100B1890(v10, dword_106E304C, v11, this);
    }
    return 91;
  }
  else
  {
LABEL_37:
    if ( !sub_10023D10((_DWORD *)this, 10) )
      goto LABEL_25;
    if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3664) )
    {
      v12 = RandomFloat(20.0, 40.0);
      result = 99;
      *(float *)(this + 3664) = v12 + *(float *)(dword_106B31C8 + 12);
      return result;
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) && sub_10023D10((_DWORD *)this, 18) )
    {
      v13 = (float *)sub_10019640((_DWORD *)this);
      v14 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v15 = (float *)sub_10019640(v14);
      v37 = *v15 - *v13;
      v38 = v15[1] - v13[1];
      v39 = v15[2] - v13[2];
      off_10689714();
      v16 = *(_DWORD *)(this + 2604);
      v36[0] = -v37;
      v36[1] = -v38;
      v36[2] = -v39;
      *(float *)(v16 + 20) = sub_10265030(v36);
      return 103;
    }
    else
    {
LABEL_25:
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
        sub_100DAE60(v17);
      v18 = *(float *)(v17 + 584) - *(float *)(this + 584);
      v19 = v18 * v18;
      v20 = *(float *)(v17 + 580) - *(float *)(this + 580);
      v21 = v19;
      v22 = *(float *)(v17 + 588) - *(float *)(this + 588);
      if ( v20 * v20 + v21 + v22 * v22 <= 1440000.0 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
        {
          v23 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v23 + 320))(v23) )
          {
            HIDWORD(v25) = this;
            LODWORD(v25) = this;
            sub_1010DD80((_DWORD *)(this + 3136), v25, 0.0);
          }
        }
        HIDWORD(v26) = this;
        LODWORD(v26) = this;
        sub_1010DD80((_DWORD *)(this + 3064), v26, 0.0);
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        v24 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
        sub_10077510(v24, v27);
        return 102;
      }
      else
      {
        return 100;
      }
    }
  }
}
