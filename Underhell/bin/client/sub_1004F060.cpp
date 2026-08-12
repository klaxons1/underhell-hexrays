int __userpurge sub_1004F060@<eax>(int a1@<ecx>, int a2@<edi>, unsigned int a3)
{
  int v4; // eax
  unsigned int v5; // eax

  if ( *(_BYTE *)(a1 + 116) )
  {
    if ( *(_BYTE *)(a1 + 1232)
      && (a1 == 4 ? (v4 = 0) : (v4 = a1 + 1188),
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10413168 + 124))(dword_10413168, v4),
          *(_BYTE *)(a1 + 1232)) )
    {
      v5 = a3 | 0x80000000;
    }
    else
    {
      v5 = a3;
    }
    sub_10037390(a1, a2, v5);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413168 + 124))(dword_10413168, 0);
  }
  return 0;
}
