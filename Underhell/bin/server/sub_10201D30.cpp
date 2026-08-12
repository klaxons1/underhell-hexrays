int __thiscall sub_10201D30(int this, int a2, int a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  unsigned int v6; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  float v11; // [esp+0h] [ebp-10h]

  if ( a2 == 2 )
  {
    v4 = *(_DWORD *)(this + 308);
    if ( v4 != -1 )
    {
      v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] == v4 >> 12 )
      {
        if ( *v5 )
        {
          *(_BYTE *)(this + 801) = 0;
          v6 = *(_DWORD *)(this + 848);
          if ( v6 != -1 )
          {
            v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 1];
            v8 = v6 >> 12;
            if ( off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 2] == v8 )
            {
              if ( *v7 )
              {
                if ( off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 2] == v8 )
                  v9 = *v7;
                else
                  v9 = 0;
                sub_100E0970(v9, (int)off_1061BE18, 4, 0);
              }
            }
          }
          sub_100EC3F0((_DWORD *)this, (int)sub_10201920, 0.0, 0);
          v11 = *(float *)(dword_106B31C8 + 12) + 0.1;
          sub_100EC4A0((int *)this, v11, 0);
        }
      }
    }
  }
  return sub_100DCF40((_BYTE *)this, a2, a3);
}
