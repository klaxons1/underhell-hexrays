void __thiscall sub_100B8330(void *this, int a2)
{
  char *v3; // eax

  if ( *(_DWORD *)(a2 + 24) == 2 || (sub_1010D460(a2 + 8), *(_DWORD *)(a2 + 24) == 2) )
  {
    v3 = *(char **)(a2 + 8);
    if ( !v3 )
    {
LABEL_8:
      v3 = 0;
      goto LABEL_9;
    }
  }
  else
  {
    v3 = (char *)sub_1010D460(a2 + 8);
  }
  if ( !v3 || !*v3 )
    goto LABEL_8;
LABEL_9:
  sub_100B8270((int)this, v3);
}
