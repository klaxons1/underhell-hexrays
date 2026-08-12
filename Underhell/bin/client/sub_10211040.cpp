void __thiscall sub_10211040(float *this, int a2, int a3, int a4, int a5, int a6)
{
  int i; // ebp
  int v10; // eax
  long double v11; // st7
  int v12; // edx
  int v13; // eax
  int v14; // edx
  float v15; // [esp+Ch] [ebp+4h]
  float *v16; // [esp+10h] [ebp+8h]
  float v17; // [esp+14h] [ebp+Ch]

  for ( i = a4; i; *v16 = v15 + (v17 - v15) * pow(flt_103EE7C0[v14], v11) + this[16] )
  {
    --i;
    v10 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 120))(this);
    v15 = this[14];
    v17 = this[15];
    v11 = this[17];
    v12 = *(_DWORD *)(a2 + 4 * v10 + 6068) + 4 * ((a3 & 3) + *(_DWORD *)(a2 + 4 * v10 + 6324) * (a3 / 4));
    v13 = *(_DWORD *)(a2 + 6620);
    v16 = (float *)v12;
    v14 = ((_WORD)v13 + (unsigned __int16)*(_DWORD *)(a2 + 6624)) & 0xFFF;
    *(_DWORD *)(a2 + 6620) = v13 + 1;
    ++a3;
  }
}
