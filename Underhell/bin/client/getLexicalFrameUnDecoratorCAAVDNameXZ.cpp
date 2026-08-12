DName *__cdecl UnDecorator::getLexicalFrame(DName *a1)
{
  _BYTE *v1; // eax
  int Dimension; // [esp-4h] [ebp-1Ch]
  _BYTE v4[8]; // [esp+0h] [ebp-18h] BYREF
  _BYTE v5[8]; // [esp+8h] [ebp-10h] BYREF
  _DWORD v6[2]; // [esp+10h] [ebp-8h] BYREF

  Dimension = UnDecorator::getDimension((int)v5, 0);
  v1 = DName::operator=(v4, 96);
  DName::operator+(v1, (DName *)v6, Dimension);
  DName::operator+(v6, a1, 39);
  return a1;
}
