_DWORD *__stdcall sub_10097C50(_DWORD **a1, int a2)
{
  _DWORD *v2; // esi
  char Src[4096]; // [esp+4h] [ebp-1000h] BYREF

  v2 = *a1;
  (*(void (__thiscall **)(int, char *, int, _DWORD))(*(_DWORD *)a2 + 80))(a2, Src, 4096, 0);
  Src[4095] = 0;
  return sub_10097590(v2, Src, strlen(Src));
}
