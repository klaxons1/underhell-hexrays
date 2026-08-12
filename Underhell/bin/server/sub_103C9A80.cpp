int __thiscall sub_103C9A80(int this)
{
  int i; // esi
  int v3; // ecx
  int result; // eax

  for ( i = 0; i < *(_DWORD *)(this + 3640); ++i )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(this + 3628) + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 264))(v3);
  }
  result = sub_1002FB90(this);
  *(_BYTE *)(this + 5844) = 1;
  return result;
}
