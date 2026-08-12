int __thiscall sub_10031CE0(int this, int *a2, __int64 a3, int a4, float a5, int a6)
{
  int v7; // ecx
  int v8; // edi
  int v9; // edx
  int v10; // eax
  _DWORD *v11; // edx
  bool v12; // zf
  _DWORD *v13; // eax
  int result; // eax
  int v15; // edi
  int v16; // eax
  int v17; // edi
  double v18; // st7
  int v19; // edx
  int v20; // ebx
  _DWORD *v21; // eax
  double v22; // st7
  double v23; // st6
  int v24; // ebx
  int v25; // eax
  int v26; // [esp+Ch] [ebp-70h]
  float v27; // [esp+18h] [ebp-64h]
  _DWORD v28[15]; // [esp+2Ch] [ebp-50h] BYREF
  int v29; // [esp+68h] [ebp-14h]
  int v30; // [esp+6Ch] [ebp-10h]
  int v31; // [esp+70h] [ebp-Ch]
  float v32; // [esp+74h] [ebp-8h]
  float v33; // [esp+78h] [ebp-4h]
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF

  nullsub_2((int)a2, a3, SHIDWORD(a3), a4, SLODWORD(a5), a6);
  v7 = 0;
  v28[0] = 15;
  v28[1] = 15;
  v28[2] = 15;
  v28[3] = 15;
  v28[4] = 15;
  v28[5] = 15;
  v28[6] = 15;
  v28[7] = 15;
  v28[8] = 15;
  v28[9] = 15;
  v28[10] = 15;
  v28[11] = 15;
  v28[12] = 15;
  v28[13] = 15;
  v28[14] = 15;
  if ( *(int *)(this + 1972) > 0 )
  {
    v8 = 0;
    do
    {
      v9 = *(_DWORD *)(this + 1960);
      v10 = *(_DWORD *)(v8 + v9 + 12);
      v11 = (_DWORD *)(v8 + v9 + 12);
      if ( v10 < 15 )
      {
        v12 = v28[v10] == 15;
        v13 = &v28[v10];
        if ( v12 )
          *v13 = v7;
        else
          *v11 = 15;
      }
      ++v7;
      v8 += 32;
    }
    while ( v7 < *(_DWORD *)(this + 1972) );
  }
  sub_10031990(this, *(float *)&a2, (int)a2, a5);
  v30 = sub_10126D70(a2);
  result = 0;
  v31 = 0;
  do
  {
    v15 = v28[result];
    if ( v15 < *(_DWORD *)(this + 1972) )
    {
      v16 = *(_DWORD *)(this + 1960);
      v17 = 32 * v15;
      if ( *(_DWORD *)(v16 + v17) < v30 )
      {
        v18 = *(float *)(v16 + v17 + 8);
        v33 = *(float *)(v16 + v17 + 8);
        if ( v18 > 0.0 )
        {
          v12 = *(_DWORD *)(this + 1940) == 0;
          v19 = *(_DWORD *)(this + 1960);
          v20 = *(_DWORD *)(v17 + v19);
          v32 = *(float *)(v17 + v19 + 20);
          if ( v12 && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
            sub_10026520(this);
          v21 = *(_DWORD **)(this + 1940);
          if ( !v21 || !*v21 )
            v21 = 0;
          LOBYTE(v29) = sub_100256E0((int)v21, v20);
          v22 = sub_10025120(v32, v29);
          v32 = v22;
          v23 = 1.0;
          if ( v33 <= 1.0 )
            v23 = v33;
          else
            v33 = 1.0;
          v27 = v23;
          *(float *)&v26 = v22;
          sub_10024510(
            (int)&savedregs,
            a2,
            *(float **)(this + 1228),
            a3,
            (float *)HIDWORD(a3),
            *(_DWORD *)(v17 + *(_DWORD *)(this + 1960)),
            v26,
            a4,
            a6,
            v27,
            a5);
          v24 = *(_DWORD *)(dword_10403714 + 48);
          if ( v24 == (*(int (__thiscall **)(int))(*(_DWORD *)(this + 8) + 36))(this + 8) )
          {
            v25 = sub_10127960(*(_DWORD *)(*(_DWORD *)(this + 1960) + v17));
            sub_10025960(
              "%8.4f : %30s : %5.3f : %4.2f : %1d\n",
              a5,
              (const char *)(v25 + *(_DWORD *)(v25 + 4)),
              v32,
              v33,
              v28[v31]);
          }
        }
      }
    }
    result = v31 + 1;
    v31 = result;
  }
  while ( result < 15 );
  return result;
}
