int __thiscall sub_101C38F0(int this, int a2, float a3)
{
  float v5; // edx
  float v6; // eax
  int *v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  int v12[30]; // [esp+10h] [ebp-84h] BYREF
  float v13[3]; // [esp+88h] [ebp-Ch] BYREF
  int v14; // [esp+9Ch] [ebp+8h]

  *(_BYTE *)(this + 48) = (*(_DWORD *)(a2 + 256) & 0x40000000) != 0;
  *(_DWORD *)(this + 16) = 0;
  sub_101C3810((_DWORD *)this, a2);
  v5 = *(float *)(a2 + 732);
  v6 = *(float *)(a2 + 736);
  v13[0] = *(float *)(a2 + 728);
  v13[1] = v5;
  v13[2] = v6;
  sub_101C1D30(a2, a3, (float *)v12);
  sub_101C3620((_DWORD *)this);
  if ( (**(unsigned __int8 (__thiscall ***)(int, int *, int))this)(this, v12, a2) )
  {
    sub_101C1B80((_DWORD *)this, 1, (int)v12);
    return 0;
  }
  else
  {
    v7 = (int *)(*(_DWORD *)(this + 24) + 104 * *(_DWORD *)(this + 44));
    v8 = v7[23];
    if ( v8 )
      sub_101C6C90(v8, v7 + 4);
    v14 = *v7;
    sub_100E11A0(a2, v13);
    v9 = *(_DWORD *)(this + 36) - 1;
    if ( v9 >= 0 )
    {
      v10 = 104 * v9;
      do
      {
        sub_100E0D20(*(_DWORD *)(v10 + *(_DWORD *)(this + 24)), (float *)(v10 + *(_DWORD *)(this + 24) + 4));
        v10 -= 104;
        --v9;
      }
      while ( v9 >= 0 );
    }
    return v14;
  }
}
