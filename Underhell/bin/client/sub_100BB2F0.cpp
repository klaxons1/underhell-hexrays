int __thiscall sub_100BB2F0(int *this, int a2)
{
  int v2; // edi
  int v4; // ebx
  int *v5; // eax
  int v6; // ebx
  int (__thiscall *v7)(int, int *, const char *, int); // edx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // edx
  _BYTE v12[4]; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h]

  v2 = a2;
  sub_10241570(a2);
  v4 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v2 + 12))(v2, "ChatFont", 0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this[51] + 816))(this[51], v4);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this[52] + 912))(this[52], v4);
  v5 = (int *)this[52];
  v6 = *(_DWORD *)v2;
  a2 = -1;
  v7 = *(int (__thiscall **)(int, int *, const char *, int))(v6 + 20);
  v13 = *v5;
  v8 = (_DWORD *)v7(v2, &a2, "Panel.FgColor", -1);
  v9 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, const char *, _DWORD))(v6 + 20))(v2, v12, "Chat.TypingText", *v8);
  (*(void (__thiscall **)(int, _DWORD))(v13 + 220))(this[52], *v9);
  (*(void (__thiscall **)(int *, int))(*this + 264))(this, 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this[51] + 264))(this[51], 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this[51] + 788))(this[51], 3);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this[51] + 792))(this[51], 2, 0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this[52] + 520))(this[52], 1);
  v10 = *this;
  a2 = 0;
  return (*(int (__thiscall **)(int *, _DWORD))(v10 + 216))(this, 0);
}
