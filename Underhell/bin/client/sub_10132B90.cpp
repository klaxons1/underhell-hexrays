int sub_10132B90(int a1, int a2, int a3, int a4, char *Format, ...)
{
  int v5; // ecx
  int result; // eax
  char Buffer[1024]; // [esp+4h] [ebp-400h] BYREF
  va_list va; // [esp+420h] [ebp+1Ch] BYREF

  va_start(va, Format);
  if ( *(_DWORD *)(a1 + 4) )
  {
    sub_102283C0(Buffer, 0x400u, Format, va);
    v5 = *(_DWORD *)(a1 + 4);
    Buffer[1023] = 0;
    return (*(int (__thiscall **)(int, int, int, int, char *))(*(_DWORD *)v5 + 772))(v5, a2, a3, a4, Buffer);
  }
  return result;
}
