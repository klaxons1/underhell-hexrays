char __thiscall sub_1016EE90(_DWORD *this)
{
  int i; // ebx
  int v3; // edx
  int v4; // edi
  int v5; // ecx
  int v7; // eax
  int v8; // ecx

  for ( i = sub_1016ECF0(this, this[13]); i != 0xFFFF; i = (unsigned __int16)sub_1016DF30(this + 100, i) )
  {
    v3 = this[101];
    v4 = v3 + 20 * (unsigned __int16)i + 8;
    if ( *(_DWORD *)v4 > this[6] )
      break;
    v5 = *(_DWORD *)(v3 + 20 * (unsigned __int16)i + 16);
    if ( !strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5), "hltv_cameraman")
      && (*(int (__thiscall **)(_DWORD, const char *, _DWORD))(**(_DWORD **)(v4 + 8) + 24))(
           *(_DWORD *)(v4 + 8),
           "index",
           0) > 0 )
    {
      v7 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD))(**(_DWORD **)(v4 + 8) + 24))(
             *(_DWORD *)(v4 + 8),
             "index",
             0);
      this[13] = this[6] + 1;
      v8 = this[4];
      this[11] = v7;
      this[7] = v7;
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 40))(v8, *(_DWORD *)(v4 + 8));
      return 1;
    }
  }
  return 0;
}
