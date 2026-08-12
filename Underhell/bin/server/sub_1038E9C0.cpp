int __usercall sub_1038E9C0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int result; // eax
  _DWORD *v5; // ecx

  if ( (*(_DWORD *)(a1 + 248) & 0x80000) == 0 || (result = sub_1038AD40(a1, a2, a3)) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 4184) || *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 4188) <= -0.001)
      && sub_1004AFF0((_DWORD *)a1, 0) )
    {
      if ( *(_DWORD *)(a1 + 4184) )
      {
        sub_10050BE0((float *)(a1 + 4188));
        *(_DWORD *)(a1 + 4184) = 0;
      }
      return 43;
    }
    if ( sub_103896B0(a1, 1) )
      return 43;
    *(_DWORD *)(a1 + 4184) = -1;
    if ( sub_1038E970((_DWORD *)a1) && sub_1004AFF0(v5, 10) )
      return 94;
    else
      return 95;
  }
  return result;
}
