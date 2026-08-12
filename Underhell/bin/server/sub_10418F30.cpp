double __thiscall sub_10418F30(int this, float a2, int a3)
{
  double result; // st7
  int v5; // eax
  float *v6; // ebp
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  float *v10; // ecx
  int v11; // edx
  double v12; // st7
  int v13; // eax
  int v14; // esi
  float *v15; // esi
  float *v16; // eax
  float *v17; // edi
  double v18; // st7
  double v19; // st6
  double v20; // st5
  double v21; // st5
  double v22; // st5
  double v23; // st5
  double v24; // st6
  float v25; // [esp+18h] [ebp-74h] BYREF
  int v26; // [esp+1Ch] [ebp-70h]
  int v27; // [esp+20h] [ebp-6Ch]
  int v28; // [esp+24h] [ebp-68h]
  float *v29; // [esp+28h] [ebp-64h]
  int v30; // [esp+2Ch] [ebp-60h] BYREF
  int v31; // [esp+30h] [ebp-5Ch] BYREF
  int v32; // [esp+34h] [ebp-58h] BYREF
  int v33; // [esp+38h] [ebp-54h] BYREF
  float v34; // [esp+3Ch] [ebp-50h]
  float v35; // [esp+40h] [ebp-4Ch]
  int v36; // [esp+44h] [ebp-48h] BYREF
  float v37; // [esp+48h] [ebp-44h]
  float v38; // [esp+4Ch] [ebp-40h]
  int v39[3]; // [esp+50h] [ebp-3Ch] BYREF
  int v40[3]; // [esp+5Ch] [ebp-30h] BYREF
  int v41[3]; // [esp+68h] [ebp-24h] BYREF
  int v42[3]; // [esp+74h] [ebp-18h] BYREF
  int v43[3]; // [esp+80h] [ebp-Ch] BYREF

  if ( a3 == 1 )
  {
    result = 0.5;
  }
  else if ( *(_BYTE *)(this + 72) )
  {
    result = *(float *)(this + 75);
  }
  else
  {
    result = 0.0;
    if ( *(float *)(this + 12) != *(float *)(this + 8) )
      result = -*(float *)(this + 8) / (*(float *)(this + 12) - *(float *)(this + 8));
  }
  v5 = *(_DWORD *)(this + 88);
  *(float *)&v28 = result;
  v6 = 0;
  if ( v5 )
  {
    if ( -1.0 != *(float *)(v5 + 76) )
    {
      v7 = *(_DWORD *)(this + 20 * a3 + 28);
      v27 = *(_DWORD *)(this + 20 * a3 + 28);
      if ( v7 >= 1 )
      {
        v8 = v7 / 2;
        v29 = 0;
        if ( v7 / 2 <= 1 )
        {
          v26 = 1;
          v8 = 1;
        }
        else
        {
          v26 = v7 / 2;
        }
        v9 = v8;
        if ( v8 > -2 )
        {
          while ( v9 < v7 + 1 )
          {
            v6 = sub_10418D60(this, v9, &v25, a3);
            v10 = sub_10418D60(this, v9 + 1, &v25, a3);
            v29 = v10;
            if ( v26 / 2 <= 1 )
            {
              v26 = 1;
              v11 = 1;
            }
            else
            {
              v11 = v26 / 2;
              v26 /= 2;
            }
            v12 = a2;
            if ( a2 >= (double)v6[1] )
            {
              if ( v12 <= v10[1] )
              {
                if ( v10[1] == v12 )
                {
                  v6 = sub_10418D60(this, ++v9, &v25, a3);
                  v29 = sub_10418D60(this, v9 + 1, &v25, a3);
                }
                v7 = v27;
                break;
              }
              v9 += v11;
            }
            else
            {
              v9 -= v11;
            }
            v7 = v27;
            if ( v9 <= -2 )
              break;
          }
          if ( v6 )
          {
            v13 = v9 - 1;
            v14 = v9 + 2;
            v28 = v14;
            if ( v13 < -1 )
              v13 = -1;
            if ( v14 >= v7 )
              v28 = v7;
            v15 = sub_10418D60(this, v13, &v25, a3);
            v16 = sub_10418D60(this, v28, (_BYTE *)&v25 + 1, a3);
            v17 = v29;
            v18 = v29[1] - v6[1];
            v19 = *v15;
            v40[0] = *((int *)v15 + 1);
            *(float *)&v40[1] = v19;
            *(float *)&v40[2] = 0.0;
            v20 = *v6;
            v36 = *((int *)v6 + 1);
            v37 = v20;
            v38 = 0.0;
            v21 = *v29;
            v33 = *((int *)v29 + 1);
            v34 = v21;
            v35 = 0.0;
            v22 = *v16;
            v39[0] = *((int *)v16 + 1);
            *(float *)&v39[1] = v22;
            *(float *)&v39[2] = 0.0;
            v25 = 0.0;
            if ( v18 > 0.0 )
            {
              v23 = (a2 - v6[1]) / v18;
              v25 = v23;
              if ( v23 <= 1.0 )
              {
                if ( v23 < 0.0 )
                  v25 = 0.0;
              }
              else
              {
                v25 = 1.0;
              }
            }
            sub_101711B0(*((_WORD *)v6 + 4) >> 1, &v31, &v32);
            sub_101711B0(*((_WORD *)v17 + 4) >> 1, &v30, &v31);
            if ( v32 == 15 )
            {
              result = v37;
            }
            else if ( v30 == 15 )
            {
              result = v34;
            }
            else
            {
              if ( v32 == v30 )
              {
                sub_10171250(v30, (int)v40, (float *)&v36, (float *)&v33, (int)v39, v25, (float *)v41);
              }
              else
              {
                sub_10171250(v32, (int)v40, (float *)&v36, (float *)&v33, (int)v39, v25, (float *)v43);
                sub_10171250(v30, (int)v40, (float *)&v36, (float *)&v33, (int)v39, v25, (float *)v42);
                sub_100E8670((float *)v43, (float *)v42, v25, (float *)v41);
              }
              result = *(float *)&v41[1];
            }
            v24 = 1.0;
            if ( result > 1.0 )
              return v24;
            v24 = 0.0;
            if ( result < 0.0 )
              return v24;
          }
          else
          {
            return *(float *)&v28;
          }
        }
      }
    }
  }
  return result;
}
