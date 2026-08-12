void __cdecl sub_10129220(int a1, int a2)
{
  int v2; // edi

  v2 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a2 + 40) != v2 )
  {
    nullsub_4();
    *(_DWORD *)(a2 + 40) = v2;
  }
  *(float *)(a2 + 32) = *((float *)off_103DC81C + 3);
}
