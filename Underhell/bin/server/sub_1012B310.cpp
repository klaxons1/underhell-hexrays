unsigned int __thiscall sub_1012B310(unsigned int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // ecx
  int v8; // ebx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  int v15; // eax
  int v16; // eax
  int *v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  int *v20; // eax
  int v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  _DWORD *v24; // [esp+Ch] [ebp-84h]
  _DWORD *v25; // [esp+Ch] [ebp-84h]
  float v26; // [esp+10h] [ebp-80h]
  float v27; // [esp+10h] [ebp-80h]
  float v28; // [esp+14h] [ebp-7Ch]
  float v29; // [esp+14h] [ebp-7Ch]
  float v30; // [esp+18h] [ebp-78h]
  int v31; // [esp+18h] [ebp-78h]
  _DWORD *v32; // [esp+18h] [ebp-78h]
  int v33; // [esp+78h] [ebp-18h] BYREF
  float v34; // [esp+7Ch] [ebp-14h]
  float v35; // [esp+80h] [ebp-10h]
  float v36; // [esp+84h] [ebp-Ch] BYREF
  float v37; // [esp+88h] [ebp-8h]
  float v38; // [esp+8Ch] [ebp-4h]

  v30 = *(float *)(dword_106B31C8 + 12) + 0.2;
  sub_100EC4A0((int *)this, v30, 0);
  v2 = *(_DWORD *)(this + 800);
  if ( v2 == -1 )
    return sub_1025FAC0(this);
  v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
  result = v2 >> 12;
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != result || !*v3 )
    return sub_1025FAC0(this);
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == result )
    v5 = *v3;
  else
    v5 = 0;
  if ( (*(_DWORD *)(v5 + 256) & 0x20000000) != 0 )
  {
    if ( *(_BYTE *)(this + 119) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_BYTE *)(this + 119) = 0;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          result = sub_100194B0(v6, 116);
        *(_BYTE *)(this + 119) = 0;
      }
    }
  }
  else
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == result )
      v7 = *v3;
    else
      v7 = 0;
    v8 = sub_100D7680(v7);
    if ( !v8 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 264))(v8) )
    {
      v9 = *(_DWORD *)(this + 800);
      if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v9 >> 12 )
        v10 = 0;
      else
        v10 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
      if ( *(_BYTE *)(v10 + 447) )
      {
        v11 = sub_1026A890(this + 800);
        v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 576))(v11);
        v13 = *v12;
        v36 = *v12;
        v14 = v12[1];
        v37 = v12[1];
        v38 = v12[2];
        v35 = v38;
        *(float *)&v33 = v13;
        v34 = v14;
        v15 = sub_1026A890(this + 800);
        v35 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v15 + 576))(v15) + 8);
        *(float *)&v33 = *(float *)&v33 + 32.0;
        v34 = v34 + 32.0;
        v38 = v38 - 32.0;
        v36 = v36 - 32.0;
        v37 = v37 - 32.0;
        sub_102605C0(&v36, &v33, 12);
      }
      if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 820)
        || sub_1012B040((unsigned int *)(this + 800), 0) )
      {
        sub_1023C380((int)"General.StopBurning", 0.0, 0);
        *(_BYTE *)(this + 824) = 0;
        sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
        v29 = *(float *)(dword_106B31C8 + 12) + 0.5;
        sub_100EC4A0((int *)this, v29, 0);
        result = *(_DWORD *)(this + 800);
        if ( result != -1 )
        {
          result >>= 12;
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == result )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1] )
            {
              v23 = sub_1026A890(this + 800);
              result = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 288))(v23);
              if ( result )
                return (*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 824))(result);
            }
          }
        }
      }
      else
      {
        if ( sub_1026A890(this + 800) )
        {
          v31 = sub_1026A890(this + 800);
          v26 = *(float *)(this + 804) * 0.5;
          v24 = sub_10019640((_DWORD *)this);
          v16 = sub_10248110(this, this, 4.0, 8, 0);
          sub_100C9F20(v16, (int)v24, v26, 0, v31);
          v32 = (_DWORD *)sub_10248110(this, this, 1.0, 268435464, 0);
          v17 = (int *)sub_1026A890(this + 800);
          sub_100D9E70(v17, this, v32);
          v18 = sub_1026A890(this + 800);
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 284))(v18) && *(_DWORD *)(dword_10698344 + 48) )
          {
            v19 = sub_10019640((_DWORD *)this);
            sub_1023D4B0(4096, (int)v19, 24, 0.1, this, 2, 0);
            v20 = sub_10019640((_DWORD *)this);
            v33 = *v20;
            v34 = *((float *)v20 + 1);
            v35 = *((float *)v20 + 2) + 48.0;
            sub_1023D4B0(4096, (int)&v33, 24, 0.1, this, 1, 0);
          }
        }
        else
        {
          v27 = *(float *)(this + 804) * 0.5;
          v25 = sub_10019640((_DWORD *)this);
          v21 = sub_10248110(this, this, 0.80000001, 8, 0);
          sub_100C9F20(v21, (int)v25, v27, 0, 0);
        }
        v28 = *(float *)(this + 804) * 0.5;
        v22 = sub_10019640((_DWORD *)this);
        return sub_10140010((int)v22, v28, 2.0);
      }
    }
    else
    {
      sub_1025FAC0(this);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 824))(v8);
    }
  }
  return result;
}
