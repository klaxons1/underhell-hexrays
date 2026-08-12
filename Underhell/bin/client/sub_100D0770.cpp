void __thiscall sub_100D0770(int this, const char *a2, void *Src)
{
  int v4; // edi
  const char *v5; // [esp+4h] [ebp-14h] BYREF
  _DWORD v6[4]; // [esp+8h] [ebp-10h] BYREF

  if ( *(_DWORD *)(this + 4) )
  {
    if ( !a2 )
      goto LABEL_8;
    sub_1022D3E0(v6);
    v5 = a2;
    v4 = sub_100CD030((unsigned __int8 (__cdecl **)(int, int))(this + 176), (int)&v5);
    if ( v6[2] >= 0 )
    {
      if ( v6[0] )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v6[0]);
        v6[0] = 0;
      }
      v6[1] = 0;
    }
    if ( v4 == -1 )
LABEL_8:
      sub_100D03D0((void *)(this + 176), a2);
    sub_1022D0A0(Src);
  }
}
