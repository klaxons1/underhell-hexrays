_DWORD *__thiscall sub_101FBD60(int **this, void *Src, int a3, int a4)
{
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // esi

  if ( !Src )
    return 0;
  v5 = sub_101FBCF0(this[35], Src);
  if ( v5 )
  {
    v6 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 6707);
    if ( v6 )
    {
      v7 = (_DWORD *)((v6 + 19) & 0xFFFFFFF0);
      *(v7 - 1) = v6;
      v8 = sub_101FB7A0(v7);
    }
    else
    {
      v8 = 0;
    }
    sub_101FC420(v5, *(float *)&a3, a4);
    return v8;
  }
  else
  {
    Warning("Attempted to create unknown particle system type %s\n", (const char *)Src);
    return 0;
  }
}
