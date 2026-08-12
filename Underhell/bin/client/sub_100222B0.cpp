char __cdecl sub_100222B0(int a1, float *a2, int a3)
{
  int v3; // ecx
  float v5[3]; // [esp+4h] [ebp-24h] BYREF
  float v6[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v7[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = a1 + *(_DWORD *)(a1 + 12);
  if ( *(float *)(v3 + 8) * *(float *)(v3 + 8)
     + *(float *)(v3 + 4) * *(float *)(v3 + 4)
     + *(float *)(v3 + 12) * *(float *)(v3 + 12) <= 0.0 )
    return sub_10020670(
             *(_DWORD *)(*(_DWORD *)(a1 + 12) + a1),
             *(_DWORD *)(*(_DWORD *)(a1 + 12) + a1 + 28),
             *(_DWORD *)(*(_DWORD *)(a1 + 12) + a1 + 56),
             a2,
             a3);
  v7[0] = *(_DWORD *)(v3 + 4);
  v7[1] = *(_DWORD *)(v3 + 8);
  v7[2] = *(_DWORD *)(v3 + 12);
  sub_101ED920(v7, a3 + 48 * *(_DWORD *)v3, v6);
  sub_101EDA00(a3 + 48 * *(_DWORD *)(a1 + *(_DWORD *)(a1 + 12) + 28), 3, v5);
  return sub_1001FDD0(
           *(_DWORD *)(*(_DWORD *)(a1 + 12) + a1),
           *(_DWORD *)(*(_DWORD *)(a1 + 12) + a1 + 28),
           *(_DWORD *)(*(_DWORD *)(a1 + 12) + a1 + 56),
           a2,
           v5,
           v6,
           a3);
}
