int __thiscall sub_10131230(_DWORD *this)
{
  int v1; // edi
  int v2; // ebx
  int v4; // eax
  int v5; // eax
  _BYTE v7[4]; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h] BYREF

  v1 = dword_1047CA70;
  v2 = *(_DWORD *)dword_1047CA70;
  v4 = (*(int (__thiscall **)(_DWORD *, int *, _BYTE *))(*this + 148))(this, &v8, v7);
  (*(void (__thiscall **)(int, int))(v2 + 20))(v1, v4);
  sub_10236140(v8 - 300, 0);
  v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, this[52]);
  return sub_102361A0(300, 4 * v5 + 8);
}
