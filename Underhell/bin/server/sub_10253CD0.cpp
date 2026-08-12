void __userpurge sub_10253CD0(int a1@<ecx>, __int64 a2@<esi:edi>, int a3)
{
  _DWORD *v3; // ecx

  HIDWORD(a2) = a1;
  if ( 1.0 != *(float *)(a1 + 872) )
  {
    v3 = *(_DWORD **)(a1 + 800);
    if ( v3 && sub_101ACCC0(v3) )
      *(_DWORD *)(HIDWORD(a2) + 800) = sub_101ACCC0(*(_DWORD **)(HIDWORD(a2) + 800));
    *(float *)(HIDWORD(a2) + 872) = 1.0;
  }
  sub_10253AA0(SHIDWORD(a2), a2, *(float *)(HIDWORD(a2) + 868), 0.0);
}
