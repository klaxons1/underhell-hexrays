char __userpurge sub_102DFBF0@<al>(int *a1@<ecx>, double a2@<st0>, int a3, int a4)
{
  int v4; // edi
  unsigned int v6; // eax
  char v7; // bl

  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  a1[439] = (*(int (__thiscall **)(int *, int))(*a1 + 1104))(a1, a3);
  v6 = a1[878];
  if ( v6 != -1 && off_1061BE18[4 * (a1[878] & 0xFFF) + 2] == v6 >> 12 && off_1061BE18[4 * (a1[878] & 0xFFF) + 1] )
    sub_102DEE70((int)a1);
  v7 = sub_100F7CC0(a1, a2, a3, a4);
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  return v7;
}
