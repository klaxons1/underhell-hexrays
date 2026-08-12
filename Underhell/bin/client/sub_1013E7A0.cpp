void __usercall sub_1013E7A0(float *a1@<edi>, float *a2@<esi>)
{
  double v2; // st7
  int v3; // ecx
  int v4; // eax
  double v5; // st6
  double v6; // st6

  v2 = 0.0;
  v3 = 0;
  if ( *((int *)off_103DC81C + 5) > 1 && (v4 = sub_100422D0(), v2 = 0.0, (v3 = v4) != 0) && *(float *)(v4 + 3952) > 0.0 )
  {
    v5 = *(float *)(v4 + 3952);
  }
  else if ( !byte_1043A878 || (v5 = flt_1043A87C, flt_1043A87C <= v2) )
  {
    v5 = *(float *)(dword_1043AC14 + 44);
  }
  *a1 = v5;
  if ( v3 && v2 < *(float *)(v3 + 3956) )
  {
    v6 = *(float *)(v3 + 3956);
  }
  else if ( !byte_1043A879 || (v6 = flt_1043A880, flt_1043A880 <= v2) )
  {
    v6 = *(float *)(dword_1043ABCC + 44);
  }
  *a2 = v6;
  if ( *(_DWORD *)(dword_1043ACEC + 48) )
  {
    *a2 = 20.0;
    *a1 = v2;
  }
  if ( *a2 < (double)*a1 )
    *a2 = *a1;
}
