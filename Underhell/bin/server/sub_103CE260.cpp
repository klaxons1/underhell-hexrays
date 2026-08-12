int __userpurge sub_103CE260@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 256) >> 27;
  if ( (*(_DWORD *)(a1 + 256) & 0x8000000) != 0 )
    return sub_1032DF20(a1, a2, a3, a4, a5);
  return result;
}
