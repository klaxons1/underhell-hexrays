int __usercall sub_10426400@<eax>(unsigned int a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // eax

  if ( !a1 )
    return 0;
  v3 = a1;
  v4 = a1;
  v5 = 0;
  do
  {
    if ( (v3 & 1) != 0 )
      v5 ^= v4;
    v4 *= 2;
    v3 >>= 1;
    if ( v4 >= 0x100 )
      v4 ^= a2;
  }
  while ( v3 );
  v6 = 0;
  v7 = a1;
  while ( v5 )
  {
    if ( (v5 & 1) != 0 )
      v6 ^= v7;
    v7 *= 2;
    v5 >>= 1;
    if ( v7 >= 0x100 )
      v7 ^= a2;
  }
  v8 = 0;
  v9 = v6;
  v10 = v6;
  while ( v9 )
  {
    if ( (v9 & 1) != 0 )
      v8 ^= v10;
    v10 *= 2;
    v9 >>= 1;
    if ( v10 >= 0x100 )
      v10 ^= a2;
  }
  result = 0;
  while ( v8 )
  {
    if ( (v8 & 1) != 0 )
      result ^= a1;
    a1 *= 2;
    v8 >>= 1;
    if ( a1 >= 0x100 )
      a1 ^= a2;
  }
  return result;
}
