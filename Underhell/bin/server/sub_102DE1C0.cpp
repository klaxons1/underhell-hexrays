int __userpurge sub_102DE1C0@<eax>(int a1@<ecx>, double a2@<st0>, char a3)
{
  int v3; // edi

  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  sub_101EE910(a1, 1);
  if ( *(_BYTE *)(a1 + 5124) != 1 )
  {
    (**(void (__thiscall ***)(int, int))(a1 + 5080))(a1 + 5080, a1 + 5124);
    *(_BYTE *)(a1 + 5124) = 1;
  }
  if ( a3 == 1 )
    sub_102DC2D0(a1, a2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
}
