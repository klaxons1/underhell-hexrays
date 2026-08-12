int __cdecl sub_100E7F30(int a1)
{
  int result; // eax

  if ( a1 )
  {
    nullsub_4(a1);
    if ( *(_DWORD *)(a1 + 84) )
      sub_10184660(*(_DWORD *)(a1 + 84));
    sub_101C7570(a1 + 96);
    sub_101C8650(a1 + 96);
    sub_102375F0(a1 + 64);
    sub_102375F0(a1 + 44);
    sub_102375F0(a1 + 8);
    return sub_10184660(a1);
  }
  return result;
}
