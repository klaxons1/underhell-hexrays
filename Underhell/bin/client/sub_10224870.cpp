void __thiscall sub_10224870(float *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebp
  double v10; // st7
  int v11; // ebx
  float v13; // [esp+4h] [ebp-90h]
  float v14; // [esp+1Ch] [ebp-78h]
  _BYTE v15[4]; // [esp+20h] [ebp-74h] BYREF
  int v16[3]; // [esp+24h] [ebp-70h] BYREF
  int v17[25]; // [esp+30h] [ebp-64h] BYREF

  (*(void (__thiscall **)(int, int *))(*(_DWORD *)a4 + 588))(a4, v16);
  v13 = this[21] * 1024.0;
  sub_102222F0((int)v17, a2, a6, v13, *(_DWORD *)(a2 + 8));
  v9 = sub_10227A90(a4, 0, v15, a3);
  v10 = 1.0;
  if ( 0.0 != *(float *)(a2 + 44) )
    v10 = 1.0 / *(float *)(a2 + 44);
  v11 = a8;
  if ( a8 > 0 )
  {
    do
    {
      v14 = v10;
      sub_102226A0(this, a5, (int)v17, a7++, (float *)v16, v14, v9);
      --v11;
    }
    while ( v11 );
  }
}
