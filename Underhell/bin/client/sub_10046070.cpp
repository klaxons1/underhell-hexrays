int __userpurge sub_10046070@<eax>(_BYTE *a1@<ecx>, int a2@<esi>, int a3)
{
  int v5; // eax
  int v6; // esi
  int v7; // edi

  if ( !byte_10407398
    && !(*(int (__thiscall **)(int *))(*off_103ED0D8 + 132))(off_103ED0D8)
    && (_BYTE *)dword_10407394 == a1 - 4
    || !*(_DWORD *)(dword_104076A4 + 48) )
  {
    return 0;
  }
  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
  v6 = v5;
  if ( v5 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  v7 = sub_10026910(a1, a3);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 164))(v6, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
  return v7;
}
