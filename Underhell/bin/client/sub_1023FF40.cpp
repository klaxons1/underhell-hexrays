int __userpurge sub_1023FF40@<eax>(int a1@<ebx>, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int result; // eax
  int v7; // ebx
  int i; // esi
  int v9; // eax

  v5 = a5;
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 100))(dword_1047CA70, a5);
  if ( (_BYTE)result )
  {
    if ( sub_10236A90(a1, v5)
      && (*(int (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)dword_1047CA70 + 168))(
           dword_1047CA70,
           v5,
           a3,
           a4,
           0) )
    {
      sub_10258C50(*(_DWORD *)(a2 + 12), &a5);
    }
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68))(dword_1047CA70, v5);
    v7 = result;
    for ( i = 0; i < v7; ++i )
    {
      v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 72))(dword_1047CA70, v5, i);
      result = sub_1023FF40(a2, a3, a4, v9);
    }
  }
  return result;
}
