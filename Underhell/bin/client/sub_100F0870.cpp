__int16 __thiscall sub_100F0870(int this, const char *a2)
{
  const char *v2; // ebx
  char *v4; // eax
  unsigned __int16 v5; // ax
  int v6; // edi
  int v7; // ecx
  _DWORD v9[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-4h] BYREF

  v2 = a2;
  if ( a2
    && (v4 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(a2) + 1)) != 0 )
  {
    strcpy(v4, v2);
  }
  else
  {
    v4 = 0;
  }
  v9[0] = v4;
  sub_100EC880((_WORD *)this, (int)v9, (unsigned __int16 *)&v10, &a2);
  v5 = sub_100E3A00(this);
  v6 = v5;
  sub_100EF3A0(this, v5, v10, (char)a2);
  v7 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v7 + 16 * v6 != -8 )
  {
    *(_DWORD *)(v7 + 16 * v6 + 8) = v9[0];
    *(_DWORD *)(v7 + 16 * v6 + 12) = v9[1];
  }
  return v6;
}
