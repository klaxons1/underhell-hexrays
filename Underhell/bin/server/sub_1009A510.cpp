void sub_1009A510(int a1, int a2, char *Format, ...)
{
  void *v3; // esp
  int v4; // esi
  char v5[8]; // [esp+0h] [ebp-408h] BYREF
  char Buffer[1024]; // [esp+8h] [ebp-400h] BYREF
  va_list va; // [esp+41Ch] [ebp+14h] BYREF

  va_start(va, Format);
  v3 = alloca(3 * a2 + 1);
  v4 = 3 * a2 - 1;
  for ( v5[v4 + 1] = 0; v4 >= 0; v5[v4 + 1] = 32 )
    --v4;
  sub_10429A50(Buffer, 0x400u, Format, va);
  DevMsg("%s%s", v5, Buffer);
}
