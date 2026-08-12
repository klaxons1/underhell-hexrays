void __thiscall sub_102EB340(_DWORD *this, char a2)
{
  int i; // edi
  unsigned int v4; // eax
  int *v5; // ecx
  int *v6; // esi
  float v7; // [esp+0h] [ebp-14h]

  for ( i = this[6] - 1; i >= 0; --i )
  {
    v4 = *(_DWORD *)(this[3] + 8 * i + 4);
    if ( v4 != -1 )
    {
      v5 = &off_1061BE18[4 * (*(_DWORD *)(this[3] + 8 * i + 4) & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*(_DWORD *)(this[3] + 8 * i + 4) & 0xFFF) + 2] == v4 >> 12 )
      {
        v6 = (int *)*v5;
        if ( *v5 )
        {
          v7 = 0.0;
          if ( a2 )
          {
            sub_100EC3F0(v6, (int)sub_102EB100, v7, 0);
            sub_100EC4A0(v6, *(float *)(dword_106B31C8 + 12), 0);
          }
          else
          {
            sub_100EC3F0(v6, 0, v7, 0);
          }
        }
      }
    }
  }
}
