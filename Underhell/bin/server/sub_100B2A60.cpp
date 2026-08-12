bool __thiscall sub_100B2A60(_DWORD *this, int a2, int a3, float a4, float a5, int a6, float *a7)
{
  int v8; // eax
  float *v9; // eax
  double v10; // st7
  bool result; // al
  double v12; // st7
  double v13; // st6
  double v14; // rt0
  double v15; // st6
  double v16; // st4
  double v17; // st5
  double v18; // st7
  double v19; // st6
  double v20; // st4
  int v21; // esi
  double v22; // st3
  double v23; // st5
  double v24; // st2
  double v25; // st1
  float v26; // [esp+10h] [ebp-3Ch]
  float v27; // [esp+14h] [ebp-38h]
  int v28[3]; // [esp+1Ch] [ebp-30h] BYREF
  float v29; // [esp+28h] [ebp-24h]
  float v30; // [esp+2Ch] [ebp-20h]
  float v31; // [esp+30h] [ebp-1Ch]
  int v32; // [esp+34h] [ebp-18h] BYREF
  float v33; // [esp+38h] [ebp-14h]
  float v34; // [esp+3Ch] [ebp-10h]
  int v35; // [esp+40h] [ebp-Ch] BYREF
  float v36; // [esp+44h] [ebp-8h]
  float v37; // [esp+48h] [ebp-4h]

  v8 = this[1];
  if ( v8 )
    *(_DWORD *)(v8 + 2716) |= 8u;
  if ( sub_100B2960(this, (float *)a3, (float *)a2, a4) )
  {
    v9 = (float *)this[1];
    *a7 = v9[179];
    a7[1] = v9[180];
    v10 = v9[181];
    result = 1;
    a7[2] = v10;
  }
  else
  {
    if ( !*(_DWORD *)(dword_106952DC + 48) )
      return 0;
    v29 = *(float *)a3 - *(float *)a2;
    v30 = *(float *)(a3 + 4) - *(float *)(a2 + 4);
    v31 = 0.0;
    off_10689714();
    v12 = v29;
    v13 = -v30;
    v29 = v13;
    v14 = v13;
    v15 = v12;
    v30 = v12;
    v16 = a5 / (double)a6;
    v17 = v14 * v16;
    v26 = v17;
    v18 = v17;
    v19 = v15 * v16;
    v27 = v19;
    v20 = *(float *)(a2 + 4);
    v21 = 0;
    v22 = *(float *)a2;
    v23 = *(float *)(a2 + 8);
    v35 = *(int *)a2;
    v24 = v20;
    v25 = v23;
    v28[0] = *(int *)a3;
    v28[1] = *(int *)(a3 + 4);
    v28[2] = *(int *)(a3 + 8);
    if ( a6 > 0 )
    {
      while ( 1 )
      {
        *(float *)&v35 = *(float *)&v35 - v18;
        v36 = v24 - v19;
        v37 = v25;
        *(float *)&v32 = v18 + v22;
        v33 = v19 + v20;
        v34 = v23;
        if ( sub_100B2960(this, (float *)v28, (float *)&v35, a4) )
        {
          *a7 = *(float *)&v35;
          a7[1] = v36;
          a7[2] = v37;
          return 1;
        }
        result = sub_100B2960(this, (float *)v28, (float *)&v32, a4);
        if ( result )
          break;
        if ( ++v21 >= a6 )
          return result;
        v23 = v34;
        v20 = v33;
        v22 = *(float *)&v32;
        v18 = v26;
        v19 = v27;
        v25 = v37;
        v24 = v36;
      }
      *a7 = *(float *)&v32;
      a7[1] = v33;
      a7[2] = v34;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
