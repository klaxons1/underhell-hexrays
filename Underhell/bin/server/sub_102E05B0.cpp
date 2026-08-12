void __usercall sub_102E05B0(_DWORD *a1@<ecx>, float *a2@<edi>)
{
  sub_101EF960((int)a1, a2);
  if ( !byte_106B4F38 && !a1[1005] )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 264))(a1) )
      sub_102DE250((int)a1);
  }
}
