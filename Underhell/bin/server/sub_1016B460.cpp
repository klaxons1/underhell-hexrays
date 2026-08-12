int __cdecl sub_1016B460(int a1, int *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int *v7; // eax

  if ( !a1 )
    return 0;
  v3 = a2[1];
  v4 = a2[3];
  if ( v4 + 1 > v3 )
    sub_102ABFC0(v4 - v3 + 1);
  ++a2[3];
  v5 = *a2;
  v6 = a2[3] - v4 - 1;
  a2[4] = *a2;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 4 * v4 + 4), (const void *)(v5 + 4 * v4), 4 * v6);
  v7 = (int *)(*a2 + 4 * v4);
  if ( v7 )
    *v7 = a1;
  return sub_1016B400(a1, a2) + 1;
}
