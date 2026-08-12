int __usercall sub_100189A0@<eax>(
        int a1@<ebx>,
        int a2@<esi>,
        int a3,
        float a4,
        int a5,
        float *a6,
        float a7,
        float *a8,
        float a9)
{
  int result; // eax

  result = sub_10017240(a2, a3, (int)a4, a5);
  if ( result )
    return sub_10017340(a1, *(_DWORD *)(result + 16), a6, a7, a8, a9);
  return result;
}
