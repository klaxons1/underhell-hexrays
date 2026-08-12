int __usercall sub_10061840@<eax>(int result@<eax>, int a2@<ecx>)
{
  int v2; // edx

  v2 = *(_DWORD *)(a2 + 16);
  if ( v2 > 0 )
  {
    result = 0;
    do
    {
      *(_DWORD *)(*(_DWORD *)(a2 + 4) + result + 8) = 0;
      result += 524;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
