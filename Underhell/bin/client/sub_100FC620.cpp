int __thiscall sub_100FC620(int this, int a2)
{
  unsigned __int16 v3; // ax
  int v5; // edx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  _BYTE *v9; // eax
  int v10; // [esp+4h] [ebp-8h] BYREF

  v10 = a2;
  v3 = sub_100FB6E0((_WORD *)(this + 64), (int)&v10);
  if ( v3 == 0xFFFF )
    return 0;
  v5 = v3;
  v6 = *(_DWORD *)(this + 68);
  v7 = *(_DWORD *)dword_10413178;
  v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 4))(
         dword_10413178,
         *(_DWORD *)(v6 + 16 * v5 + 12));
  v9 = (_BYTE *)(*(int (__thiscall **)(int, int))(v7 + 12))(dword_10413178, v8);
  return sub_100AF260(v9);
}
