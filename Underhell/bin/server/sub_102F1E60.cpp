char __userpurge sub_102F1E60@<al>(int a1@<ebx>, int a2@<edi>, int a3)
{
  if ( *(_BYTE *)(a3 + 2329) )
    return 0;
  sub_1023A420(a1, a2, a3, *(_DWORD *)(a3 + 24));
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 1596))(a3, 1);
  return 1;
}
