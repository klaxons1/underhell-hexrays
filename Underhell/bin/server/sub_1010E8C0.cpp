int __cdecl sub_1010E8C0(int *a1)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // esi
  double v4; // st7
  float v6; // [esp+4h] [ebp-24h]
  float v7; // [esp+8h] [ebp-20h]
  float v8; // [esp+10h] [ebp-18h] BYREF
  float v9; // [esp+14h] [ebp-14h]
  float v10; // [esp+18h] [ebp-10h]
  float v11; // [esp+1Ch] [ebp-Ch] BYREF
  float v12; // [esp+20h] [ebp-8h]
  float v13; // [esp+24h] [ebp-4h]

  v1 = String;
  if ( *a1 > 1 )
    v1 = (const char *)a1[259];
  v6 = atof(v1);
  v2 = String;
  if ( *a1 > 2 )
    v2 = (const char *)a1[260];
  v7 = atof(v2);
  if ( *a1 > 3 )
    v3 = (const char *)a1[261];
  else
    v3 = String;
  v4 = atof(v3);
  v8 = v6 - 5.0;
  v9 = v7 - 5.0;
  v10 = v4 - 5.0;
  v11 = v6 + 5.0;
  v12 = v7 + 5.0;
  v13 = v4 + 5.0;
  sub_101A0BE0(&v8, &v11, 1, 1);
  v8 = v8 + 10.0;
  v11 = v11 - 10.0;
  sub_101A0BE0(&v8, &v11, 1, 1);
  v9 = v9 + 10.0;
  v12 = v12 - 10.0;
  sub_101A0BE0(&v8, &v11, 1, 1);
  v8 = v8 - 10.0;
  v11 = v11 + 10.0;
  return sub_101A0BE0(&v8, &v11, 1, 1);
}
