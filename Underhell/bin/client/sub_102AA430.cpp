int __cdecl sub_102AA430(void *a1, const void *a2, const void *a3)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // cx

  v3 = *(_WORD *)(*(_DWORD *)a2 + 4);
  v4 = *(_WORD *)(*(_DWORD *)a3 + 4);
  if ( v4 <= v3 )
    return v4 < v3;
  else
    return -1;
}
