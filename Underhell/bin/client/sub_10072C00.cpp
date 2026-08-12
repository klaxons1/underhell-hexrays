int __thiscall sub_10072C00(int this, const char *a2, char **a3)
{
  const char *v3; // ebx
  char *v5; // eax
  char *v6; // edx
  int v7; // esi
  int v8; // eax
  char **v9; // eax
  char *v11; // [esp+Ch] [ebp-8h] BYREF
  char *v12; // [esp+10h] [ebp-4h]

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
  v11 = v5;
  v12 = v6;
  sub_100715D0(
    (unsigned __int8 (__cdecl **)(int, int))this,
    (int)&v11,
    (unsigned __int8 (__cdecl **)(int, int))&a3,
    &a2);
  v7 = sub_100CC520(this);
  sub_100727E0((_DWORD *)this, v7, (int)a3, (char)a2);
  v8 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  v9 = (char **)(v8 + 24 * v7 + 16);
  if ( v9 )
  {
    *v9 = v11;
    v9[1] = v12;
  }
  return v7;
}
