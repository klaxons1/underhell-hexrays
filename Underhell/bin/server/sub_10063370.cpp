void sub_10063370()
{
  int v0; // eax
  int *v1; // eax

  if ( dword_10693628 )
  {
    sub_10086780("BigNet", 16);
    v0 = sub_10153490();
    v1 = (int *)sub_101E29E0(v0, 0);
    if ( v1 )
      dword_10608FB4 = *v1;
    else
      dword_10608FB4 = -1;
    dword_1060F300 = sub_10153480();
  }
}
