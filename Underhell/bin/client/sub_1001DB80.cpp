int __cdecl sub_1001DB80(int a1, int a2, int a3)
{
  int v3; // eax
  double v4; // st6
  double v5; // st7
  _DWORD v7[4]; // [esp+8h] [ebp-20h] BYREF
  float v8; // [esp+18h] [ebp-10h] BYREF
  float v9; // [esp+1Ch] [ebp-Ch]
  float v10; // [esp+20h] [ebp-8h]
  float v11; // [esp+24h] [ebp-4h]

  v3 = sub_10127960(a2);
  sub_1001D990(a1, v3, a2, a3, v7, &v8);
  v4 = 0.0;
  if ( v8 > 0.0 )
    v4 = v8 * (double)*(int *)(v7[0] + 16);
  if ( v9 > 0.0 )
    v4 = v4 + v9 * (double)*(int *)(v7[1] + 16);
  if ( v10 > 0.0 )
    v4 = v4 + v10 * (double)*(int *)(v7[2] + 16);
  if ( v11 <= 0.0 )
    v5 = v4;
  else
    v5 = v11 * (double)*(int *)(v7[3] + 16) + v4;
  if ( v5 <= 1.0 )
    return (int)(v5 + 0.01);
  else
    return (int)(v5 - 1.0 + 0.01);
}
