void __thiscall sub_102125C0(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  double v11; // st7
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  v6 = a4;
  v13 = this;
  if ( a4 )
  {
    while ( 1 )
    {
      v8 = this[12];
      v9 = this[11];
      v10 = a2[1655];
      a2[1655] = v10 + 1;
      --v6;
      v11 = (double)(v9 + (int)((double)(v8 - v9 + 1) * flt_103EE7C0[((_WORD)v10 + (unsigned __int16)a2[1656]) & 0xFFF]));
      v12 = (a3 & 3) + a2[1594] * (a3 / 4);
      ++a3;
      *(float *)(a2[1530] + 4 * v12) = v11;
      if ( !v6 )
        break;
      this = v13;
    }
  }
}
