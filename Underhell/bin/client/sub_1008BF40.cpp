__int16 __thiscall sub_1008BF40(int *this, int a2, int a3)
{
  int v3; // edi
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // eax
  __int16 v7; // dx
  int i; // ecx

  v3 = a2;
  if ( a2 >= 16 )
  {
    if ( a2 > 256 )
      v3 = 256;
  }
  else
  {
    v3 = 16;
  }
  v4 = this + 1;
  v5 = (unsigned __int16)sub_100849E0(this + 1, 0);
  sub_1022D780(0xFFFF, v5);
  v6 = 10 * v5;
  *(_WORD *)(v6 + *v4) = -1;
  v7 = 0;
  *(_WORD *)(*v4 + v6 + 2) = v3;
  for ( i = 1; i < v3; ++v7 )
    i *= 2;
  *(_WORD *)(*v4 + v6 + 4) = v7;
  return v5;
}
