float *__cdecl sub_100D9930(int a1, float *a2, int a3, float *a4)
{
  float *v4; // ebx
  int v5; // edi
  float *result; // eax

  v4 = a2 + 179;
  if ( byte_10638658 )
  {
    if ( a2 )
    {
      if ( *((_BYTE *)a2 + 306) == 3 )
      {
        if ( (unsigned __int8)sub_101C4640(2) )
        {
          v5 = sub_101C46F0(2);
          if ( sub_100D9020(a2, v5) )
            v4 = (float *)(v5 + 148);
        }
      }
    }
  }
  result = a4;
  *a4 = *v4;
  a4[1] = v4[1];
  a4[2] = v4[2];
  return result;
}
