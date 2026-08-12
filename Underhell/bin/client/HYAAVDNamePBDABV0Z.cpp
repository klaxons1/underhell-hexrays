DName *__cdecl operator+(DName *a1, char *a2, int a3)
{
  DName *v3; // eax
  _BYTE v5[8]; // [esp+0h] [ebp-8h] BYREF

  v3 = DName::DName((DName *)v5, a2);
  DName::operator+(v3, a1, a3);
  return a1;
}
