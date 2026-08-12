int __thiscall sub_1024E170(_DWORD *this, _BYTE *a2, char a3)
{
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  const wchar_t *v7; // eax
  int v8; // esi
  int v9; // ebx
  int v10; // eax
  wchar_t Destination[128]; // [esp+10h] [ebp-100h] BYREF

  if ( !this[72] )
  {
    if ( sub_100DDA40(100) )
      v4 = sub_1027D150(Locale);
    else
      v4 = 0;
    this[72] = v4;
  }
  (*(void (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this[72] + 108))(this[72], a2);
  v5 = *a2 == 35;
  Destination[0] = 0;
  if ( v5 )
  {
    v6 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1047CA78 + 20))(dword_1047CA78, a2 + 1);
    if ( v6 != -1 )
    {
      v7 = (const wchar_t *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA78 + 40))(dword_1047CA78, v6);
      wcsncpy(Destination, v7, 0x80u);
    }
  }
  else
  {
    (*(void (__thiscall **)(int, _BYTE *, wchar_t *, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      a2,
      Destination,
      256);
  }
  if ( a3 )
  {
    v8 = dword_1047CA6C;
    v9 = *(_DWORD *)dword_1047CA6C;
    v10 = (*(int (__thiscall **)(_DWORD *, wchar_t *))*this)(this, Destination);
    (*(void (__thiscall **)(int, int))(v9 + 180))(v8, v10);
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}
