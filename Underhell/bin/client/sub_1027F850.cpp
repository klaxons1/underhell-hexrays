char __thiscall sub_1027F850(int *this)
{
  char result; // al
  _DWORD *v3; // eax
  _BYTE *v4; // edi
  void *v5; // eax
  char v6; // bl
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9[128]; // [esp+1Ch] [ebp-200h] BYREF

  result = 0;
  if ( this[24] )
  {
    v3 = (_DWORD *)sub_10229D00(32);
    if ( v3 )
      v4 = sub_10229D20(v3, this[24]);
    else
      v4 = 0;
    (*(void (__thiscall **)(int *, _BYTE *))(*this + 24))(this, v4);
    (*(void (__thiscall **)(int, int, int, int *, int, _DWORD, _DWORD))(*(_DWORD *)dword_1047C968 + 48))(
      dword_1047C968,
      this[24],
      this[25],
      v9,
      512,
      0,
      0);
    if ( dword_1047C968 )
      v5 = (void *)(dword_1047C968 + 4);
    else
      v5 = 0;
    v6 = sub_1022B3B0(v4, v5, (const char *)v9, 0);
    if ( !v6 )
    {
      v7 = (_DWORD *)sub_100DDA40(464);
      if ( v7 )
        v8 = sub_10270680(
               v7,
               "BuildMode - Error saving file",
               "Error: Could not save changes.  File is most likely read only.",
               0);
      else
        v8 = 0;
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 1028))(v8, 0);
    }
    sub_1022AF00(v4);
    return v6;
  }
  return result;
}
