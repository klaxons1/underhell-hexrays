int __cdecl sub_10008950(_DWORD *a1, int a2, int a3, float *a4)
{
  int result; // eax
  int v5; // eax
  const char *v6; // [esp+Ch] [ebp-1Ch]
  int v7[3]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( !a1 )
    return Msg("Bad pstudiohdr in GetSequenceLinearMotion()!\n");
  result = sub_101282A0(a1);
  if ( (_BYTE)result )
  {
    if ( a2 < 0 || a2 >= sub_10126D70(a1) )
    {
      if ( sub_10126D70(a1) > 0 && ++dword_10400FD0 < 10 )
      {
        do
        {
          v6 = (const char *)(*a1 + 12);
          v5 = sub_10126D70(a1);
          Msg("Bad sequence (%i out of %i max) in GetSequenceLinearMotion() for model '%s'!\n", a2, v5, v6);
          ++dword_10400FD0;
        }
        while ( dword_10400FD0 < 10 );
      }
      result = (int)a4;
      *a4 = 0.0;
      a4[1] = 0.0;
      a4[2] = 0.0;
    }
    else
    {
      return sub_1001DF90((int)a1, a2, 0.0, 1.0, a3, (int)a4, (int)v7);
    }
  }
  return result;
}
