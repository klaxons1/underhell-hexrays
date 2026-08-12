__int16 __thiscall sub_10079600(void *this, const char *a2, const void *a3)
{
  char *v4; // eax
  char *v6; // [esp+Ch] [ebp-34h] BYREF
  _BYTE v7[48]; // [esp+10h] [ebp-30h] BYREF

  if ( a2
    && (v4 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(a2) + 1)) != 0 )
  {
    strcpy(v4, a2);
  }
  else
  {
    v4 = 0;
  }
  v6 = v4;
  qmemcpy(v7, a3, sizeof(v7));
  return sub_100794A0((int)this, (int)&v6);
}
