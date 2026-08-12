PVOID _initp_eh_hooks()
{
  PVOID result; // eax

  result = EncodePointer(terminate);
  dword_104823A4 = result;
  return result;
}
