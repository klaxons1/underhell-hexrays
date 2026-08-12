int sub_10071350()
{
  int result; // eax

  if ( (dword_10412B60 & 1) != 0 )
    return dword_10412B5C;
  dword_10412B60 |= 1u;
  result = sub_10242540("EditablePanel");
  dword_10412B5C = result;
  return result;
}
