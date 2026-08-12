int __thiscall sub_100EEE20(int this, const char *a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // ecx
  double v8; // st7
  double v9; // st6
  int v10; // ecx
  double v11; // st7
  int *v12; // ecx
  int v14; // [esp+Ch] [ebp-Ch]
  int v15; // [esp+10h] [ebp-8h]
  float v17; // [esp+20h] [ebp+8h]

  v2 = dword_10700AC8;
  v3 = this;
  v14 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  sub_100C4A30(v3, a2);
  v4 = 0;
  if ( sub_100BF790(v3) > 0 )
  {
    v15 = 0;
    do
    {
      v17 = 0.0;
      if ( v4 >= 0 && v4 < sub_100BF790(v3) )
      {
        v5 = dword_10700AC8;
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
        if ( !*(_DWORD *)(v3 + 1100) && sub_100D7240((void *)v3) )
          sub_100BD750((volatile signed __int32 *)v3);
        v6 = *(_DWORD *)(v3 + 1100);
        if ( !v6 || !*(_DWORD *)v6 )
          v6 = 0;
        (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
        if ( v6 )
        {
          v7 = v15 + *(_DWORD *)(*(_DWORD *)v6 + 272);
          v8 = *(float *)(v7 + *(_DWORD *)v6 + 16);
          v9 = *(float *)(v7 + *(_DWORD *)v6 + 12);
          v10 = *(_DWORD *)v6 + v7;
          if ( v9 != v8 )
          {
            v11 = -*(float *)(v10 + 12) / (*(float *)(v10 + 16) - *(float *)(v10 + 12));
            if ( v11 <= 1.0 )
            {
              if ( v11 < 0.0 )
                v11 = 0.0;
            }
            else
            {
              v11 = 1.0;
            }
            v17 = v11;
          }
          if ( *(_DWORD *)(this + 4 * v4 + 1140) != LODWORD(v17) )
          {
            if ( *(_BYTE *)(this + 84) )
            {
              *(_BYTE *)(this + 88) |= 1u;
            }
            else
            {
              v12 = *(int **)(this + 24);
              if ( v12 )
                sub_100194B0(v12, 4 * v4 + 1140);
            }
            *(float *)(this + 1140 + 4 * v4) = v17;
          }
        }
        v3 = this;
      }
      v15 += 20;
      ++v4;
    }
    while ( v4 < sub_100BF790(v3) );
    v2 = v14;
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
}
