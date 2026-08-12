void __thiscall sub_102575A0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // edx
  const char *v6; // eax
  bool v7; // sf
  _BYTE v8[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 300);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  sub_10112C00(this + 320, v4 != 0 ? 6 : 1);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  if ( *(_BYTE *)(this + 916) )
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) & 0xFFF7);
  else
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 8);
  sub_100E0970(this, v5, 0, 0);
  v6 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v8);
  if ( !v6 )
    v6 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v6);
  if ( !*(_DWORD *)(dword_106C76A4 + 48) )
    sub_100EAB80((_DWORD *)this, 32);
  v7 = *(int *)(this + 1080) < 0;
  *(_DWORD *)(this + 1084) = 0;
  if ( !v7 )
  {
    if ( *(_DWORD *)(this + 1072) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 1072));
      *(_DWORD *)(this + 1072) = 0;
    }
    *(_DWORD *)(this + 1076) = 0;
  }
  *(_DWORD *)(this + 1088) = *(_DWORD *)(this + 1072);
  if ( (*(_DWORD *)(this + 248) & 0x400) != 0 )
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x200);
}
