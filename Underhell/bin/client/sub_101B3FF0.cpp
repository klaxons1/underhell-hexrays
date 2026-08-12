void __thiscall sub_101B3FF0(int this, float *a2, int a3, float a4)
{
  int v5; // ebx
  int v6; // eax
  int v7; // eax

  v5 = *(_DWORD *)(this + 752);
  if ( v5 != 24 )
  {
    v6 = sub_101B3A00((float *)this, a2);
    if ( v6 <= -1 )
    {
      *(float *)(this + 20 * v5 + 272) = *a2;
      v7 = this + 20 * v5 + 272;
      *(float *)(v7 + 4) = a2[1];
      *(float *)(v7 + 8) = a2[2];
      *(_DWORD *)(this + 20 * *(_DWORD *)(this + 752) + 284) = a3;
      *(float *)(this + 20 * (*(_DWORD *)(this + 752))++ + 288) = *((float *)off_103DC81C + 3) + a4;
    }
    else
    {
      *(float *)(this + 20 * v6 + 288) = *((float *)off_103DC81C + 3) + a4;
    }
  }
}
