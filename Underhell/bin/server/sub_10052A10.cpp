void __thiscall sub_10052A10(int this, int a2)
{
  int v3; // edi
  float v4; // [esp+8h] [ebp-4h]

  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1364))(*(_DWORD *)(this + 4)) != this
    && sub_10052150((_DWORD *)this) )
  {
    sub_10044830(*(_DWORD **)(this + 4), 0.5);
  }
  if ( -1.0 == *(float *)(this + 104) && !sub_10051440((_DWORD *)this) )
  {
    if ( *(_DWORD *)(this + 20) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != *(_DWORD *)(this + 20) >> 12 )
    {
      v3 = 0;
    }
    else
    {
      v3 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
    }
    v4 = *(float *)(this + 56);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      *(float *)(this + 92) = *(float *)(v3 + 580);
      *(float *)(this + 96) = *(float *)(v3 + 584);
      *(float *)(this + 100) = *(float *)(v3 + 588);
      *(float *)(this + 104) = v4;
    }
  }
}
