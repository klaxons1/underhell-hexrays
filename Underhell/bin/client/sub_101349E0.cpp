void __thiscall sub_101349E0(int *this, int a2, int a3, int a4)
{
  double v4; // st7
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  double v8; // st7
  int v9; // [esp+Ch] [ebp-1Ch] BYREF
  int v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+14h] [ebp-14h]
  int v12; // [esp+18h] [ebp-10h]
  float v13; // [esp+20h] [ebp-8h]
  int *v14; // [esp+24h] [ebp-4h]

  v4 = 10.0 / *(float *)(dword_104396AC + 44);
  v14 = this;
  v5 = (int)v4;
  if ( (int)v4 <= 1 )
    v5 = 1;
  v6 = a3;
  v7 = a3;
  v10 = a3;
  v12 = 1;
  v9 = a2;
  v11 = 4;
  LOWORD(a3) = -14336;
  BYTE2(a3) = 0;
  strcpy((char *)&a2, "??");
  if ( v10 > 0 )
  {
    v13 = (float)(a4 + 50);
    do
    {
      a4 = v6 - v7;
      v8 = (double)(v6 - v7) * *(float *)(dword_104396AC + 44);
      if ( v13 <= v8 )
        break;
      if ( (int)v8 % 50 )
      {
        if ( v5 > 5 )
          sub_10134600(v14, &v9, &a2, &a2, 200, 200);
      }
      else
      {
        sub_10134600(v14, &v9, &a3, &a3, 255, 255);
      }
      v7 -= v5;
      v10 = v7;
    }
    while ( v7 > 0 );
  }
}
