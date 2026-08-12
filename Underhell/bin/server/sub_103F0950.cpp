void __userpurge sub_103F0950(int a1@<ecx>, int a2@<ebx>, int a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // eax
  int v7; // ecx

  v4 = *(_DWORD *)(a1 + 804);
  if ( v4 == -1 || (v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 804) & 0xFFF) + 1], v5[1] != v4 >> 12) )
    v6 = 0;
  else
    v6 = *v5;
  if ( v6 != a3 && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 800) )
  {
    v7 = *(_DWORD *)(a3 + 424);
    if ( v7 )
    {
      if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 76))(v7) & 4) != 0 && (int)sub_1040ABE0(a3) <= 0 )
        sub_103F0680(a1, a2, (char **)a3);
    }
  }
}
