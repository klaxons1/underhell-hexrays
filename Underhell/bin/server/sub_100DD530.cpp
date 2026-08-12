int __thiscall sub_100DD530(int this, float *a2, float *a3)
{
  int result; // eax
  float v5; // ecx
  float v6; // [esp+4h] [ebp-Ch]

  if ( *(_BYTE *)(this + 306) == 6 && *(_DWORD *)(this + 424) )
    return (*(int (__thiscall **)(_DWORD, float *, float *))(**(_DWORD **)(this + 424) + 204))(
             *(_DWORD *)(this + 424),
             a2,
             a3);
  if ( a2 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    *a2 = *(float *)(this + 476);
    a2[1] = *(float *)(this + 480);
    a2[2] = *(float *)(this + 484);
  }
  result = (int)a3;
  if ( a3 )
  {
    v5 = *(float *)(this + 492);
    v6 = *(float *)(this + 488);
    *a3 = *(float *)(this + 496);
    a3[1] = v6;
    a3[2] = v5;
  }
  return result;
}
