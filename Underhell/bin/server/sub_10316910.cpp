int __thiscall sub_10316910(int this)
{
  double v1; // st7
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // eax
  int *v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  char v10; // al
  float v12; // [esp+0h] [ebp-18h]
  float v13; // [esp+0h] [ebp-18h]
  int v14; // [esp+4h] [ebp-14h]
  char v15; // [esp+17h] [ebp-1h]

  v1 = 0.1;
  v15 = 0;
  v3 = (_DWORD *)(this + 4248);
  v4 = 3;
  do
  {
    if ( *v3 != -1 )
    {
      v5 = 4 * (*v3 & 0xFFF);
      v6 = &off_1061BE18[v5 + 1];
      v7 = *v3 >> 12;
      if ( off_1061BE18[v5 + 2] == v7 )
      {
        if ( *v6 )
        {
          if ( off_1061BE18[v5 + 2] == v7 )
            v8 = *v6;
          else
            v8 = 0;
          if ( v1 >= *(float *)(v8 + 828) )
          {
            if ( v6[1] == v7 )
              v9 = *v6;
            else
              v9 = 0;
            sub_102428B0(v9, 0.5, 0.0);
            v15 = 1;
          }
          else
          {
            *(float *)&v14 = v1;
            v12 = v1;
            if ( v6[1] == v7 )
              sub_102428B0(*v6, v12, *(float *)&v14);
            else
              sub_102428B0(0, v12, *(float *)&v14);
          }
          v1 = 0.1;
        }
      }
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( !v15 )
  {
    v10 = *(_BYTE *)(this + 4260);
    if ( !v10 )
      v1 = 1.0;
    *(_BYTE *)(this + 4260) = v10 == 0;
  }
  v13 = v1 + *(float *)(dword_106B31C8 + 12);
  return sub_100EC3F0((_DWORD *)this, (int)sub_10316910, v13, off_1066C8D0);
}
