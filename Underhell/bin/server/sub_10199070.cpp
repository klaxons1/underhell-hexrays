void sub_10199070()
{
  int v0; // edi
  float *v1; // esi

  v0 = dword_10632630;
  while ( v0 != -1 )
  {
    v1 = *(float **)(dword_10632624 + 12 * v0);
    v0 = *(_DWORD *)(dword_10632624 + 12 * v0 + 8);
    if ( sub_1018ABA0(v1) && !sub_1018AC10(v1) )
    {
      if ( v1[5] - v1[2] >= v1[4] - v1[1] )
        sub_101979D0(v1);
      else
        sub_10197930(v1);
    }
  }
}
