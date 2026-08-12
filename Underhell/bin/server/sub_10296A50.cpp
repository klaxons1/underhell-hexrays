void __thiscall sub_10296A50(int this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // edi
  double v8; // st6
  double v9; // st4
  double v10; // rt0
  int v11; // eax
  int v12; // eax

  sub_1004B5F0((_DWORD **)this);
  v3 = *(_DWORD *)(this + 60);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        v6 = off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] == v5 ? *v4 : 0;
        if ( *(_DWORD *)(v6 + 860) == 1
          && (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1080))(*(_DWORD *)(this + 4), a2) < 3 )
        {
          v7 = *(_DWORD *)(this + 4);
          if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
            sub_100DAE60(*(_DWORD *)(this + 4));
          if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
            sub_100DAE60(a2);
          v8 = *(float *)(a2 + 584) - *(float *)(v7 + 584);
          v9 = *(float *)(a2 + 580) - *(float *)(v7 + 580);
          v10 = *(float *)(a2 + 588) - *(float *)(v7 + 588);
          if ( v9 * v9 + v8 * v8 + v10 * v10 <= 57600.0 )
          {
            v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
            v12 = sub_1007DB30((_DWORD *)(v11 + 52), 100002);
            sub_10023CB0(*(char **)(this + 4), v12);
          }
        }
      }
    }
  }
}
