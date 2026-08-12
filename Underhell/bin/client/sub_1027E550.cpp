int __thiscall sub_1027E550(int this, int a2)
{
  int result; // eax
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 24) + 768))(*(_DWORD *)(this + 24), 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 20) + 768))(*(_DWORD *)(this + 20), 0);
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 44) = 0;
  sub_102361D0((int (__thiscall ***)(void *, int, int))(this - 204), (int)&v5, (int)&v4);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)(this - 204) + 808))(this - 204, v5, v4);
  (*(void (__thiscall **)(int))(*(_DWORD *)(this - 204) + 804))(this - 204);
  *(_BYTE *)(this + 60) = 1;
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 7);
  if ( !(_BYTE)result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)(this - 204) + 16))(this - 204);
  return result;
}
