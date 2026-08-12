char *__thiscall sub_1021A490(int this, int a2, char *a3)
{
  bool v3; // zf
  char *result; // eax
  int v5; // [esp+0h] [ebp-4h] BYREF

  byte_106C2C60 = 0;
  v3 = *(_BYTE *)(this + 4) == 0;
  v5 = 512;
  if ( v3
    || (*(int (__cdecl **)(_DWORD, int, _DWORD, int *, char *, int *))(g_pVCR + 72))(
         *(_DWORD *)(this + 8),
         a2,
         0,
         &a2,
         &byte_106C2C60,
         &v5) )
  {
    return a3;
  }
  result = a3;
  if ( a2 == 1 )
    return &byte_106C2C60;
  return result;
}
