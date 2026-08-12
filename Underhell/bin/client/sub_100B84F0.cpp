bool __thiscall sub_100B84F0(int *this)
{
  int v2; // eax

  v2 = sub_100422D0();
  if ( v2 && !*(_BYTE *)(v2 + 5208) )
    return 0;
  return (*(_DWORD *)(dword_1042FCE4 + 48) || *(_DWORD *)(dword_1042FC9C + 48))
      && sub_100B68D0(this)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 112))(dword_1041315C);
}
