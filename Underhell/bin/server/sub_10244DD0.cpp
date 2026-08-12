__int16 __thiscall sub_10244DD0(void *this, const char *a2, int *a3)
{
  const char *v3; // edi
  char *v5; // eax

  v3 = a2;
  if ( a2
    && (v5 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(a2) + 1)) != 0 )
  {
    strcpy(v5, v3);
  }
  else
  {
    v5 = 0;
  }
  a2 = v5;
  return sub_10244D00((int)this, (int *)&a2, a3);
}
