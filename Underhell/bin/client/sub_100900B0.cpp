double __usercall sub_100900B0@<st0>(int a1@<eax>)
{
  if ( *(_BYTE *)(a1 + 64) )
    return 0.001;
  else
    return off_103EDFF4(a1 + 16)
         * (fabs(*(float *)(a1 + 20) * *(float *)(a1 + 52))
          + fabs(*(float *)(a1 + 16) * *(float *)(a1 + 48))
          + fabs(*(float *)(a1 + 24) * *(float *)(a1 + 56)))
         + 0.001;
}
