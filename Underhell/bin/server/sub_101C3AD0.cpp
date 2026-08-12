int __userpurge sub_101C3AD0@<eax>(float *a1@<ecx>, int a2@<ebx>, float a3)
{
  int result; // eax

  a1[141] = a3 + a1[141];
  if ( a1[148] == flt_106F1CA8 && a1[149] == flt_106F1CAC && a1[150] == flt_106F1CB0 )
    return 0;
  result = sub_101C39E0((int)off_10638654, a2, (int)a1, (int)a1, a3);
  if ( result )
    a1[141] = a1[141] - a3;
  return result;
}
