int __stdcall sub_10156590(int a1, char a2)
{
  int v2; // ebx
  int i; // esi
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // eax

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  sub_102D6EB0(a1, a2);
  sub_10156260();
  if ( *(_DWORD *)(dword_106B31C8 + 72) != 1 )
  {
    for ( i = sub_1012BC10(&dword_1069E3E0, 0); i; i = sub_1012BC10(&dword_1069E3E0, i) )
      (*(void (__thiscall **)(int))(*(_DWORD *)i + 112))(i);
  }
  v4 = a1;
  if ( (a1 || (v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v5 = *(_DWORD *)(v4 + 12)) != 0 )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
  }
  else
  {
    v6 = 0;
  }
  v7 = sub_1023DBA0();
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 72))(v7, v6);
  sub_1022CEF0(v6);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
}
