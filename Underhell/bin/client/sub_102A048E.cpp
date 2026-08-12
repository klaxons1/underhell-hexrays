DName *__cdecl sub_102A048E(DName *a1, char a2, int a3)
{
  _BYTE *v3; // eax
  _BYTE v5[8]; // [esp+0h] [ebp-8h] BYREF

  v3 = DName::operator=(v5, a2);
  DName::operator+(v3, a1, a3);
  return a1;
}
