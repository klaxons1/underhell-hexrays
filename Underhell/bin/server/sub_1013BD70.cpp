int sub_1013BD70()
{
  int result; // eax

  result = sub_10244CD0(&unk_106B00B8);
  dword_106B00B0 = 0;
  if ( dword_106B00AC < 0 )
  {
    ++dword_10621F7C;
    dword_106B00B4 = dword_106B00A4;
  }
  else
  {
    result = dword_106B00A4;
    if ( dword_106B00A4 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_106B00A4);
      result = 0;
      dword_106B00A4 = 0;
    }
    ++dword_10621F7C;
    dword_106B00A8 = 0;
    dword_106B00B4 = result;
  }
  return result;
}
