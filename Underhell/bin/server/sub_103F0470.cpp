int __thiscall sub_103F0470(int this)
{
  _DWORD *v2; // esi
  int v3; // edi
  int *v4; // eax
  int v5; // ecx
  int v6; // eax
  double v7; // st7
  int *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int result; // eax
  float v13; // [esp+0h] [ebp-14h]

  v2 = (_DWORD *)(this + 2080);
  v3 = 4;
  if ( *(_BYTE *)(this + 1951) )
  {
    do
    {
      if ( *v2 != -1 )
      {
        v4 = &off_1061BE18[4 * (*v2 & 0xFFF) + 1];
        v5 = *v2 >> 12;
        if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] == v5 )
        {
          if ( *v4 )
          {
            if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] == v5 )
              v6 = *v4;
            else
              v6 = 0;
            sub_10242820(v6, 0, 0.1);
          }
        }
      }
      ++v2;
      --v3;
    }
    while ( v3 );
    v7 = *(float *)(dword_106B31C8 + 12) + 0.25;
  }
  else
  {
    do
    {
      if ( *v2 != -1 )
      {
        v8 = &off_1061BE18[4 * (*v2 & 0xFFF) + 1];
        v9 = *v2 >> 12;
        if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] == v9 )
        {
          if ( *v8 )
          {
            if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] == v9 )
              v10 = *v8;
            else
              v10 = 0;
            sub_10242820(v10, 255, 0.1);
            if ( *v2 == -1 || off_1061BE18[4 * (*v2 & 0xFFF) + 2] != *v2 >> 12 )
              v11 = 0;
            else
              v11 = off_1061BE18[4 * (*v2 & 0xFFF) + 1];
            sub_10242BA0(v11);
          }
        }
      }
      ++v2;
      --v3;
    }
    while ( v3 );
    v7 = *(float *)(dword_106B31C8 + 12) + 0.5;
  }
  v13 = v7;
  result = sub_100EC3F0((_DWORD *)this, (int)sub_103F0470, v13, (int)"HazardBlink");
  *(_BYTE *)(this + 1951) = *(_BYTE *)(this + 1951) == 0;
  return result;
}
