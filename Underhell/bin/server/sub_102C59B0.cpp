int __thiscall sub_102C59B0(void *this, const char *a2)
{
  char *v3; // eax
  char *v5; // [esp+8h] [ebp-20h] BYREF
  __int16 v6; // [esp+10h] [ebp-18h]
  int v7; // [esp+12h] [ebp-16h]
  int v8; // [esp+18h] [ebp-10h]
  double v9; // [esp+20h] [ebp-8h]

  if ( a2
    && (v3 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(a2) + 1)) != 0 )
  {
    strcpy(v3, a2);
  }
  else
  {
    v3 = 0;
  }
  v9 = 0.0;
  v7 = 0;
  v6 = 0;
  v8 = 0;
  v5 = v3;
  return sub_102C5460((int)this, (int)&v5);
}
