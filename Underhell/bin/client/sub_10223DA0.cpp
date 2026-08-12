void __thiscall sub_10223DA0(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  int v10; // eax
  int v11; // ebp
  int v12; // esi
  int v13; // ebx
  float v14; // [esp+4h] [ebp-74h]
  float v15[3]; // [esp+20h] [ebp-58h] BYREF
  float v16[19]; // [esp+2Ch] [ebp-4Ch] BYREF

  v8 = a4;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a4 + 588))(a4, v15);
  v14 = *(float *)(this + 84) * 1024.0;
  sub_10220B80(v16, (float *)a2, a6, v14, 0.0, *(_DWORD *)(a2 + 8));
  v10 = sub_10227A90(v8, 0, &a4, a3 + 8);
  v11 = a8;
  v12 = a7;
  v13 = v10;
  if ( a8 > 0 )
  {
    do
    {
      sub_102215B0((_DWORD *)this, a5, (int)v16, v12++, v15, v13);
      --v11;
    }
    while ( v11 );
  }
}
