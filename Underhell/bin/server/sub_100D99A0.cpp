int __cdecl sub_100D99A0(int a1, float *a2, int a3, float *a4)
{
  float *v4; // edi
  int v5; // ebx
  int result; // eax

  v4 = a2 + 182;
  if ( byte_10638658 )
  {
    if ( a2 )
    {
      if ( *((_BYTE *)a2 + 306) == 3 )
      {
        if ( (unsigned __int8)sub_101C4640(2) )
        {
          v5 = sub_101C46F0(2);
          if ( sub_100D9220(a2, v5) )
            v4 = (float *)(v5 + 160);
        }
      }
    }
  }
  *a4 = (double)(unsigned __int16)(int)(*v4 * 182.04445) * 0.0054931641;
  a4[1] = (double)(unsigned __int16)(int)(v4[1] * 182.04445) * 0.0054931641;
  result = (unsigned __int16)(int)(182.04445 * v4[2]);
  a4[2] = 0.0054931641 * (double)result;
  return result;
}
