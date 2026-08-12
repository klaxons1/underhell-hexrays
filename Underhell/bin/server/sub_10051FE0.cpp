int __thiscall sub_10051FE0(int this, int a2, int a3, int a4)
{
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // esi
  float v11; // [esp+14h] [ebp+Ch]

  if ( a3 == 100002 || a3 == 100003 )
  {
    v6 = *(_DWORD *)(this + 20);
    if ( v6 != -1 )
    {
      v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
      v8 = v6 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == v8 )
      {
        if ( *v7 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == v8 )
            v9 = *v7;
          else
            v9 = 0;
          v11 = *(float *)(this + 56) * 0.5;
          if ( v9 )
          {
            if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
              sub_100DAE60(v9);
            *(float *)(this + 92) = *(float *)(v9 + 580);
            *(float *)(this + 96) = *(float *)(v9 + 584);
            *(float *)(this + 100) = *(float *)(v9 + 588);
            *(float *)(this + 104) = v11;
          }
          sub_1001EE20((float *)(this + 144));
          sub_10051D90(this);
        }
      }
    }
  }
  return sub_1004B440((_BYTE *)this, a2, a3, a4);
}
