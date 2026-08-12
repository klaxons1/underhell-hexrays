int __thiscall sub_102C5A30(void *this, const char *a2, _DWORD *a3)
{
  char *v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  _DWORD v11[8]; // [esp+8h] [ebp-20h] BYREF

  if ( a2
    && (v4 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(a2) + 1)) != 0 )
  {
    strcpy(v4, a2);
  }
  else
  {
    v4 = 0;
  }
  v11[0] = v4;
  v5 = a3[1];
  v11[2] = *a3;
  v6 = a3[2];
  v11[3] = v5;
  v7 = a3[3];
  v11[4] = v6;
  v8 = a3[4];
  v11[5] = v7;
  v9 = a3[5];
  v11[6] = v8;
  v11[7] = v9;
  return sub_102C5460((int)this, (int)v11);
}
