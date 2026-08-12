int __thiscall sub_1025F270(_DWORD **this, const unsigned __int16 *Src, int a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _BYTE v7[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = (_DWORD *)sub_10229D00(32);
  if ( v4 )
    v5 = sub_10229D20(v4, (int)"SetText");
  else
    v5 = 0;
  sub_1022AC10(v5, "text", Src);
  (*(void (__thiscall **)(int, const unsigned __int16 *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 16))(
    dword_1047CA78,
    Src,
    v7,
    128);
  return (*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD *, _DWORD **, int))(*this[238] + 780))(
           this[238],
           v7,
           v5,
           this,
           a3);
}
