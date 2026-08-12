char __userpurge sub_1027FA80@<al>(int a1@<ecx>, int a2@<ebx>, char a3)
{
  char result; // al
  int v5; // eax

  result = a3;
  if ( *(_BYTE *)(a1 + 8) != a3 )
  {
    *(_BYTE *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 72) = 0;
    if ( a3 )
    {
      return sub_1027F670((_DWORD **)a1, a2);
    }
    else
    {
      if ( sub_10237C80((_DWORD *)(a1 + 104)) )
      {
        v5 = sub_10237C80((_DWORD *)(a1 + 104));
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 360))(v5, "Close");
      }
      return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 112) + 48))(*(_DWORD *)(a1 + 112), 0);
    }
  }
  return result;
}
