int __thiscall sub_1027E5E0(int this)
{
  int v2; // eax
  int (__thiscall ***v3)(void *, int, int); // esi
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 40) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80) >= *(_DWORD *)(this + 36) )
    {
      v2 = *(_DWORD *)(this + 40) + (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
      *(_BYTE *)(this + 60) = 1;
      *(_DWORD *)(this + 36) = v2;
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 7) )
        (*(void (__thiscall **)(int))(*(_DWORD *)(this - 204) + 16))(this - 204);
    }
  }
  v3 = (int (__thiscall ***)(void *, int, int))(this - 204);
  sub_102361D0(v3, (int)&v6, (int)&v5);
  (*v3)[202](v3, v6, v5);
  return ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v3)[201])(v3);
}
