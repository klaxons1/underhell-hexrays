int __stdcall sub_100259B0(int a1)
{
  int result; // eax
  int v2; // eax
  int v3; // eax

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v2 = sub_1022A910("baseanimating", 0);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 12);
      if ( v3 )
        sub_101B9A30(v3);
    }
    return nullsub_5(a1);
  }
  return result;
}
