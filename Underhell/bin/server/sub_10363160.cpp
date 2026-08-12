void __userpurge sub_10363160(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int v4; // eax
  int v5; // eax

  v4 = *(_DWORD *)a4;
  if ( *(_DWORD *)a4 == dword_106E7C54 )
  {
    sub_10362910(a1, *(char **)(a4 + 4));
    return;
  }
  if ( v4 == dword_106E7C50 || v4 == dword_106E7C4C )
  {
    if ( v4 != dword_106E7C48 )
    {
      *(_BYTE *)(a1 + 4289) = 1;
      sub_103604A0(a1, a2, a3, *(char **)(a4 + 4));
      return;
    }
LABEL_10:
    *(_BYTE *)(a1 + 4289) = 0;
    sub_103604A0(a1, a2, a3, *(char **)(a4 + 4));
    return;
  }
  if ( v4 == dword_106E7C48 )
    goto LABEL_10;
  v5 = *(_DWORD *)(a1 + 3624);
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 248))(v5, a4);
  else
    sub_1003AD70(a1, a4);
}
