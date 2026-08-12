int __thiscall sub_10250DA0(void *this, char *a2)
{
  const char *v2; // ebp
  unsigned int v4; // eax
  int v6; // eax
  int v7; // edi
  int v8; // esi
  _BYTE v9[2048]; // [esp+Ch] [ebp-800h] BYREF

  v2 = a2;
  if ( a2 )
  {
    if ( *a2 == 35 )
    {
      v6 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, a2);
      if ( v6 )
        return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 772))(this, v6);
    }
  }
  else
  {
    v2 = Locale;
  }
  v4 = strlen(v2);
  if ( v4 >= 0x3FF )
  {
    v7 = 2 * v4 + 4;
    v8 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, v7);
    (*(void (__thiscall **)(int, const char *, int, int))(*(_DWORD *)dword_1047CA78 + 12))(dword_1047CA78, v2, v8, v7);
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 772))(this, v8);
    return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v8);
  }
  else
  {
    (*(void (__thiscall **)(int, const char *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      v2,
      v9,
      2048);
    return (*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 772))(this, v9);
  }
}
