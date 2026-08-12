void __stdcall sub_101B3080(int a1, int a2, _DWORD *a3, float *a4)
{
  double v4; // st7
  float *v5; // edx
  double v6; // st5
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = (int)(fabs(sin(*((float *)off_103DC81C + 3) * 8.0)) * 128.0);
  v4 = (double)v7;
  v5 = (float *)((char *)off_103DC81C + 16);
  v6 = *((float *)off_103DC81C + 4) * 200.0;
  if ( v6 >= *a4 )
  {
    if ( v4 < 40.0 )
    {
      *a4 = 0.0;
      return;
    }
    *a4 = v6 + *a4;
  }
  *a4 = *a4 - 200.0 * *v5;
  v7 = dword_1042FB8C;
  HIBYTE(v7) = (int)(v4 * 255.0);
  sub_100B3BE0(a3, a1, a2, &v7);
}
