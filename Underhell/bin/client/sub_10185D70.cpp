void __thiscall sub_10185D70(int this, float *a2)
{
  double v3; // st7
  int v4; // edx
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  int v9; // [esp+4h] [ebp-8h] BYREF
  int v10; // [esp+8h] [ebp-4h] BYREF

  sub_102361D0(&v10, &v9);
  *(float *)(this + 6352) = *a2;
  *(float *)(this + 6356) = a2[1];
  *(float *)(this + 6360) = *a2;
  *(float *)(this + 6364) = a2[1];
  v3 = *(float *)(this + 6348) * *(float *)(this + 6344);
  v4 = *(_DWORD *)(this + 248);
  v9 = (int)(1024.0 / (v3 + v3));
  v10 = v9;
  if ( (*(int (__thiscall **)(int))(v4 + 4))(this + 248) != 3 )
  {
    v5 = (double)v10;
    if ( v5 > *(float *)(this + 6360) )
      *(float *)(this + 6360) = v5;
    v6 = (double)(1024 - v10);
    if ( v6 < *(float *)(this + 6360) )
      *(float *)(this + 6360) = v6;
    v7 = (double)v9;
    if ( v7 > *(float *)(this + 6364) )
      *(float *)(this + 6364) = v7;
    v8 = (double)(1024 - v9);
    if ( v8 < *(float *)(this + 6364) )
      *(float *)(this + 6364) = v8;
    if ( *(float *)(this + 6344) <= 1.0 )
    {
      *(float *)(this + 6360) = 512.0;
      *(float *)(this + 6364) = 512.0;
    }
  }
}
