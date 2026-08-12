int __userpurge sub_1018ABC0@<eax>(int result@<eax>, _DWORD *a2@<ecx>, int a3)
{
  int v3; // edx
  int i; // esi

  v3 = a2[186];
  for ( i = a2[185]; i != a2[188]; v3 = *(_DWORD *)(v3 + 32) )
  {
    for ( result = i; result != v3; result = *(_DWORD *)(result + 28) )
      *(_DWORD *)(result + 64) = a3;
    i = *(_DWORD *)(i + 32);
  }
  return result;
}
