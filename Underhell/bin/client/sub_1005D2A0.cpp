int *__thiscall sub_1005D2A0(char *this, unsigned int a2)
{
  if ( a2 <= 0x1F )
    return (int *)&this[4 * a2 + 476];
  if ( (dword_1040D5B0 & 1) == 0 )
  {
    dword_1040D5B0 |= 1u;
    dword_1040D5AC = 0;
  }
  return &dword_1040D5AC;
}
