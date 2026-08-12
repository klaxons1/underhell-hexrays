int sub_1009AEC0(int a1, char *Format, ...)
{
  bool v2; // cc
  int v3; // eax
  char v5[256]; // [esp+4h] [ebp-100h] BYREF
  va_list va; // [esp+114h] [ebp+10h] BYREF

  va_start(va, Format);
  sub_10429A50(byte_10693D30, 0x400u, Format, va);
  v2 = *(_DWORD *)(a1 + 1336) <= 0;
  v5[0] = 0;
  if ( v2 )
    goto LABEL_5;
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D8 + 144))(
          dword_106B31D8,
          *(_DWORD *)(a1 + 1324) + 4,
          v5,
          256) )
    v5[0] = 0;
  if ( *(int *)(a1 + 1336) <= 0 )
LABEL_5:
    v3 = -1;
  else
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 1324) + 12);
  return DevMsg(1, "%s(token %i) : %s", v5, v3, byte_10693D30);
}
