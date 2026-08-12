int sub_1022F5B0(int a1, char *a2, ...)
{
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, a2);
  return sub_1022F300(a1, a2, (int)va);
}
