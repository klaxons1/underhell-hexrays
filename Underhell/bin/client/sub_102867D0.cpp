int __thiscall sub_102867D0(void *this)
{
  int v2; // edi
  int v3; // ebx
  _DWORD *v4; // eax
  int v6; // [esp+10h] [ebp-Ch] BYREF
  int v7; // [esp+14h] [ebp-8h] BYREF
  _BYTE v8[4]; // [esp+18h] [ebp-4h] BYREF

  (*(void (__thiscall **)(void *, int *, int *))(*(_DWORD *)this + 280))(this, &v7, &v6);
  v2 = dword_1047CA6C;
  v3 = *(_DWORD *)dword_1047CA6C;
  v4 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 224))(this, v8);
  (*(void (__thiscall **)(int, _DWORD))(v3 + 40))(v2, *v4);
  return (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
           dword_1047CA6C,
           0,
           0,
           v7 - 1,
           v6 - 1);
}
