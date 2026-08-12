void __thiscall sub_1024C0B0(
        int (__thiscall ***this)(_DWORD),
        char *String2,
        char *Destination,
        size_t Count,
        char *Source)
{
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  size_t v8; // edi
  char *v9; // [esp-8h] [ebp-14h]
  int v10; // [esp-4h] [ebp-10h]

  v5 = sub_10239950(this, String2, 0);
  v6 = (_DWORD *)sub_10229D00(32);
  if ( v6 )
    v7 = sub_10229D20(v6, (int)"GetText");
  else
    v7 = 0;
  if ( v5 && (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 44))(v5, v7) )
  {
    v8 = Count;
    v10 = Count;
    v9 = (char *)sub_1022B4C0(v7, "text", (int)Source);
  }
  else
  {
    v8 = Count;
    v10 = Count;
    v9 = Source;
  }
  sub_102282F0(Destination, v9, v10);
  Destination[v8 - 1] = 0;
  sub_1022AF00(v7);
}
