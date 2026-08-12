int sub_10063C20()
{
  int result; // eax

  result = dword_1069ABE0;
  if ( *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48) )
  {
    if ( (dword_1069042C & 1) != 0 )
    {
      dword_1069042C &= ~1u;
      DevMsg("AI Enabled.\n");
    }
    else
    {
      dword_1069042C |= 1u;
      DevMsg("AI Disabled.\n");
      byte_1069362D = 1;
    }
    result = sub_10153480();
    dword_1060F300 = result;
  }
  return result;
}
