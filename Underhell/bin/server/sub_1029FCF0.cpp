void __thiscall sub_1029FCF0(_DWORD *this, float *a2, int a3, float *a4, int a5)
{
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  int v10[3]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( this[4] == 1 )
  {
    v6 = this[17];
    if ( v6 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
    sub_1029E9F0(v7, a2, (float *)v10);
    sub_1011C120((int)v10, 2.0, 0, 255, 0, 1, 0.1);
    sub_1011CB60((float *)v10, a3, 8.0, 1, 0.1);
    v8 = this[17];
    if ( v8 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
    sub_1029E9F0(v9, a4, (float *)v10);
    sub_1011C120((int)v10, 2.0, 0, 0, 255, 1, 0.1);
    sub_1011CB60((float *)v10, a5, 8.0, 1, 0.1);
  }
  else
  {
    sub_1011C120((int)a2, 4.0, 0, 255, 0, 1, 0.1);
    sub_1011CB60(a2, a3, 8.0, 1, 0.1);
    sub_1011C120((int)a4, 2.0, 0, 0, 255, 1, 0.1);
    sub_1011CB60(a4, a5, 8.0, 1, 0.1);
  }
}
