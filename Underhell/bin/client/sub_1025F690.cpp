int __thiscall sub_1025F690(void *this, unsigned __int16 *Src)
{
  const unsigned __int16 *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  char v8; // [esp+Ch] [ebp-300h] BYREF
  _BYTE v9[255]; // [esp+Dh] [ebp-2FFh] BYREF
  unsigned __int16 v10[256]; // [esp+10Ch] [ebp-200h] BYREF

  v3 = Src;
  if ( *Src == 35 )
  {
    (*(void (__thiscall **)(int, unsigned __int16 *, char *, int))(*(_DWORD *)dword_1047CA78 + 16))(
      dword_1047CA78,
      Src,
      &v8,
      255);
    v4 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1047CA78 + 20))(dword_1047CA78, v9);
    if ( v4 != -1 )
      v3 = (const unsigned __int16 *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA78 + 40))(
                                       dword_1047CA78,
                                       v4);
  }
  (*(void (__thiscall **)(void *, unsigned __int16 *, int))(*(_DWORD *)this + 776))(this, v10, 254);
  if ( wcscmp(v10, v3) )
  {
    (*(void (__thiscall **)(void *, const unsigned __int16 *))(*(_DWORD *)this + 772))(this, v3);
    v5 = sub_10229D00(32);
    if ( v5 )
      v6 = sub_1022B140(v5, (int)"TextChanged", "text", v3);
    else
      v6 = 0;
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v6);
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 16))(this);
  }
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1128))(this);
}
