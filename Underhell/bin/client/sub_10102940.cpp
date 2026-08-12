int __stdcall sub_10102940(int a1, int a2, int a3)
{
  int result; // eax
  _BYTE v4[12]; // [esp+18h] [ebp-Ch] BYREF

  sub_1012D400(a2, 0);
  (*(void (__thiscall **)(int, int, int, _BYTE *, int))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    a1,
    33570875,
    v4,
    a3);
  result = dword_10439134;
  if ( *(_DWORD *)(dword_10439134 + 48) )
    return sub_10130AC0(a3, a3 + 12, 255, 0, 0, 1, -1.0);
  return result;
}
