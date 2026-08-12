int sub_1013C8F0()
{
  int result; // eax
  int v1; // esi

  result = dword_1043A60C;
  if ( *(_DWORD *)(dword_1043A60C + 48) )
  {
    v1 = 40;
    do
    {
      flt_104452F0 = 0.078431375;
      result = sub_1017CCA0();
      --v1;
    }
    while ( v1 );
    flt_104452F0 = 0.0;
  }
  return result;
}
