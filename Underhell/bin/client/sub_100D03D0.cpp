int __thiscall sub_100D03D0(void *this, const char *a2)
{
  const char *v2; // edi
  char *v4; // eax

  v2 = a2;
  if ( a2
    && (v4 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(a2) + 1)) != 0 )
  {
    strcpy(v4, v2);
    a2 = v4;
    return sub_100CF5F0((int)this, (int *)&a2);
  }
  else
  {
    a2 = 0;
    return sub_100CF5F0((int)this, (int *)&a2);
  }
}
