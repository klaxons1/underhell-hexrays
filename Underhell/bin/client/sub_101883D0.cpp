int __thiscall sub_101883D0(int this, const char *a2, int a3, float a4)
{
  int v5; // edi
  int v6; // eax
  double v7; // st7
  int v8; // eax
  _DWORD v10[24]; // [esp+8h] [ebp-60h] BYREF

  memset(v10, 0, sizeof(v10));
  v5 = *(_DWORD *)(this + 6296);
  v10[1] = a3;
  v10[0] = v5;
  *(_DWORD *)(this + 6296) = v5 + 1;
  v6 = sub_10188310(this, a2);
  *(float *)&v10[19] = *(float *)(this + 280);
  v10[2] = v6;
  v7 = -1.0;
  *(float *)&v10[20] = -1.0;
  if ( a4 > 0.0 )
    v7 = a4 + *((float *)off_103DC81C + 3);
  v8 = *(_DWORD *)(this + 5776);
  *(float *)&v10[18] = v7;
  sub_10187BC0((int *)(this + 5764), v8, v10);
  return v5;
}
