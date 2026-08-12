__int16 __thiscall sub_100A50F0(void *this, const char *a2, _DWORD *a3)
{
  char *v4; // eax
  char *v5; // esi
  __int16 v6; // si
  char *v8; // [esp+Ch] [ebp-34h] BYREF
  int v9[12]; // [esp+10h] [ebp-30h] BYREF

  if ( a2
    && (v4 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(a2) + 1)) != 0 )
  {
    strcpy(v4, a2);
    v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  sub_100A0F60((char *)v9);
  v8 = v5;
  sub_100A1130(v9, a3);
  v6 = sub_100A42B0((int)this, (int)&v8);
  sub_1009CA00(v9);
  if ( v9[2] >= 0 && v9[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v9[0]);
  return v6;
}
