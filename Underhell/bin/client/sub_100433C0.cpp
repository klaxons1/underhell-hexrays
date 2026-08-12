int __cdecl sub_100433C0(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax
  _BYTE v6[12]; // [esp+18h] [ebp-Ch] BYREF

  sub_1012D400(a3, a4);
  (*(void (__thiscall **)(int, int, int, _BYTE *, int))(*(_DWORD *)dword_104131A0 + 16))(dword_104131A0, a1, a2, v6, a5);
  result = dword_10439134;
  if ( *(_DWORD *)(dword_10439134 + 48) )
    return sub_10130AC0(a5, a5 + 12, 255, 0, 0, 1, -1.0);
  return result;
}
