int __stdcall sub_10069040(int a1, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // esi
  int v5; // eax

  v2 = sub_100422D0();
  if ( !v2 || (result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 896))(v2), (_BYTE)result) )
  {
    v4 = *(_DWORD *)(dword_1041110C + 24);
    v5 = sub_1022B4C0(0, (int)Locale);
    (*(void (__thiscall **)(int, int))(v4 + 8))(dword_1041110C + 24, v5);
    result = a2;
    *(_BYTE *)(a2 + 21) = 1;
  }
  return result;
}
