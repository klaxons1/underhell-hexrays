int __thiscall sub_10246510(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  int v8; // ebx
  int *v9; // ecx

  v7 = 0;
  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  sub_101C8220((_DWORD *)this);
  v8 = a2;
  sub_102463C0((int *)this, *(_DWORD *)(this + 12), a2, 0);
  if ( a2 > 0 )
  {
    do
    {
      v9 = (int *)(v7 + *(_DWORD *)this);
      v9[3] = 0;
      sub_10245C90(v9, 0, a4, 0);
      *(_DWORD *)(v7 + *(_DWORD *)this + 8) = a3;
      v7 += 20;
      --v8;
    }
    while ( v8 );
    v8 = a2;
  }
  *(_BYTE *)(this + 22) = ((v8 - 1) & v8) == 0;
  *(_DWORD *)(this + 24) = ((v8 - 1) & v8) == 0 ? v8 - 1 : 0;
  return this;
}
