int *__cdecl DNameStatusNode::make(unsigned int a1)
{
  if ( (dword_104828AC & 1) == 0 )
  {
    dword_104828AC |= 1u;
    dword_1048287C[0] = (int)&off_103B6924;
    dword_10482880 = 0;
    dword_10482884 = 0;
    dword_10482888 = (int)&off_103B6924;
    dword_1048288C = 1;
    dword_10482890 = 4;
    dword_10482894 = (int)&off_103B6924;
    dword_10482898 = 2;
    dword_1048289C = 0;
    dword_104828A0 = (int)&off_103B6924;
    dword_104828A4 = 3;
    dword_104828A8 = 0;
  }
  if ( a1 > 3 )
    return &dword_104828A0;
  else
    return &dword_1048287C[3 * a1];
}
