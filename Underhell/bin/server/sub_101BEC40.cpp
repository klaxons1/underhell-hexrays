void __userpurge sub_101BEC40(int a1@<ecx>, int a2@<ebx>, int a3)
{
  double v3; // st7

  v3 = *(float *)(a1 + 2148) * 4.0;
  *(_BYTE *)(a1 + 2184) = 1;
  *(float *)(a1 + 2148) = v3;
  *(_DWORD *)(a1 + 196) = sub_101BE700;
  *(float *)(a1 + 2164) = 10.0;
  sub_101BE8E0(a1, a2, a3, (int)&flt_106F1CA8);
}
