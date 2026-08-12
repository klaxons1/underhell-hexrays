double __cdecl sub_1001DC50(int a1, int a2, int a3, int a4)
{
  double v4; // st6
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp+0h] [ebp-24h] BYREF
  int v11; // [esp+4h] [ebp-20h]
  int v12; // [esp+8h] [ebp-1Ch]
  int v13; // [esp+Ch] [ebp-18h]
  float v14; // [esp+10h] [ebp-14h] BYREF
  float v15; // [esp+14h] [ebp-10h]
  float v16; // [esp+18h] [ebp-Ch]
  float v17; // [esp+1Ch] [ebp-8h]
  int v18; // [esp+20h] [ebp-4h]

  sub_1001D990(a1, a2, a3, a4, &v10, &v14);
  v4 = 0.0;
  if ( v14 > 0.0 )
  {
    v5 = *(_DWORD *)(v10 + 16);
    if ( v5 > 1 )
    {
      v18 = v5 - 1;
      v4 = v14 * (*(float *)(v10 + 8) / (double)(v5 - 1));
    }
  }
  if ( v15 > 0.0 )
  {
    v6 = *(_DWORD *)(v11 + 16);
    if ( v6 > 1 )
    {
      v18 = v6 - 1;
      v4 = v4 + v15 * (*(float *)(v11 + 8) / (double)(v6 - 1));
    }
  }
  if ( v16 > 0.0 )
  {
    v7 = *(_DWORD *)(v12 + 16);
    if ( v7 > 1 )
    {
      v18 = v7 - 1;
      v4 = v4 + v16 * (*(float *)(v12 + 8) / (double)(v7 - 1));
    }
  }
  if ( v17 <= 0.0 )
    return v4;
  v8 = *(_DWORD *)(v13 + 16);
  if ( v8 <= 1 )
    return v4;
  v18 = v8 - 1;
  return v17 * (*(float *)(v13 + 8) / (double)(v8 - 1)) + v4;
}
