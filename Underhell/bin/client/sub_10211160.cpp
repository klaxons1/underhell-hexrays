void __thiscall sub_10211160(float *this, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // ebp
  int v9; // eax
  long double v10; // st7
  float *v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v15; // eax
  int v16; // ebp
  long double v17; // st7
  float *v18; // edx
  int v19; // eax
  long double v20; // st7
  float v21; // [esp+10h] [ebp-8h]
  float v22; // [esp+1Ch] [ebp+4h]
  float v23; // [esp+1Ch] [ebp+4h]
  float v24; // [esp+20h] [ebp+8h]

  if ( *((_BYTE *)this + 72) )
  {
    for ( ; a4; *v18 = v20 + *v18 )
    {
      --a4;
      v15 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 120))(this);
      v21 = this[14];
      v16 = *(_DWORD *)(a2 + 6624);
      v23 = this[15];
      v17 = this[17];
      v18 = (float *)(*(_DWORD *)(a2 + 4 * v15 + 6068) + 4 * ((a3 & 3) + *(_DWORD *)(a2 + 4 * v15 + 6324) * (a3 / 4)));
      v19 = *(_DWORD *)(a2 + 6620);
      *(_DWORD *)(a2 + 6620) = v19 + 1;
      v20 = v21 + (v23 - v21) * pow(flt_103EE7C0[((_WORD)v16 + (_WORD)v19) & 0xFFF], v17) + this[16];
      *(_DWORD *)(a2 + 6620) = v19 + 2;
      if ( flt_103EE7C0[((_WORD)v19 + 1 + (_WORD)v16) & 0xFFF]
         + flt_103EE7C0[((_WORD)v19 + 1 + (_WORD)v16) & 0xFFF]
         - 1.0 >= 0.0 )
        v20 = -v20;
      ++a3;
    }
  }
  else if ( a4 )
  {
    v8 = a3;
    do
    {
      --a4;
      v9 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 120))(this);
      v22 = this[14];
      v24 = this[15];
      v10 = this[17];
      v11 = (float *)(*(_DWORD *)(a2 + 4 * v9 + 6068) + 4 * ((v8 & 3) + *(_DWORD *)(a2 + 4 * v9 + 6324) * (v8 / 4)));
      v12 = *(_DWORD *)(a2 + 6620);
      v13 = ((_WORD)v12 + (unsigned __int16)*(_DWORD *)(a2 + 6624)) & 0xFFF;
      *(_DWORD *)(a2 + 6620) = v12 + 1;
      ++v8;
      *v11 = v22 + (v24 - v22) * pow(flt_103EE7C0[v13], v10) + *v11 + this[16];
    }
    while ( a4 );
  }
}
