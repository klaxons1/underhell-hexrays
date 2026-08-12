void __thiscall sub_10297510(float *this)
{
  float *v1; // esi
  double v2; // st7
  double v3; // st6
  int v4; // edi
  _DWORD *v5; // ebx
  int *v6; // eax
  int v7; // ecx
  double v8; // rt0
  double v9; // st6
  double v10; // st7
  int v11; // esi
  int v12; // esi
  float v13[3]; // [esp+10h] [ebp-34h] BYREF
  float v14[3]; // [esp+1Ch] [ebp-28h] BYREF
  int v15[3]; // [esp+28h] [ebp-1Ch] BYREF
  int v16[3]; // [esp+34h] [ebp-10h] BYREF
  float *v17; // [esp+40h] [ebp-4h]

  v1 = this;
  v17 = this;
  sub_100DF330(this);
  v2 = 5.0;
  v3 = -5.0;
  v4 = 0;
  v5 = v1 + 252;
  while ( 1 )
  {
    if ( *v5 != -1 )
    {
      v6 = &off_1061BE18[4 * (*v5 & 0xFFF) + 1];
      v7 = *v5 >> 12;
      if ( off_1061BE18[4 * (*v5 & 0xFFF) + 2] == v7 )
      {
        if ( *v6 )
        {
          v8 = v3;
          v9 = v2;
          v10 = v8;
          if ( *((_BYTE *)v1 + v4 + 1088) )
          {
            *(float *)v16 = v9;
            *(float *)&v16[1] = v9;
            *(float *)&v16[2] = v9;
            *(float *)v15 = v10;
            *(float *)&v15[1] = v10;
            *(float *)&v15[2] = v10;
            if ( v6[1] == v7 )
              v11 = *v6;
            else
              v11 = 0;
            if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
              sub_100DAE60(v11);
            sub_1011BB20(v11 + 580, (int)v15, (int)v16, 255, 0, 0, 0, 0.1);
          }
          else
          {
            v14[0] = v9;
            v14[1] = v9;
            v14[2] = v9;
            v13[0] = v10;
            v13[1] = v10;
            v13[2] = v10;
            if ( v6[1] == v7 )
              v12 = *v6;
            else
              v12 = 0;
            if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
              sub_100DAE60(v12);
            sub_1011BB20(v12 + 580, (int)v13, (int)v14, 255, 255, 255, 0, 0.1);
          }
          v2 = 5.0;
          v3 = -5.0;
        }
      }
    }
    ++v4;
    ++v5;
    if ( v4 >= 20 )
      break;
    v1 = v17;
  }
}
