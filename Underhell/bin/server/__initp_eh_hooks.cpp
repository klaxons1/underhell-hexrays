PVOID _initp_eh_hooks()
{
  PVOID result; // eax

  result = EncodePointer(terminate);
  dword_107011D0 = result;
  return result;
}
