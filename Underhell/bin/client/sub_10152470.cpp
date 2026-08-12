void __thiscall sub_10152470(_DWORD *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax
  float *v5; // eax
  float *v6; // eax
  bool v7; // sf
  int v8; // ecx
  float v9; // [esp+1Ch] [ebp-18h]
  float v10; // [esp+20h] [ebp-14h]
  float v11; // [esp+24h] [ebp-10h]
  float v12; // [esp+28h] [ebp-Ch] BYREF
  float v13; // [esp+2Ch] [ebp-8h]
  float v14; // [esp+30h] [ebp-4h]
  int savedregs; // [esp+34h] [ebp+0h] BYREF

  v2 = 0;
  if ( (int)this[321] > 0 )
  {
    v3 = 0;
    do
    {
      v4 = this[318];
      v12 = *(float *)(v4 + v3);
      v13 = *(float *)(v4 + v3 + 4);
      v14 = *(float *)(v4 + v3 + 8);
      v5 = sub_101422C0();
      v9 = v12 - *v5;
      v10 = v13 - v5[1];
      v11 = v14 - v5[2];
      v6 = sub_101422E0();
      if ( v6[1] * v10 + *v6 * v9 + v6[2] * v11 > 1.0 )
        sub_100A6930((int)&savedregs, &v12, flt_103E8BF8, dword_103E8C30, SLODWORD(flt_103E8BFC), flt_103E8C00);
      ++v2;
      v3 += 12;
    }
    while ( v2 < this[321] );
  }
  v7 = (int)this[320] < 0;
  this[321] = 0;
  if ( v7 )
  {
    this[322] = this[318];
  }
  else
  {
    if ( this[318] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[318]);
      this[318] = 0;
    }
    v8 = this[318];
    this[319] = 0;
    this[322] = v8;
  }
}
