void __thiscall sub_100E1510(int *this, __int16 a2, __int16 a3)
{
  int v4; // esi

  if ( this[4292] < 2048 )
  {
    v4 = this[4289] + 16 * sub_100E0F70(this + 4289);
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    *(_WORD *)(v4 + 12) = 0;
    *(_BYTE *)(v4 + 14) = 0;
    *(_DWORD *)v4 = 0;
    (*(void (__thiscall **)(int *, int))(*(this - 51) + 124))(this - 51, 1);
    *(_BYTE *)(v4 + 10) = 1;
    *(_WORD *)(v4 + 4) = a2;
    *(_WORD *)(v4 + 6) = a3;
  }
}
