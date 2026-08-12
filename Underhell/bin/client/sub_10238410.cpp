int *__stdcall sub_10238410(int a1, _DWORD *a2, int a3)
{
  int v3; // eax
  char Src[512]; // [esp+Ch] [ebp-200h] BYREF

  v3 = *(_DWORD *)(*(int (__cdecl **)(int))(a3 + 20))(a1);
  if ( v3 == -1
    || !(*(unsigned __int8 (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_1047CA6C + 116))(
          dword_1047CA6C,
          v3,
          Src,
          512) )
  {
    return sub_1022ABA0(a2, *(char **)a3, Locale);
  }
  else
  {
    return sub_1022ABA0(a2, *(char **)a3, Src);
  }
}
