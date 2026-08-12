int __thiscall sub_1027CCC0(_DWORD *this, const char *a2)
{
  const char *v2; // edi
  int v5; // eax
  int v6; // eax
  _BYTE v7[2048]; // [esp+Ch] [ebp-800h] BYREF

  v2 = a2;
  if ( !a2 )
  {
    v2 = Locale;
LABEL_3:
    (*(void (__thiscall **)(int, const char *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      v2,
      v7,
      2048);
    return (*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 104))(this, v7, 0);
  }
  if ( *a2 != 35 )
    goto LABEL_3;
  v5 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1047CA78 + 20))(dword_1047CA78, (_BYTE *)a2 + 1);
  this[11] = v5;
  if ( v5 == -1 )
    goto LABEL_3;
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA78 + 40))(dword_1047CA78, v5);
  return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 104))(this, v6, 0);
}
