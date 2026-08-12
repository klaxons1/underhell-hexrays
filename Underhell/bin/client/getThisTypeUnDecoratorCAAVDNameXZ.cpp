int __cdecl UnDecorator::getThisType(int a1)
{
  int v2; // [esp+0h] [ebp-10h] BYREF
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  v4 = 0;
  v2 = 0;
  v5 &= 0xFFFF0000;
  v3 &= 0xFFFF0000;
  UnDecorator::getDataIndirectType(a1, &v2, Locale, &v4, 1);
  return a1;
}
