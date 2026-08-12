int __thiscall sub_1024CC50(_DWORD *this)
{
  int v2; // edi
  int v3; // ebx
  _DWORD *v4; // eax
  _BYTE v6[4]; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, this[62]);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, 0, 0);
  v2 = dword_1047CA6C;
  v3 = *(_DWORD *)dword_1047CA6C;
  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 224))(this, v6);
  (*(void (__thiscall **)(int, _DWORD))(v3 + 72))(v2, *v4);
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(dword_1047CA6C, 111, 0);
}
