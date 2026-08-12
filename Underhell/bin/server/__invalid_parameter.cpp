int __cdecl _invalid_parameter(
        wchar_t *Expression,
        wchar_t *FunctionName,
        wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int (*v5)(void); // eax

  v5 = (int (*)(void))DecodePointer(dword_107011C8);
  if ( !v5 )
    _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  return v5();
}
