int __userpurge sub_10417030@<eax>(int a1@<ecx>, float a2@<edi>, int a3)
{
  if ( *(_DWORD *)(a3 + 24) == 1 )
    return sub_10416D60(a1, a2, *(float *)(a3 + 8));
  else
    return sub_10416D60(a1, a2, 0.0);
}
