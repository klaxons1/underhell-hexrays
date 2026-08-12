int __usercall sub_103599D0@<eax>(int *a1@<ecx>, int a2@<edi>, double a3@<st0>)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // edi
  int v7; // eax
  char v8; // al
  int v10; // [esp-4h] [ebp-8h]

  v4 = a1[1044];
  if ( v4 != -1
    && (v5 = &off_1061BE18[4 * (a1[1044] & 0xFFF) + 1], v5[1] == v4 >> 12)
    && *v5
    && sub_10023D10(a1, 10)
    && (v10 = a2,
        v6 = *a1,
        v7 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1),
        v8 = (*(int (__thiscall **)(int *, int))(v6 + 1768))(a1, v7),
        a2 = v10,
        !v8) )
  {
    return sub_10023D10(a1, 23) ? 41 : 113;
  }
  else
  {
    return sub_10340F00(a1, a2, a3);
  }
}
