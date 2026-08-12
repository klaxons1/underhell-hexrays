void __thiscall sub_101AA5E0(int this, int a2)
{
  unsigned int v3; // ebx
  int *v4; // ecx
  double v5; // st7
  double v6; // st7
  float v7; // [esp+10h] [ebp-18h]
  float v8; // [esp+10h] [ebp-18h]
  _BYTE v9[4]; // [esp+20h] [ebp-8h] BYREF
  float v10; // [esp+24h] [ebp-4h] BYREF

  v3 = *(_DWORD *)(this + 248) & 0xFFFEFFFF;
  if ( *(_DWORD *)(this + 248) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 248);
    }
    *(_DWORD *)(this + 248) = v3;
  }
  sub_10023CB0((char *)this, 25);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3628) + 196))(*(_DWORD *)(this + 3628)) )
  {
    sub_10020460((_DWORD *)this, 0x20000);
    (*(void (__thiscall **)(_DWORD, _BYTE *, float *))(**(_DWORD **)(this + 3628) + 212))(
      *(_DWORD *)(this + 3628),
      v9,
      &v10);
    v5 = v10;
    if ( v10 > (double)*(float *)(this + 2896) || v5 > *(float *)(*(_DWORD *)(this + 2404) + 8) )
    {
      *(float *)(this + 2896) = v10;
      v7 = v5;
      sub_1001FBB0((_DWORD *)this, v7);
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3628) + 200))(*(_DWORD *)(this + 3628)) )
  {
    sub_10020460((_DWORD *)this, 0x40000);
    (*(void (__thiscall **)(_DWORD, _BYTE *, float *))(**(_DWORD **)(this + 3628) + 216))(
      *(_DWORD *)(this + 3628),
      v9,
      &v10);
    v6 = v10;
    if ( v10 > (double)*(float *)(this + 2896) || v6 > *(float *)(*(_DWORD *)(this + 2404) + 8) )
    {
      *(float *)(this + 2896) = v10;
      v8 = v6;
      sub_1001FBB0((_DWORD *)this, v8);
    }
  }
}
