int sub_10130F70()
{
  int result; // eax

  if ( (dword_1043953C & 1) != 0 )
    return dword_10439538;
  dword_1043953C |= 1u;
  result = sub_10242540("DragnDropSlot");
  dword_10439538 = result;
  return result;
}
