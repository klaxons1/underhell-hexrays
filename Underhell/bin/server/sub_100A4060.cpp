int __thiscall sub_100A4060(int this, const char *a2, char **a3)
{
  const char *v3; // edi
  char *v5; // eax
  char *v6; // edx
  int result; // eax
  char **v8; // ecx
  char *v9; // [esp+8h] [ebp-8h] BYREF
  char *v10; // [esp+Ch] [ebp-4h]

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
  v6 = *a3;
  v9 = v5;
  v10 = v6;
  sub_1009B420((_WORD *)this, (int)&v9, &a3, &a2);
  result = (unsigned __int16)sub_100A2290(this, (__int16)a3, (char)a2);
  v8 = (char **)(*(_DWORD *)(this + 4) + 16 * (__int16)result + 8);
  if ( *(_DWORD *)(this + 4) + 16 * (__int16)result != -8 )
  {
    *v8 = v9;
    v8[1] = v10;
  }
  return result;
}
