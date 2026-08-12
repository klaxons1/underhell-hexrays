int __thiscall sub_100A4560(int this, int a2)
{
  int *v3; // eax
  int v4; // eax
  _DWORD *v5; // esi
  int result; // eax
  _BYTE v7[44]; // [esp+8h] [ebp-54h] BYREF
  float v8; // [esp+34h] [ebp-28h]

  v3 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v4 = sub_1007A770(off_103DCD78, *v3);
  v5 = (_DWORD *)v4;
  if ( !v4 )
    return 0;
  if ( (unsigned __int8)sub_1010FB40(v4) )
    return 0;
  if ( !v5[46] )
    return 0;
  (*(void (__thiscall **)(int, int, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_104131A0 + 8))(
    dword_104131A0,
    this + 16,
    1174421507,
    v5,
    v7);
  if ( v8 >= 1.0 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, _BYTE *, _DWORD, _DWORD))(*v5 + 456))(v5, v7, *(_DWORD *)(this + 96), 0);
  result = 1;
  *(_BYTE *)(this + 100) = 1;
  return result;
}
