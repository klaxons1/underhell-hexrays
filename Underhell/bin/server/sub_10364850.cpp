int __usercall sub_10364850@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  unsigned int v4; // eax

  sub_10036B00((_BYTE *)a1);
  v4 = *(_DWORD *)(a1 + 4184);
  if ( v4 == -1
    || off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != v4 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1] )
  {
    sub_10360B50((_DWORD *)a1);
    *(_BYTE *)(a1 + 4288) = 0;
  }
  if ( *(_BYTE *)(a1 + 4288) == 1 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1840))(a1);
    sub_10363720(a1, a3, COERCE_FLOAT(1));
  }
  return sub_101BD0E0((int *)(a1 + 4312), a2, *(float *)&a1, a1);
}
