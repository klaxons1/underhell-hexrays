int sub_101E6050(int a1, char *Format, ...)
{
  int (__cdecl *v2)(char *); // eax
  char Buffer[2048]; // [esp+0h] [ebp-800h] BYREF
  va_list va; // [esp+80Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  sub_102283C0(Buffer, 0x800u, Format, va);
  v2 = *(int (__cdecl **)(char *))(a1 + 156);
  if ( v2 )
    return v2(Buffer);
  else
    return Msg("%s", Buffer);
}
