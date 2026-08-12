int __userpurge sub_10343C60@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, int a5)
{
  char *v6; // eax

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 1672)
    && sub_10023D10((_DWORD *)a1, 10)
    && !sub_10023D10((_DWORD *)a1, 13) )
  {
    v6 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    if ( sub_10343AE0((_DWORD *)a1, a2, a3, a1, v6) )
    {
      sub_10023E00((char *)a1, 75);
      return 21;
    }
    sub_10023CB0((char *)a1, 75);
  }
  return 0;
}
