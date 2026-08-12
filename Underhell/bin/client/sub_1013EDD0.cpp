int __cdecl sub_1013EDD0(char a1, float a2)
{
  int result; // eax

  if ( a1 )
  {
    flt_1043A890 = a2;
    result = dword_1043B82C;
    flt_1043A894 = 1.0 - *(float *)(dword_1043B874 + 44);
    flt_1043A898 = (float)*(int *)(dword_1043B7E4 + 48);
    flt_1043A89C = (float)*(int *)(dword_1043B904 + 48);
    flt_1043A8A0 = *(float *)(dword_1043B82C + 44);
    flt_1043A8A4 = *(float *)(dword_1043B8BC + 44);
  }
  else
  {
    flt_1043A890 = 0.0;
  }
  return result;
}
