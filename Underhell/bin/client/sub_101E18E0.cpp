void __cdecl sub_101E18E0(float *a1, float *a2, unsigned __int8 a3)
{
  float *v3; // ecx
  int v4; // esi
  int v5; // [esp+34h] [ebp-14h]
  int v6; // [esp+38h] [ebp-10h]
  float v7; // [esp+38h] [ebp-10h]
  float v8; // [esp+38h] [ebp-10h]
  float v9; // [esp+44h] [ebp-4h]

  v3 = &a1[a3 - 1];
  *a1 = *a2;
  *v3 = a2[1];
  if ( (a3 & 1) != 0 )
    a1[a3] = 1000000.0;
  v4 = 1;
  v6 = 1;
  if ( a3 - 1 > 1 )
  {
    v5 = a3 - 2;
    while ( 1 )
    {
      v9 = (float)(a3 - 1);
      v7 = ((double)v6 * *v3 + (double)v5 * *a1 + (double)dword_103EDE74[a3]) / v9;
      v8 = floor(v7);
      --v5;
      a1[v4++] = v8;
      v6 = v4;
      if ( v4 >= a3 - 1 )
        break;
      v3 = &a1[a3 - 1];
    }
  }
}
