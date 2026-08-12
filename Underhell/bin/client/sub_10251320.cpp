void *__cdecl sub_10251320(_WORD *a1)
{
  void *result; // eax
  _BYTE v2[512]; // [esp+0h] [ebp-200h] BYREF

  result = a1;
  if ( !a1 )
    return &unk_10302674;
  if ( *a1 == 35 )
  {
    (*(void (__thiscall **)(int, _WORD *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 16))(
      dword_1047CA78,
      a1 + 1,
      v2,
      512);
    return (void *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, v2);
  }
  return result;
}
