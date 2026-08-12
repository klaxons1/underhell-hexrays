float *__usercall sub_10172220@<eax>(int a1@<ecx>, int a2@<edi>)
{
  float *result; // eax

  if ( !*(_DWORD *)(a1 + 260) )
    *(_DWORD *)(a1 + 260) = sub_100F0C50(a1 + 8, a2, a1, "particle/particledefault");
  result = sub_100F2B60(a1, a1, 48, *(_DWORD *)(a1 + 260), (float *)(a1 + 224));
  if ( result )
    *((_WORD *)result + 21) = 0;
  return result;
}
