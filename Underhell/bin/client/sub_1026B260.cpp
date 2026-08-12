int __thiscall sub_1026B260(int (__thiscall ***this)(void *, int, int))
{
  int v2; // edi
  int v3; // ebx
  _DWORD *v4; // eax
  int v6; // [esp+Ch] [ebp-Ch] BYREF
  _BYTE v7[4]; // [esp+10h] [ebp-8h] BYREF
  _BYTE v8[4]; // [esp+14h] [ebp-4h] BYREF

  sub_102361D0(this, (int)&v6, (int)v7);
  v2 = dword_1047CA6C;
  v3 = *(_DWORD *)dword_1047CA6C;
  v4 = (_DWORD *)((int (__thiscall *)(int (__thiscall ***)(void *, int, int), _BYTE *))(*this)[57])(this, v8);
  (*(void (__thiscall **)(int, _DWORD))(v3 + 40))(v2, *v4);
  return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
           dword_1047CA6C,
           4,
           1,
           v6 - 1,
           2);
}
