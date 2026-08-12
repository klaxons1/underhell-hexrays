int __usercall sub_101CA570@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>)
{
  char v5; // al
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  double v10; // st7
  float v11; // [esp+0h] [ebp-Ch]

  if ( *(_BYTE *)(a1 + 828) )
    v5 = sub_101CA2A0(a1, a3, a4, a1);
  else
    v5 = sub_101CA410(a1, a2, a4);
  if ( !v5 )
    return sub_1025FAC0(a1);
  if ( *(_BYTE *)(a1 + 828) )
  {
    v7 = *(_DWORD *)(a1 + 812);
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 812) & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*(_DWORD *)(a1 + 812) & 0xFFF) + 1];
    v9 = *(_DWORD *)(v8 + 424);
    if ( !v9 )
      return sub_1025FAC0(a1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9);
  }
  v10 = *(float *)(a1 + 820) + *(float *)(dword_106B31C8 + 12);
  *(float *)(a1 + 824) = v10;
  v11 = v10;
  return sub_100EC4A0((int *)a1, v11, 0);
}
