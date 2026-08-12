int __thiscall sub_100B5D00(float *this, int a2, float *a3, float a4, char a5, char a6)
{
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // ebx
  int result; // eax
  int v12; // eax
  int v13; // eax
  int v14; // esi
  double v15; // st7
  int v16; // edi
  int v17; // eax
  double v18; // st4
  double v19; // st7
  double v20; // st4
  double v21; // st5
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st4
  int v26; // eax
  bool v27; // cl
  int v28; // [esp+8h] [ebp-24h]
  float v29; // [esp+Ch] [ebp-20h]
  int v30; // [esp+10h] [ebp-1Ch]
  int v31; // [esp+14h] [ebp-18h]
  float v32; // [esp+18h] [ebp-14h]
  int v34; // [esp+20h] [ebp-Ch]
  int v35; // [esp+24h] [ebp-8h]
  float v36; // [esp+28h] [ebp-4h]
  float v37; // [esp+3Ch] [ebp+10h]

  if ( !a2 )
  {
    v7 = *((_DWORD *)this + 912);
    if ( v7 == -1
      || (v8 = &off_1061BE18[4 * ((_DWORD)this[912] & 0xFFF) + 1],
          off_1061BE18[4 * ((_DWORD)this[912] & 0xFFF) + 2] != v7 >> 12) )
    {
      v9 = 0;
    }
    else
    {
      v9 = *v8;
    }
    a2 = v9;
  }
  v10 = a2;
  result = sub_101ACC70(a2, 1);
  if ( result )
  {
    v34 = 0;
    v12 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 2212))(this);
    v28 = v12;
    if ( v12 )
    {
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 288))(v12);
      v14 = v13;
      if ( v13 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 1088))(v13) )
          v34 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 1096))(v14);
      }
    }
    v30 = 0;
    v37 = a4 * a4;
    v35 = 0;
    v36 = (float)(a6 != 0 ? 0 : 0x3B9AC9FF);
    v15 = this[934] - (this[924] + this[924]);
    v29 = v15 * v15;
    while ( 1 )
    {
      v16 = v10;
      sub_101ACB10();
      if ( sub_101ACC70(v10, 1) )
      {
        do
        {
          if ( (unsigned __int8)sub_101ACB50(v16) )
            break;
          sub_101ACB40(v16);
          if ( v35 )
            v17 = sub_101ACC90(v16);
          else
            v17 = sub_101ACCC0(v16);
          v31 = v17;
          if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
            sub_100DAE60(v16);
          v18 = *(float *)(v16 + 580) - *a3;
          v19 = v18 * v18;
          v20 = *(float *)(v16 + 584) - a3[1];
          v21 = *(float *)(v16 + 588) - a3[2];
          v22 = v21 * v21 + v20 * v20 + v19;
          v32 = v22;
          v23 = v36;
          if ( a6 )
          {
            if ( v23 >= v22 && v23 <= v29 )
              goto LABEL_24;
          }
          else if ( v23 <= v22 )
          {
            goto LABEL_24;
          }
          if ( 0.0 != v37 )
          {
            if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
            {
              sub_100DAE60(v16);
              v22 = v32;
            }
            v24 = *(float *)(v16 + 584) - a3[1];
            v25 = *(float *)(v16 + 580) - *a3;
            if ( v25 * v25 + v24 * v24 <= v37 )
              goto LABEL_24;
          }
          if ( a5 )
          {
            if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
              sub_100DAE60(v16);
            v26 = (*(int (__thiscall **)(float *, int, float *))(*(_DWORD *)this + 2224))(this, v16 + 580, a3);
            v27 = v28 && v28 == v26 || v34 && v34 == v26;
            if ( v26 && (!v27 || *((_BYTE *)this + 3692)) )
              goto LABEL_24;
            v22 = v32;
          }
          v36 = v22;
          v30 = v16;
LABEL_24:
          v16 = v31;
        }
        while ( sub_101ACC70(v31, 1) );
      }
      sub_101ACB30();
      if ( ++v35 >= 2 )
        return v30;
      v10 = a2;
    }
  }
  return result;
}
