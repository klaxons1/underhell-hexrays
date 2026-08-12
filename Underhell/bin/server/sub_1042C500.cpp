int __thiscall sub_1042C500(int this, const char *Src, float a3)
{
  void *v4; // esp
  signed int v5; // edi
  void (__cdecl *v6)(int, _BYTE *, _DWORD); // eax
  _BYTE v8[12]; // [esp+4h] [ebp-Ch] BYREF

  v4 = alloca(*(_DWORD *)(this + 40));
  memcpy_0(v8, *(const void **)(this + 36), *(_DWORD *)(this + 40));
  v5 = strlen(Src) + 1;
  if ( v5 > *(_DWORD *)(this + 40) )
  {
    if ( *(_DWORD *)(this + 36) )
      sub_10184660(*(_DWORD *)(this + 36));
    *(_DWORD *)(this + 36) = sub_10184390(v5);
    *(_DWORD *)(this + 40) = v5;
  }
  memcpy_0(*(void **)(this + 36), Src, v5);
  v6 = *(void (__cdecl **)(int, _BYTE *, _DWORD))(this + 68);
  if ( v6 )
    v6(this + 24, v8, LODWORD(a3));
  return (*(int (__stdcall **)(int, _BYTE *, _DWORD))(*(_DWORD *)g_pCVar + 80))(this, v8, LODWORD(a3));
}
