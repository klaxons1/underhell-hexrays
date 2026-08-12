void __thiscall sub_100E1580(int *this, char a2, char a3, char a4, char a5, __int16 a6)
{
  int v7; // esi

  if ( this[4292] < 2048 )
  {
    v7 = this[4289] + 16 * sub_100E0F70(this + 4289);
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)(v7 + 8) = 0;
    *(_WORD *)(v7 + 12) = 0;
    *(_BYTE *)(v7 + 14) = 0;
    *(_DWORD *)v7 = 0;
    (*(void (__thiscall **)(int *, int))(*(this - 51) + 124))(this - 51, 1);
    *(_BYTE *)(v7 + 11) = a2;
    *(_BYTE *)(v7 + 12) = a3;
    *(_BYTE *)(v7 + 10) = 2;
    *(_BYTE *)(v7 + 13) = a4;
    *(_BYTE *)(v7 + 14) = a5;
    *(_WORD *)(v7 + 8) = a6;
  }
}
