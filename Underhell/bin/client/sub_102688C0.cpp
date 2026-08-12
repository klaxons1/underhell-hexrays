char __userpurge sub_102688C0@<al>(int a1@<ecx>, int a2@<ebx>, int a3, char a4)
{
  int v5; // esi
  int v6; // esi
  int v7; // eax
  int v8; // esi

  v5 = *(_DWORD *)(a1 + 320);
  if ( v5 && *(_BYTE *)(a1 + 317) )
  {
    sub_10279030(*(_DWORD *)(a1 + 320));
    sub_10034930(v5);
    *(_DWORD *)(a1 + 320) = 0;
  }
  v6 = *(_DWORD *)(a1 + 224);
  LOBYTE(v7) = a4;
  *(_BYTE *)(a1 + 317) = a4;
  *(_DWORD *)(a1 + 320) = a3;
  if ( v6 != -1 )
  {
    v7 = *(_DWORD *)(a1 + 212);
    do
    {
      v8 = 12 * v6;
      sub_10267E30(*(int **)(v7 + v8), a2, a1);
      v7 = *(_DWORD *)(a1 + 212);
      v6 = *(_DWORD *)(v7 + v8 + 8);
    }
    while ( v6 != -1 );
  }
  return v7;
}
