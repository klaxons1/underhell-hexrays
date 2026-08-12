char *sub_100CAAD0()
{
  char *result; // eax
  int *v1; // esi
  int v2; // eax
  int v3[64]; // [esp+0h] [ebp-100h] BYREF

  result = (char *)sub_100B4090(&dword_1042FB78, "CHudHintDisplay");
  if ( result )
  {
    v1 = (int *)(result - 204);
    sub_1022C220(v3, 255, 0, 0);
    v2 = ((int (__thiscall *)(int (__stdcall ***)(int, int, int), int *, _DWORD))(*off_103E6DA4)[2])(
           off_103E6DA4,
           v3,
           0);
    return (char *)sub_100C9DB0(v1, v2, (int)v3);
  }
  return result;
}
