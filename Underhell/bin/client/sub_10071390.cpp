int sub_10071390()
{
  int result; // eax

  if ( (dword_10412B68 & 1) != 0 )
    return dword_10412B64;
  dword_10412B68 |= 1u;
  result = sub_10242580("EditablePanel");
  dword_10412B64 = result;
  return result;
}
