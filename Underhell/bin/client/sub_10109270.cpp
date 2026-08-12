int __thiscall sub_10109270(void *this, int a2, float a3, int a4, int a5)
{
  bool v6; // zf
  int i; // eax
  int j; // esi
  int v9; // eax
  int k; // ebx
  int v11; // eax
  int v12; // esi
  int v13; // edi
  int result; // eax

  *(_BYTE *)(a5 + 4480) = 1;
  sub_100B36D0(a5 + 4484, a4);
  *(_DWORD *)(a5 + 4568) = a2;
  v6 = (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 60))(this) == 0;
  for ( i = dword_104369F0; i; i = *(_DWORD *)(i + 4) )
    *(_BYTE *)(i + 8) = v6;
  for ( j = 0; j < ((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC); ++j )
  {
    v9 = ((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, j);
    if ( v9 )
      *(_DWORD *)(v9 + 192) = -1;
  }
  for ( k = 0; k < ((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC); ++k )
  {
    *((float *)off_103DC81C + 3) = a3;
    *((float *)off_103DC81C + 4) = *((float *)off_103DC81C + 7);
    v11 = ((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, k);
    v12 = v11;
    if ( v11 && (*(_DWORD *)(v11 + 732) & 0x40000) == 0 && !*(_BYTE *)(v11 + 1108) )
    {
      v13 = v11 + 8;
      if ( sub_100764F0(v11 + 8, 1, (int *)(v11 + 1116)) )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 16))(v12 + 8, 1);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 428))(v12)
        || (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 60))(this) )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 496))(v12);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 364))(v12, 35);
      }
    }
  }
  for ( result = dword_104369F0; result; result = *(_DWORD *)(result + 4) )
    *(_BYTE *)(result + 8) = 0;
  return result;
}
