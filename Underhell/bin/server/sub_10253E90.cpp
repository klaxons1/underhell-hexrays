void __userpurge sub_10253E90(int a1@<ecx>, __int64 a2@<esi:edi>, int a3)
{
  double v3; // st7
  int v4; // edx
  double v5; // st6
  float v6; // [esp+0h] [ebp-Ch]

  v3 = 0.0;
  HIDWORD(a2) = a3;
  v4 = *(_DWORD *)(a3 + 24);
  if ( v4 == 1 )
    v5 = *(float *)(a3 + 8);
  else
    v5 = 0.0;
  if ( v5 <= *(float *)(a1 + 868) )
  {
    if ( v4 == 1 && *(float *)(a3 + 8) >= 0.0 )
      v3 = *(float *)(a3 + 8);
    v6 = v3;
    sub_10253AA0(a1, a2, v6, 0.0);
  }
  else
  {
    sub_10253AA0(a1, a2, *(float *)(a1 + 868), 0.0);
  }
}
