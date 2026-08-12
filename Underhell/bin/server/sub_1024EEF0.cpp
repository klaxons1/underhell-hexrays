void __thiscall sub_1024EEF0(int this, float *a2, float *a3, float *a4, int a5)
{
  int v6; // eax
  double v7; // st7
  double v8; // st7
  double v11; // st7
  double v12; // st6
  bool v13; // c3
  double v14; // st6
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st6
  long double v19; // st7
  float v20; // [esp+0h] [ebp-38h]
  float v21; // [esp+14h] [ebp-24h]
  float v22; // [esp+1Ch] [ebp-1Ch] BYREF
  float v23; // [esp+20h] [ebp-18h]
  float v24; // [esp+24h] [ebp-14h]
  float v25; // [esp+28h] [ebp-10h] BYREF
  float v26; // [esp+2Ch] [ebp-Ch]
  float v27; // [esp+30h] [ebp-8h]
  float v28; // [esp+34h] [ebp-4h]
  float v29; // [esp+40h] [ebp+8h]
  float v30; // [esp+44h] [ebp+Ch]

  v6 = *(_DWORD *)(this + 916);
  if ( v6 )
  {
    if ( (unsigned int)(v6 - 1) > 1 )
      return;
    if ( *(_BYTE *)(this + 992) )
    {
      if ( *(float *)(this + 976) != *(float *)(this + 108) )
      {
        if ( fabs(*(float *)(this + 108)) >= fabs(*(float *)(this + 976)) )
          v7 = *(float *)(this + 988);
        else
          v7 = *(float *)(this + 984);
        v21 = v7 * *(float *)(dword_106B31C8 + 16);
        v8 = *(float *)(this + 976);
        sub_100195B0(*(float *)(this + 976), *(float *)(this + 108), v21);
        *(float *)(this + 108) = v8;
      }
    }
    else if ( a2 && a3 )
    {
      v11 = *(float *)(this + 108);
      v29 = *(float *)(this + 108);
      v12 = 0.0;
      if ( 0.0 != a2[27] )
      {
        v29 = a2[27];
        v12 = 0.0;
        v11 = v29;
      }
      v30 = v11;
      v13 = a3[27] == v12;
      v14 = v11;
      if ( !v13 )
      {
        v14 = a3[27];
        v30 = a3[27];
      }
      if ( v11 == v14 )
      {
        *(float *)(this + 108) = v11 * *(float *)(this + 872);
      }
      else
      {
        v22 = a3[179] - a2[179];
        v23 = a3[180] - a2[180];
        v15 = a3[181] - a2[181];
        v24 = v15;
        sub_100D7A40(&v22);
        v28 = v15;
        if ( 0.0 != v15 )
        {
          v22 = *(float *)(this + 716) - a2[179];
          v23 = *(float *)(this + 720) - a2[180];
          v16 = *(float *)(this + 724) - a2[181];
          v24 = v16;
          sub_100D7A40(&v22);
          v17 = v16 / v28;
          v18 = 1.0;
          if ( *(_DWORD *)(this + 916) == 2 )
          {
            v20 = v17;
            v17 = sub_102191B0(v20, 0.0, 1.0, 0.0, 1.0);
            v18 = 1.0;
          }
          *(float *)(this + 108) = ((v18 - v17) * v29 + v17 * v30) * *(float *)(this + 872);
        }
      }
    }
    v25 = *a4 - *(float *)(this + 716);
    v26 = a4[1] - *(float *)(this + 720);
    v27 = a4[2] - *(float *)(this + 724);
    off_10689714();
  }
  else
  {
    v25 = *a4 - *(float *)(this + 716);
    v26 = a4[1] - *(float *)(this + 720);
    v27 = a4[2] - *(float *)(this + 724);
    off_10689714();
  }
  v19 = fabs(*(float *)(this + 108));
  v25 = v25 * v19;
  v26 = v26 * v19;
  v27 = v19 * v27;
  sub_100DD790((float *)this, &v25);
}
