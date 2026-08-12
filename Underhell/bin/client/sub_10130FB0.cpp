int sub_10130FB0()
{
  int result; // eax

  if ( (dword_10439548 & 1) != 0 )
    return dword_10439544;
  dword_10439548 |= 1u;
  result = sub_10242580("DragnDropSlot");
  dword_10439544 = result;
  return result;
}
