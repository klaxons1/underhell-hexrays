int *__thiscall sub_101330D0(int this, int *a2, int *a3, float *a4, float *a5)
{
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  double v11; // st6
  double v12; // st7
  double v13; // st6
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  int *result; // eax
  int v19; // ebx
  double v20; // st7
  int v21; // esi
  long double v22; // st6
  float v23; // [esp+Ch] [ebp-10h]
  int v24; // [esp+14h] [ebp-8h]
  int v25; // [esp+18h] [ebp-4h]
  int i; // [esp+24h] [ebp+8h]
  int *v27; // [esp+24h] [ebp+8h]
  int j; // [esp+24h] [ebp+8h]
  int v29; // [esp+28h] [ebp+Ch]
  int v30; // [esp+28h] [ebp+Ch]

  v7 = 0;
  *a3 = 0;
  *a4 = 0.0;
  v8 = *a2;
  *a5 = 0.0;
  v25 = 0;
  *(_DWORD *)(this + 57648) = (*(int (__thiscall **)(int *, int))(v8 + 64))(a2, 1);
  *(_DWORD *)(this + 57652) = (*(int (__thiscall **)(int *, _DWORD))(*a2 + 64))(a2, 0);
  *(_DWORD *)(this + 57656) = (*(int (__thiscall **)(int *))(*a2 + 16))(a2);
  *(float *)(this + 57640) = ((double (__thiscall *)(int *, int))*(_DWORD *)(*a2 + 44))(a2, 1);
  *(float *)(this + 57644) = ((double (__thiscall *)(int *, int))*(_DWORD *)(*a2 + 48))(a2, 1);
  *(float *)(this + 57636) = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*a2 + 40))(a2, 0);
  *(float *)(this + 57660) = ((double (__thiscall *)(int *, int))*(_DWORD *)(*a2 + 52))(a2, 1) * 0.0009765625;
  *(float *)(this + 57664) = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*a2 + 52))(a2, 0) * 0.0009765625;
  *(float *)(this + 57668) = ((double (__thiscall *)(int *, int))*(_DWORD *)(*a2 + 56))(a2, 1);
  *(float *)(this + 57672) = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*a2 + 56))(a2, 0);
  v9 = this + 57676;
  for ( i = this + 57676; ; v9 = i )
  {
    (*(void (__thiscall **)(int *, int, int, int))(*a2 + 80))(a2, v7, v9, v9 + 8);
    i += 4;
    if ( ++v7 >= 2 )
      break;
  }
  v10 = *(_DWORD *)(*(_DWORD *)(this + 57724) + 28);
  v11 = 0.0;
  if ( *(float *)(v10 + 44) > 0.001 )
  {
    v11 = -0.5 / *(float *)(v10 + 44);
    *(float *)(this + 57636) = *(float *)(this + 57636) + v11;
  }
  v12 = v11;
  if ( *(float *)(this + 57636) >= 0.0 )
    v13 = *(float *)(this + 57636);
  else
    v13 = 0.0;
  v14 = *(_DWORD *)(this + 57648);
  *(float *)(this + 57636) = v13;
  v15 = v14 - *(_DWORD *)(this + 57656) + 1;
  if ( v15 <= v14 )
  {
    do
    {
      (*(void (__thiscall **)(int *, int, int))(*a2 + 72))(a2, 1, v15);
      v16 = v15 & 0x3FF;
      v24 = this + 36 * v16 + 20768;
      v27 = (int *)(this + 8 * v16 + 288);
      (*(void (__thiscall **)(int *, int, int, int *, int))(*a2 + 92))(a2, 1, v15, v27, this + 8 * v16 + 292);
      if ( *v27 < 9995 )
      {
        v23 = v12 * 1000.0;
        *v27 = (int)((double)*v27 + v23) <= 0 ? 0 : (int)((double)*v27 + v23);
      }
      for ( j = 0; j <= 13; ++j )
        *(_WORD *)(v24 + 2 * j) = (*(int (__thiscall **)(int *, int, int, int))(*a2 + 76))(a2, 1, v15, j);
      v17 = *(unsigned __int16 *)(v24 + 26);
      if ( v17 > *a3 )
        *a3 = v17;
      ++v25;
      ++v15;
      *a4 = (double)*(unsigned __int16 *)(v24 + 26) + *a4;
    }
    while ( v15 <= *(_DWORD *)(this + 57648) );
  }
  result = a3;
  if ( *a3 > 1000 )
    *a3 = 1000;
  if ( v25 >= 1 )
  {
    v19 = 0;
    v29 = 0;
    v20 = *a4 / (double)v25;
    *a4 = v20;
    v21 = *(_DWORD *)(this + 57648) - *(_DWORD *)(this + 57656) + 1;
    if ( v21 <= *(_DWORD *)(this + 57648) )
    {
      do
      {
        v30 = *(unsigned __int16 *)(this + 36 * (v21++ & 0x3FF) + 20794);
        v19 += (int)((double)v30 - v20) * (int)((double)v30 - v20);
      }
      while ( v21 <= *(_DWORD *)(this + 57648) );
      v29 = v19;
    }
    result = (int *)(v25 - 1);
    v22 = sqrt((double)v29 / (double)(v25 - 1));
    *a5 = v20 + v22 + v22;
  }
  return result;
}
