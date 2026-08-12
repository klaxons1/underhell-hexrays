char __userpurge sub_10111740@<al>(_DWORD *a1@<ecx>, int a2@<edi>, void *a3, int a4, int a5, float a6)
{
  unsigned int v7; // eax
  _DWORD *v8; // ecx
  int v9; // edi
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v15; // [esp+0h] [ebp-Ch]

  v7 = a1[80];
  if ( v7 != -1 && (v8 = (_DWORD *)((char *)off_103DCD74 + 16 * (a1[80] & 0xFFF) + 4), v8[1] == v7 >> 12) && *v8 )
  {
    v15 = a2;
    v9 = a1[a1[694] + 656];
    if ( !a1[484] && (*(int (__thiscall **)(_DWORD *))(*a1 + 36))(a1) )
      sub_10026520((int)(a1 - 1));
    v10 = (_DWORD *)a1[484];
    if ( !v10 || !*v10 )
      v10 = 0;
    v11 = *(_DWORD *)(v10[11] + 4 * v9);
    v12 = a5;
    a2 = v15;
    if ( (v11 & a5) == 0 )
    {
      v13 = 31;
      while ( ((1 << v13) & v11) == 0 )
      {
        if ( --v13 < 0 )
          return sub_1002DEF0((int)a1, a2, a3, a4, v12, a6);
      }
      v12 = (1 << v13) | a5;
    }
  }
  else
  {
    v12 = a5;
  }
  return sub_1002DEF0((int)a1, a2, a3, a4, v12, a6);
}
