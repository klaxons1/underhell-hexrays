int __usercall sub_10137860@<eax>(float *a1@<ebx>, int a2@<edi>, int *a3@<esi>)
{
  int result; // eax
  bool v4; // cc
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax

  *a1 = 2.0;
  if ( *a3 > 1 )
    *a1 = atof((const char *)a3[259]);
  *(_DWORD *)a2 = -16777216;
  result = *a3;
  if ( *a3 > 4 )
  {
    v4 = result <= 2;
    v5 = String;
    if ( !v4 )
      v5 = (const char *)a3[260];
    *(_BYTE *)a2 = atoi(v5);
    v6 = String;
    if ( *a3 > 3 )
      v6 = (const char *)a3[261];
    *(_BYTE *)(a2 + 1) = atoi(v6);
    v7 = String;
    if ( *a3 > 4 )
      v7 = (const char *)a3[262];
    result = atoi(v7);
    *(_BYTE *)(a2 + 2) = result;
    if ( *a3 == 5 )
    {
      result = atoi(String);
      *(_BYTE *)(a2 + 3) = result;
    }
  }
  return result;
}
