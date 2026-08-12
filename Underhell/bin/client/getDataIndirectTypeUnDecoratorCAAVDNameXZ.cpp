int __cdecl UnDecorator::getDataIndirectType(int a1)
{
  int v2; // [esp+0h] [ebp-10h] BYREF
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  v5 &= 0xFFFF0000;
  v3 &= 0xFFFF0000;
  v4 = 0;
  v2 = 0;
  UnDecorator::getDataIndirectType(a1, &v2, Locale, &v4, 0);
  return a1;
}
