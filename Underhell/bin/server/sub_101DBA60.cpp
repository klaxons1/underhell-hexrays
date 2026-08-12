float *__cdecl sub_101DBA60(int *a1, float *a2, float *a3, float *a4, float *a5, float a6)
{
  float v6; // ecx
  float v7; // edx
  float v8; // edx
  float v9; // ecx
  float v10; // eax
  int v11; // edx
  int i; // esi
  int v13; // edi
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st4
  double v18; // st2
  float *result; // eax
  float v20[3]; // [esp+8h] [ebp-24h] BYREF
  float v21; // [esp+14h] [ebp-18h]
  float v22; // [esp+18h] [ebp-14h]
  float v23; // [esp+1Ch] [ebp-10h]
  float v24; // [esp+20h] [ebp-Ch]
  float v25; // [esp+24h] [ebp-8h]
  float v26; // [esp+28h] [ebp-4h]

  v6 = *a2;
  v7 = a2[1];
  v26 = a2[2];
  v25 = v7;
  v8 = a3[1];
  v24 = v6;
  v9 = *a3;
  v10 = a3[2];
  v22 = v8;
  v11 = *a1;
  v21 = v9;
  v23 = v10;
  for ( i = (*(int (__thiscall **)(int *))(v11 + 316))(a1);
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 4))(i);
        (*(void (__thiscall **)(int))(*(_DWORD *)i + 48))(i) )
  {
    v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)i + 8))(i, 1);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 40))(v13)
      || ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v13 + 116))(v13) > a6 )
    {
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)i + 20))(i, v20);
      v14 = v20[2];
      v15 = v20[1];
      v16 = v20[0];
      if ( a5 )
      {
        v17 = v22 * v15 + v16 * v21 + v14 * v23;
        v21 = v16 * v17;
        v22 = v15 * v17;
        v23 = v17 * v14;
      }
      v18 = v16 * v24 + v25 * v15 + v26 * v14;
      if ( v18 > 0.0 )
      {
        v24 = v24 - v16 * v18;
        v25 = v25 - v15 * v18;
        v26 = v26 - v18 * v14;
      }
    }
  }
  (*(void (__thiscall **)(int *, int))(*a1 + 320))(a1, i);
  if ( a4 )
  {
    *a4 = v24;
    a4[1] = v25;
    a4[2] = v26;
  }
  result = a5;
  if ( a5 )
  {
    *a5 = v21;
    a5[1] = v22;
    a5[2] = v23;
  }
  return result;
}
