unsigned int __usercall sub_102018B0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  unsigned int result; // eax

  sub_100E38F0((float *)a1);
  result = *(_DWORD *)(a1 + 308);
  if ( result != -1 )
  {
    result >>= 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 2] == result )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 1] )
        *(_BYTE *)(a1 + 801) = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 801) )
  {
    if ( *(_BYTE *)(a1 + 800) )
      sub_10201650(a1, a2);
    return sub_100EC3F0((_DWORD *)a1, 0, 0.0, 0);
  }
  return result;
}
