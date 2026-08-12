int *__userpurge sub_102774C0@<eax>(int *a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4)
{
  if ( a1[240] >= 0 )
  {
    if ( a1[238] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, a1[238]);
      a1[238] = 0;
    }
    a1[239] = 0;
  }
  sub_10255530(a1, a2, a3);
  if ( (a4 & 1) != 0 )
    sub_10034930((int)a1);
  return a1;
}
