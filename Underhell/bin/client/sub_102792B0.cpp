int __thiscall sub_102792B0(void *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _BYTE *v8; // eax
  _BYTE v10[128]; // [esp+10h] [ebp-80h] BYREF

  v8 = (_BYTE *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, a4);
  if ( !v8 )
  {
    (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(dword_1047CA78, a4, v10, 128);
    v8 = v10;
  }
  return (*(int (__thiscall **)(void *, int, int, _BYTE *, int, int, int))(*(_DWORD *)this + 792))(
           this,
           a2,
           a3,
           v8,
           a5,
           a6,
           a7);
}
