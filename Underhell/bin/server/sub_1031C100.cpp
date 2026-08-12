void __userpurge sub_1031C100(int a1@<ecx>, int a2@<edi>, int a3)
{
  unsigned int v3; // eax
  int *v4; // ecx
  _BYTE v5[32]; // [esp+0h] [ebp-20h] BYREF

  v3 = *(_DWORD *)(a1 + 412);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1], v4[1] != v3 >> 12) )
    sub_1031B9A0(0, a2, (int)v5);
  else
    sub_1031B9A0(*v4, a2, (int)v5);
}
