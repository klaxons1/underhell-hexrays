int __cdecl sub_102285E0(LPCWCH lpWideCharStr, LPSTR lpMultiByteStr, int cbMultiByte)
{
  int result; // eax

  AssertValidStringPtr(lpMultiByteStr, cbMultiByte);
  AssertValidReadPtr(lpWideCharStr, 1);
  *lpMultiByteStr = 0;
  result = WideCharToMultiByte(0xFDE9u, 0, lpWideCharStr, -1, lpMultiByteStr, cbMultiByte, 0, 0);
  lpMultiByteStr[cbMultiByte - 1] = 0;
  return result;
}
