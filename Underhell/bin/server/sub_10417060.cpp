void __userpurge sub_10417060(int a1@<ecx>, float a2@<edi>, int a3)
{
  double v4; // st7
  float v5; // [esp+0h] [ebp-14h]
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_10422220(a1 + 704, v6);
  if ( *(_DWORD *)(a3 + 24) != 1 || (v4 = *(float *)(a3 + 8), 0.0 == v4) )
    v4 = 1500.0;
  v5 = v4;
  sub_10416FC0(a1, a2, (float *)v6, v5);
}
