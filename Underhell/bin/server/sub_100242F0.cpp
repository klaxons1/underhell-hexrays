bool __thiscall sub_100242F0(_DWORD *this, int a2)
{
  int v2; // eax
  bool result; // al
  int v5; // ebx
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // [esp-Ch] [ebp-14h]
  int v9; // [esp-8h] [ebp-10h]
  const char *v10; // [esp-4h] [ebp-Ch]

  v2 = *(_DWORD *)(a2 + 16);
  result = (v2 & 0x800000) == 0
        && ((v2 & 0x10000000) == 0 || (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 1528))(this, 0))
        && ((*(_DWORD *)(a2 + 16) & 4) == 0
         || this[581] != 1
         || (v5 = *this,
             v6 = sub_1023CC80(a2, 16449, 0),
             (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, int))(v5 + 544))(this, v6, v8, v9)))
        && ((*(_BYTE *)(a2 + 16) & 1) == 0
         || *(_DWORD *)(a2 + 32) != 7
         || !sub_1026A890(a2)
         || (v10 = (const char *)this[23], v7 = (_DWORD *)sub_1026A890(a2), !sub_1001F3E0(v7, v10)))
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 1472))(this, a2) == 0;
  return result;
}
