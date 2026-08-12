double __cdecl sub_103DF2D0(float a1, float a2, int a3, int a4, char a5)
{
  double v5; // st7
  float v7; // [esp+0h] [ebp-14h]
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+Ch] [ebp-8h]
  float v10; // [esp+10h] [ebp-4h]
  float v11; // [esp+10h] [ebp-4h]

  if ( a5 )
  {
    v5 = (*(float *)(dword_106B31C8 + 12) - a1) / (a2 - a1);
    if ( v5 < 1.0 )
    {
      v10 = (float)a4;
      v8 = (float)a3;
      v7 = v5;
      return sub_102191B0(v7, 0.0, 1.0, v8, v10);
    }
  }
  else if ( 0.0 != a2 - a1 )
  {
    v11 = (float)a4;
    v9 = (float)a3;
    return sub_10134630(*(float *)(dword_106B31C8 + 12), a1, a2, v9, v11);
  }
  return (double)a4;
}
