void __thiscall sub_101E3B90(_DWORD *this, double (__thiscall ***a2)(_DWORD))
{
  int v2; // eax
  int v3; // edx
  int v4; // esi
  int v5; // edi
  int v6; // edx
  float v7; // ebp
  int v8; // ebx
  int v9; // eax
  int v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+4h] [ebp-1Ch]
  float v12; // [esp+Ch] [ebp-14h]
  __int16 v13; // [esp+10h] [ebp-10h]
  __int16 v14; // [esp+1Ch] [ebp-4h]

  v2 = this[3];
  if ( v2 > 0 )
  {
    v3 = 1;
    v4 = 0;
    v11 = 1;
    do
    {
      v10 = v3;
      if ( v3 < v2 )
      {
        v5 = v4 + 10;
        do
        {
          v6 = *this;
          v7 = *(float *)(v4 + *this + 4);
          v8 = *(_DWORD *)(v4 + *this);
          v14 = *(_WORD *)(v4 + *this + 8);
          v12 = *(float *)(v5 + *this + 4);
          v13 = *(_WORD *)(v5 + *this + 8);
          if ( v12 < (double)v7 )
          {
            *(_DWORD *)(v4 + v6) = *(_DWORD *)(v5 + v6);
            *(float *)(v4 + v6 + 4) = v12;
            *(_WORD *)(v4 + v6 + 8) = v13;
            v9 = v5 + *this;
            *(_DWORD *)v9 = v8;
            *(float *)(v9 + 4) = v7;
            *(_WORD *)(v9 + 8) = v14;
          }
          v5 += 10;
          ++v10;
        }
        while ( v10 < this[3] );
        v3 = v11;
      }
      v2 = this[3];
      ++v3;
      v4 += 10;
      v11 = v3;
    }
    while ( v3 - 1 < v2 );
  }
  sub_101E3870(this, a2);
}
