void sub_101BA7A0(int a1, int a2, ...)
{
  unsigned __int16 v2; // ax
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, a2);
  if ( a2 )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 152))(a2);
    sub_101B9630(dword_10637A40, (float *)va, v2);
  }
}
