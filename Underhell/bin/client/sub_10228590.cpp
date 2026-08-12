int __cdecl sub_10228590(LPCCH lpMultiByteStr, LPWSTR lpWideCharStr, unsigned int a3)
{
  int result; // eax

  AssertValidStringPtr(lpMultiByteStr, 0xFFFFFF);
  AssertValidWritePtr(lpWideCharStr, 1);
  *lpWideCharStr = 0;
  result = MultiByteToWideChar(0xFDE9u, 0, lpMultiByteStr, -1, lpWideCharStr, a3 >> 1);
  lpWideCharStr[(a3 >> 1) - 1] = 0;
  return result;
}
