int __usercall sub_1024B6F0@<eax>(int a1@<ebx>, int a2, char *Src, int a4)
{
  const char *v4; // edi
  int v5; // esi
  unsigned int v6; // eax
  void *v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int *v12; // eax
  const char *v14; // eax

  v4 = *(const char **)(a2 + 260);
  if ( !v4 )
    v4 = String;
  if ( strlen(v4) )
  {
    v5 = (*(int (__thiscall **)(_DWORD, int, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 24, a1);
    *(_DWORD *)v5 = sub_10001FB0(v4);
    v6 = sub_10182400(Src) * (strlen(off_1064F858) + 1) + a4 + 1;
    *(_DWORD *)(v5 + 12) = v6;
    v7 = (void *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, v6);
    *(_DWORD *)(v5 + 4) = v7;
    memcpy_0(v7, Src, a4 + 1);
    *(_BYTE *)(a4 + *(_DWORD *)(v5 + 4)) = 0;
    *(_DWORD *)(v5 + 8) = 0;
    *(_BYTE *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 20) = 0;
    v8 = dword_106C68CC;
    v9 = dword_106C68CC;
    if ( dword_106C68CC + 1 > dword_106C68C4 )
    {
      sub_102ABFC0(dword_106C68CC - dword_106C68C4 + 1);
      v8 = dword_106C68CC;
    }
    v10 = dword_106C68C0;
    dword_106C68CC = v8 + 1;
    v11 = v8 - v9;
    dword_106C68D0 = dword_106C68C0;
    if ( v11 > 0 )
    {
      memcpy((void *)(dword_106C68C0 + 4 * v9 + 4), (const void *)(dword_106C68C0 + 4 * v9), 4 * v11);
      v10 = dword_106C68C0;
    }
    v12 = (int *)(v10 + 4 * v9);
    if ( v12 )
      *v12 = v5;
    return v9;
  }
  else
  {
    v14 = *(const char **)(a2 + 92);
    if ( !v14 )
      v14 = String;
    DevWarning(1, "RegisterTemplateEntity: template entity with no name, class %s\n", v14);
    return -1;
  }
}
