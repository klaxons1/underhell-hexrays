void __userpurge sub_10253F00(int a1@<ecx>, __int64 a2@<esi:edi>, int a3)
{
  int v3; // edx
  bool v4; // zf
  double v5; // st7
  float v6; // [esp+0h] [ebp-Ch]

  HIDWORD(a2) = a3;
  v3 = *(_DWORD *)(a3 + 24);
  v4 = v3 == 1;
  if ( v3 == 1 )
  {
    v5 = 1.0;
    if ( *(float *)(a3 + 8) > 1.0 )
      goto LABEL_8;
    v4 = 1;
  }
  v5 = 0.0;
  if ( (!v4 || *(float *)(a3 + 8) >= 0.0) && v3 == 1 )
    v5 = *(float *)(a3 + 8);
LABEL_8:
  v6 = v5 * *(float *)(a1 + 868);
  sub_10253AA0(a1, a2, v6, 0.0);
}
