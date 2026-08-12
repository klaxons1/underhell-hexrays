int __cdecl sub_103F9920(int a1, float a2)
{
  int v2; // ecx
  int i; // esi
  int v4; // ecx
  _BYTE v6[48]; // [esp+8h] [ebp-40h] BYREF
  float v7[3]; // [esp+38h] [ebp-10h] BYREF
  int v8; // [esp+44h] [ebp-4h]

  sub_104227F0(v2);
  for ( i = 2; i >= 0; --i )
  {
    sub_10421CE0(v6, i, v7);
    v4 = 0;
    while ( fabs(v7[v4]) <= a2 )
    {
      if ( ++v4 >= 3 )
        goto LABEL_9;
    }
    v8 = -1;
    if ( v7[v4] >= 0.0 )
      v8 = 1;
    v7[v4] = (float)v8;
    v7[(v4 + 1) % 3] = 0.0;
    v7[(v4 + 2) % 3] = 0.0;
    sub_10421D00(v7, i, v6);
    sub_103F9830(i, (int)v6);
LABEL_9:
    ;
  }
  sub_10421A90(v6, a1);
  return a1;
}
