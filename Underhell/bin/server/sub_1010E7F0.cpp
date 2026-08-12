int __cdecl sub_1010E7F0(int *a1)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // esi
  float v8[3]; // [esp+4h] [ebp-18h] BYREF
  float v9[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = String;
  if ( *a1 > 1 )
    v1 = (const char *)a1[259];
  v8[0] = atof(v1);
  v2 = String;
  if ( *a1 > 2 )
    v2 = (const char *)a1[260];
  v8[1] = atof(v2);
  v3 = String;
  if ( *a1 > 3 )
    v3 = (const char *)a1[261];
  v8[2] = atof(v3);
  v4 = String;
  if ( *a1 > 4 )
    v4 = (const char *)a1[262];
  v9[0] = atof(v4);
  v5 = String;
  if ( *a1 > 5 )
    v5 = (const char *)a1[263];
  v9[1] = atof(v5);
  if ( *a1 > 6 )
    v6 = (const char *)a1[264];
  else
    v6 = String;
  v9[2] = atof(v6);
  return sub_101A0BE0(v8, v9, 1, 1);
}
