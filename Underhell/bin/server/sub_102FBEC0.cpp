char __thiscall sub_102FBEC0(int this, int a2)
{
  int v3; // ecx
  char v4; // al
  double v5; // st7
  double v6; // st6

  v3 = *(_DWORD *)(this + 3624);
  if ( v3 )
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 224))(v3, a2);
  else
    v4 = sub_100242F0((_DWORD *)this, a2);
  if ( !v4 )
    return 0;
  if ( *(_DWORD *)(a2 + 16) == 512 )
  {
    v5 = 3.4028235e38;
    if ( *(_BYTE *)(a2 + 30) )
      v6 = 3.4028235e38;
    else
      v6 = *(float *)(a2 + 24);
    if ( v6 <= *(float *)(this + 4064) )
      return 0;
    *(_BYTE *)(this + 4092) = 1;
    *(float *)(this + 4080) = *(float *)(a2 + 36);
    *(float *)(this + 4084) = *(float *)(a2 + 40);
    *(float *)(this + 4088) = *(float *)(a2 + 44);
    if ( !*(_BYTE *)(a2 + 30) )
      v5 = *(float *)(a2 + 24);
    *(float *)(this + 4064) = v5;
  }
  return 1;
}
