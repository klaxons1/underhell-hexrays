_DWORD *__usercall sub_101AD6D0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  sub_100D0E10((float *)a1);
  *(_DWORD *)(a1 + 428) = -1;
  *(_DWORD *)(a1 + 432) = -1;
  *(_DWORD *)(a1 + 436) = 0;
  *(_DWORD *)(a1 + 440) = 0;
  return sub_101AD580((_DWORD *)a1, a2);
}
