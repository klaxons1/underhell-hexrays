char __stdcall sub_102F35F0(int a1)
{
  int v1; // eax

  v1 = *(__int16 *)(a1 + 816);
  if ( v1 == 13 || v1 == 16 )
    return 1;
  else
    return sub_103966C0(a1);
}
