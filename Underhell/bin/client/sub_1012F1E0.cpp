int __thiscall sub_1012F1E0(int this)
{
  int v2; // ecx
  int result; // eax

  if ( *(_BYTE *)(this + 28) )
  {
    if ( *(_BYTE *)(this + 29) )
    {
      v2 = *(_DWORD *)(this + 32);
      if ( v2 )
        sub_100B37C0(
          v2,
          *(_DWORD *)(this + 12),
          *(_DWORD *)(this + 16),
          *(_DWORD *)(this + 20),
          *(_DWORD *)(this + 24),
          (_DWORD *)(this + 4));
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, *(_DWORD *)(this + 4));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, *(_DWORD *)(this + 8));
    return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
             dword_1047CA6C,
             *(_DWORD *)(this + 12) + 22,
             *(_DWORD *)(this + 16) + 1,
             *(_DWORD *)(this + 36) + *(_DWORD *)(this + 12) + 22,
             *(_DWORD *)(this + 40) + *(_DWORD *)(this + 16) + 1);
  }
  return result;
}
