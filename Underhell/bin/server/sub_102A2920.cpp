char __usercall sub_102A2920@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  _DWORD *v4; // ecx
  float *v5; // eax

  sub_102A0540(a1, a2, a3);
  v4 = *(_DWORD **)(a1 + 4);
  *(float *)(a1 + 180) = -1.0;
  *(_DWORD *)(a1 + 156) = 0;
  sub_10020460(v4, 0x10000000);
  v5 = (float *)(*(int (**)(void))(**(_DWORD **)(a1 + 4) + 1868))();
  sub_100756F0(v5, 60.0);
  return sub_102A01C0((int *)a1, (int)"TLK_PASSENGER_FINISH_EXIT", 0, 0, 0, 0);
}
