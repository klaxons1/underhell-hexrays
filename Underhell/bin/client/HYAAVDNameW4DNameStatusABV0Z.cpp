DName *__cdecl operator+(DName *a1, int a2, int a3)
{
  int **v3; // eax
  int *v5; // [esp+0h] [ebp-8h] BYREF

  v3 = DName::DName(&v5, a2);
  DName::operator+(v3, a1, a3);
  return a1;
}
