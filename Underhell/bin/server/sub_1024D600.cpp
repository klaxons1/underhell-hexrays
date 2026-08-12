char __userpurge sub_1024D600@<al>(int a1@<ecx>, int a2@<edi>, int a3, int a4)
{
  int v4; // eax
  int v5; // ebx
  int i; // esi
  int j; // esi

  v4 = a4;
  if ( !a4 )
    v4 = a1;
  v5 = (*(int (__thiscall **)(int, int, void *, const char *, int))(*(_DWORD *)(a3 + 4) + 8))(
         a3 + 4,
         v4,
         &unk_104A928C,
         "LOGDIR",
         a2);
  if ( !v5 )
    return 0;
  if ( (dword_106C7378 & 1) == 0 )
  {
    dword_106C7378 |= 1u;
    dword_106C7368 = (int)&dword_106C7364;
    dword_106C7364 = (int)&dword_106C7364;
    atexit(sub_10474620);
  }
  for ( i = dword_106C7368; (int *)i != &dword_106C7364; i = *(_DWORD *)(i + 4) )
  {
    if ( *(_DWORD *)(i + 8) == a1 )
      (*(void (__cdecl **)(int, int, _DWORD))(i + 12))(a3, v5, *(_DWORD *)(i + 16));
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(a3 + 4) + 12))(a3 + 4, v5);
  for ( j = dword_106C7258; j; j = *(_DWORD *)j )
    (*(void (**)(void))(j + 4))();
  return 1;
}
