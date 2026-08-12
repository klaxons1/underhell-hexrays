void __thiscall sub_1010E8E0(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  _DWORD *v7; // edi
  _DWORD *v8; // ebx

  v6 = 0;
  v7 = this + 1;
  if ( this[1] > 0 )
  {
    v8 = this + 148;
    do
    {
      if ( (unsigned __int8)sub_10114AE0(v7, a6, v6) )
        *(_BYTE *)(a5 + *v8) = 1;
      ++v6;
      ++v8;
    }
    while ( v6 < *v7 );
  }
}
