int __thiscall sub_1018D1E0(float *this)
{
  int result; // eax
  int i; // eax
  int v4; // ebx
  float *v5; // esi
  int j; // esi
  int v7; // esi
  int v8; // ebx
  float *v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  float *v13; // esi
  double v14; // st6
  double v15; // st7
  double v16; // st6
  double v17; // st7
  double v18; // st5
  double v19; // rt2
  float *v20; // ecx
  int v21; // eax
  float v22[3]; // [esp+4h] [ebp-40h] BYREF
  float v23; // [esp+10h] [ebp-34h] BYREF
  float v24; // [esp+14h] [ebp-30h]
  float v25; // [esp+18h] [ebp-2Ch]
  float v26[2]; // [esp+1Ch] [ebp-28h] BYREF
  float v27; // [esp+24h] [ebp-20h]
  float v28; // [esp+28h] [ebp-1Ch] BYREF
  float v29; // [esp+2Ch] [ebp-18h]
  float v30; // [esp+30h] [ebp-14h]
  float v31; // [esp+34h] [ebp-10h] BYREF
  int v32; // [esp+38h] [ebp-Ch]
  int v33; // [esp+3Ch] [ebp-8h]
  int v34; // [esp+40h] [ebp-4h]

  result = sub_1025FC50();
  if ( result )
  {
    if ( *(_DWORD *)(dword_106B8370 + 1124) == 4 )
    {
      sub_1018C090((int)this);
    }
    else
    {
      sub_1018C090((int)this);
      sub_1018D160(this);
    }
    for ( i = *((_DWORD *)this + 170); i != -1; i = *(_DWORD *)(v4 + *((_DWORD *)this + 167) + 8) )
    {
      v4 = 12 * i;
      v5 = *(float **)(12 * i + *((_DWORD *)this + 167));
      sub_1019C610(v5);
      if ( !(unsigned __int8)sub_1019C1D0(this, 1) )
      {
        v23 = v5[3];
        v24 = v5[4];
        v25 = v5[5] + 25.0;
        sub_10191A10(this + 7, &v23, 16);
      }
    }
    for ( j = *((_DWORD *)this + 179); j != -1; j = *(_DWORD *)(v7 + *((_DWORD *)this + 176) + 8) )
    {
      v7 = 12 * j;
      v8 = *(_DWORD *)(v7 + *((_DWORD *)this + 176));
      sub_1019C610(v8);
      if ( !(unsigned __int8)sub_1019C1D0(this, 0) )
        sub_10191A10(this + 7, v8, 16);
    }
    result = 0;
    v34 = 0;
    do
    {
      v9 = &this[9 * result];
      v32 = *((_DWORD *)v9 + 137);
      v33 = 0;
      if ( v32 > 0 )
      {
        do
        {
          v10 = *((_DWORD *)v9 + 134);
          v11 = v33;
          if ( v10 == -1 )
          {
LABEL_18:
            v13 = 0;
          }
          else
          {
            while ( 1 )
            {
              v12 = 3 * v10;
              if ( !v11 )
                break;
              v10 = *(_DWORD *)(*((_DWORD *)v9 + 131) + 4 * v12 + 8);
              --v11;
              if ( v10 == -1 )
                goto LABEL_18;
            }
            v13 = *(float **)(*((_DWORD *)v9 + 131) + 4 * v12);
          }
          sub_1018C090((int)v13);
          if ( *(_DWORD *)(dword_106B8370 + 1124) != 4 )
          {
            sub_1018D160(v13);
            sub_1018B0A0(this, v13, v34, &v23, &v31);
            switch ( v34 )
            {
              case 0:
                v28 = v23;
                v29 = v24 + 5.0;
                v30 = v25;
                v14 = v24 - 5.0;
                v15 = v25;
                v26[0] = v23;
                goto LABEL_27;
              case 1:
                v28 = v23 - 5.0;
                v29 = v24;
                v16 = v25;
                v30 = v25;
                v17 = v24;
                v18 = v23 + 5.0;
                goto LABEL_26;
              case 2:
                v28 = v23;
                v29 = v24 - 5.0;
                v30 = v25;
                v14 = v24 + 5.0;
                v15 = v25;
                v26[0] = v23;
                goto LABEL_27;
              case 3:
                v28 = v23 + 5.0;
                v29 = v24;
                v16 = v25;
                v30 = v25;
                v17 = v24;
                v18 = v23 - 5.0;
LABEL_26:
                v26[0] = v18;
                v19 = v16;
                v14 = v17;
                v15 = v19;
LABEL_27:
                v26[1] = v14;
                v27 = v15;
                break;
              default:
                break;
            }
            v30 = sub_1018AD70(this, &v28);
            v27 = sub_1018AD70(v13, v26);
            sub_1018AE60(v20, v26, v22);
            v21 = sub_1018AB40(v34);
            if ( sub_1018D060((int *)v13, (int *)this, v21) )
              sub_10191A10(&v28, v22, 15);
            else
              sub_10191A10(&v28, v22, 16);
          }
          ++v33;
        }
        while ( v33 < v32 );
        result = v34;
      }
      v34 = ++result;
    }
    while ( result < 4 );
  }
  return result;
}
