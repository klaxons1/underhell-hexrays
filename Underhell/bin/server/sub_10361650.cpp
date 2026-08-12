bool __userpurge sub_10361650@<al>(int a1@<ecx>, int a2@<edi>, int a3)
{
  const char *v4; // eax
  const char *v5; // eax

  sub_10361330(a1, a2, 1);
  if ( *(_DWORD *)(a3 + 24) == 2 )
  {
    v4 = *(const char **)(a3 + 8);
    if ( !v4 )
    {
LABEL_7:
      v4 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    v4 = sub_1010D460(a3 + 8);
  }
  if ( !v4 || !*v4 )
    goto LABEL_7;
LABEL_8:
  *(_DWORD *)(a1 + 4200) = v4;
  *(float *)(a1 + 4176) = 0.0;
  *(_BYTE *)(a1 + 4196) = 1;
  *(float *)(a1 + 4172) = 0.0;
  if ( *(_DWORD *)(a3 + 24) == 2 )
  {
    v5 = *(const char **)(a3 + 8);
    if ( !v5 )
      return sub_10360BB0(a1, a3, COERCE_FLOAT(String), 0);
  }
  else
  {
    v5 = sub_1010D460(a3 + 8);
  }
  return sub_10360BB0(a1, a3, *(float *)&v5, 0);
}
