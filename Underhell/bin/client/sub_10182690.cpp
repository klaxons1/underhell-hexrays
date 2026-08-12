int __thiscall sub_10182690(_DWORD **this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v19; // [esp+Ch] [ebp-4h]
  int v20; // [esp+Ch] [ebp-4h]
  int v21; // [esp+Ch] [ebp-4h]
  int v22; // [esp+Ch] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *, _DWORD *, const char *, _DWORD))(*this[68] + 772))(this[68], this[69], Locale, 0);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, int))(*this[68] + 788))(this[68], this[69], 1);
  v2 = dword_1047CA7C;
  v3 = *this[68];
  v19 = *(_DWORD *)dword_1047CA7C;
  v4 = ((int (__thiscall *)(_DWORD **, int, _DWORD))(*this)[20])(this, 160, 0);
  v5 = (*(int (__thiscall **)(int, int))(v19 + 52))(v2, v4);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, const char *, const char *, _DWORD, int))(v3 + 796))(
    this[68],
    this[69],
    "name",
    "#PlayerName",
    0,
    v5);
  v6 = dword_1047CA7C;
  v7 = *this[68];
  v20 = *(_DWORD *)dword_1047CA7C;
  v8 = ((int (__thiscall *)(_DWORD **, int, _DWORD))(*this)[20])(this, 60, 0);
  v9 = (*(int (__thiscall **)(int, int))(v20 + 52))(v6, v8);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, const char *, const char *, _DWORD, int))(v7 + 796))(
    this[68],
    this[69],
    "frags",
    "#PlayerScore",
    0,
    v9);
  v10 = dword_1047CA7C;
  v11 = *this[68];
  v21 = *(_DWORD *)dword_1047CA7C;
  v12 = ((int (__thiscall *)(_DWORD **, int, _DWORD))(*this)[20])(this, 60, 0);
  v13 = (*(int (__thiscall **)(int, int))(v21 + 52))(v10, v12);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, const char *, const char *, _DWORD, int))(v11 + 796))(
    this[68],
    this[69],
    "deaths",
    "#PlayerDeath",
    0,
    v13);
  v14 = dword_1047CA7C;
  v15 = *this[68];
  v22 = *(_DWORD *)dword_1047CA7C;
  v16 = ((int (__thiscall *)(_DWORD **, int, _DWORD))(*this)[20])(this, 80, 0);
  v17 = (*(int (__thiscall **)(int, int))(v22 + 52))(v14, v16);
  return (*(int (__thiscall **)(_DWORD *, _DWORD *, const char *, const char *, _DWORD, int))(v15 + 796))(
           this[68],
           this[69],
           "ping",
           "#PlayerPing",
           0,
           v17);
}
