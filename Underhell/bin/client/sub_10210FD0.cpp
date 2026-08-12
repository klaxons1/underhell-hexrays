int __thiscall sub_10210FD0(float *this, int a2, int a3, int a4, int a5, int a6)
{
  int (*v6)(void); // edx
  int v7; // eax
  int v9; // eax
  float v10; // [esp+0h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-18h]
  float v12; // [esp+4h] [ebp-18h]
  float v13; // [esp+8h] [ebp-14h]
  float v14; // [esp+8h] [ebp-14h]

  v6 = *(int (**)(void))(*(_DWORD *)this + 120);
  if ( 1.0 == this[17] )
  {
    v14 = this[15];
    v12 = this[14];
    v9 = v6();
    return sub_10204BB0(v9, v12, v14, a2, a3, a4);
  }
  else
  {
    v13 = this[17];
    v11 = *((int *)this + 15);
    v10 = this[14];
    v7 = v6();
    return sub_10204C60(v7, v10, v11, v13, a2, a3, a4);
  }
}
