unsigned __int8 __usercall sub_103C9E90@<al>(int a1@<ecx>, int a2@<edi>)
{
  int *v3; // eax

  sub_10397340(a1);
  if ( sub_103C7470(a1) && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 5716) )
  {
    v3 = sub_103C9A30(a1);
    if ( v3 )
      sub_103C86C0(a1, (int)v3, 0);
    *(float *)(a1 + 5716) = *(float *)(dword_106B31C8 + 12) + 2.0;
  }
  return sub_103C8C80(a1, a2);
}
