int __thiscall sub_100BF5F0(int this)
{
  int v1; // esi
  void (__thiscall *v2)(int); // edx
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // edi
  int result; // eax
  int v8; // ebx
  long double v9; // st7
  long double v10; // st6
  long double v11; // st5
  double v12; // st3
  float *v13; // edi
  double v14; // st2
  long double v15; // st3
  long double v16; // st2
  double v17; // st1
  float *v18; // edx
  int v19; // esi
  int v20; // ecx
  float v21; // [esp+Ch] [ebp-60h] BYREF
  float v22; // [esp+10h] [ebp-5Ch] BYREF
  float v23[4]; // [esp+14h] [ebp-58h] BYREF
  float v24[3]; // [esp+24h] [ebp-48h] BYREF
  float v25[3]; // [esp+30h] [ebp-3Ch] BYREF
  float v26[2]; // [esp+3Ch] [ebp-30h] BYREF
  float v27; // [esp+44h] [ebp-28h]
  float v28[2]; // [esp+48h] [ebp-24h] BYREF
  float v29; // [esp+50h] [ebp-1Ch]
  float v30[3]; // [esp+54h] [ebp-18h]
  int v31; // [esp+60h] [ebp-Ch]
  int v32; // [esp+64h] [ebp-8h]
  float *v33; // [esp+68h] [ebp-4h]

  v1 = dword_10700AC8;
  v2 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
  v4 = *(_DWORD *)(this + 908);
  v31 = this;
  v2(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD **)(this + 1100);
  if ( v5 && *v5 )
    v6 = *(_DWORD *)(this + 1100);
  else
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  result = sub_100BA6C0(v6, v4, v25, v24);
  if ( result )
  {
    v8 = v31;
    v9 = *(float *)(v31 + 732) * 0.0174532925199433;
    v33 = &v21;
    v31 = 2;
    v10 = cos(v9);
    v11 = sin(v9);
    v21 = v25[0];
    v22 = v25[1];
    v23[0] = v25[2];
    v23[1] = v24[0];
    v23[2] = v24[1];
    v23[3] = v24[2];
    v26[0] = 9999.0;
    v26[1] = 9999.0;
    v27 = 9999.0;
    v28[0] = -9999.0;
    v28[1] = -9999.0;
    v29 = -9999.0;
    do
    {
      v12 = *v33;
      v13 = &v22;
      v32 = 2;
      v14 = v12;
      v15 = v12 * v10;
      v16 = v14 * v11;
      do
      {
        v17 = *v13;
        v18 = v23;
        v19 = 2;
        v30[0] = v17 * -v11 + v15;
        v30[1] = v17 * v10 + v16;
        do
        {
          v20 = 0;
          v30[2] = *v18;
          do
          {
            if ( v26[v20] > (double)v30[v20] )
              v26[v20] = v30[v20];
            if ( v28[v20] < (double)v30[v20] )
              v28[v20] = v30[v20];
            ++v20;
          }
          while ( v20 < 3 );
          v18 += 3;
          --v19;
        }
        while ( v19 );
        v13 += 3;
        --v32;
      }
      while ( v32 );
      v33 += 3;
      --v31;
    }
    while ( v31 );
    v27 = 0.0;
    v29 = 1.0;
    return sub_1025F360(v8, v26, v28);
  }
  return result;
}
