void __thiscall sub_101BA110(int *this, int a2, int a3, int a4, float *a5, float *a6)
{
  int v6; // eax

  if ( a2 )
  {
    if ( a3 )
    {
      v6 = this[57] + 36 * sub_101B93B0(this + 57);
      *(_DWORD *)v6 = a2;
      *(_DWORD *)(v6 + 4) = a3;
      *(_DWORD *)(v6 + 8) = a4;
      *(float *)(v6 + 12) = *a5;
      *(float *)(v6 + 16) = a5[1];
      *(float *)(v6 + 20) = a5[2];
      *(float *)(v6 + 24) = *a6;
      *(float *)(v6 + 28) = a6[1];
      *(float *)(v6 + 32) = a6[2];
    }
  }
}
