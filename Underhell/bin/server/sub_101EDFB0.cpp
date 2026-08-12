void __thiscall sub_101EDFB0(int this)
{
  int *v2; // ecx

  if ( 0.0 != *(float *)(this + 3972) || 0.0 != *(float *)(this + 3976) )
  {
    *(float *)(this + 3972) = 0.0;
    *(float *)(this + 3976) = 0.0;
    *(float *)(this + 3980) = 0.0;
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_106B31D0 + 200))(
      dword_106B31D0,
      *(_DWORD *)(this + 24),
      0.0,
      0.0);
  }
  if ( *(_BYTE *)(this + 3316) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 3316) = 0;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 3316);
      *(_BYTE *)(this + 3316) = 0;
    }
  }
}
