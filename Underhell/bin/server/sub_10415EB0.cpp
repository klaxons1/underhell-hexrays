void __usercall sub_10415EB0(int a1@<ecx>, float a2@<edi>)
{
  sub_100BDBA0(a1);
  if ( (*(_BYTE *)(a1 + 248) & 8) == 0 && !*(_BYTE *)(a1 + 2136) )
    sub_10415A50((_DWORD *)a1, a2);
}
