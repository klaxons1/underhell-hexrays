int __thiscall sub_10333470(int this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // eax
  int result; // eax

  sub_10041230((float *)this);
  *(_DWORD *)this = &CNPC_Bullseye::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Bullseye::`vftable';
  *(_DWORD *)(this + 3620) = -1;
  *(_DWORD *)(this + 3636) = -1;
  *(_DWORD *)(this + 3624) = 0;
  *(_DWORD *)(this + 3640) = 5;
  *(_DWORD *)(this + 3660) = -1;
  *(_DWORD *)(this + 3648) = 0;
  *(_DWORD *)(this + 3664) = 5;
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  v2 = (int)*(float *)(dword_106E5B2C + 44);
  if ( *(_DWORD *)(this + 220) != v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = v2;
  }
  *(_DWORD *)(this + 3620) = -1;
  v3 = dword_106E5B08;
  v4 = dword_106E5B08;
  if ( dword_106E5B08 + 1 > dword_106E5B00 )
  {
    sub_102ABFC0(&dword_106E5AFC, dword_106E5B08 - dword_106E5B00 + 1);
    v3 = dword_106E5B08;
  }
  v5 = dword_106E5AFC;
  dword_106E5B08 = v3 + 1;
  v6 = v3 - v4;
  dword_106E5B0C = dword_106E5AFC;
  if ( v6 > 0 )
  {
    memcpy((void *)(dword_106E5AFC + 4 * v4 + 4), (const void *)(dword_106E5AFC + 4 * v4), 4 * v6);
    v5 = dword_106E5AFC;
  }
  v7 = (_DWORD *)(v5 + 4 * v4);
  if ( v7 )
    *v7 = this;
  *(float *)(this + 1684) = 360.0;
  result = this;
  *(float *)(this + 3680) = 0.0;
  return result;
}
