int __thiscall sub_100E1600(int *this, int a2)
{
  int result; // eax
  int v4; // esi

  result = a2;
  this[4287] = a2;
  if ( this[4292] < 2048 )
  {
    v4 = this[4289] + 16 * sub_100E0F70(this + 4289);
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    *(_WORD *)(v4 + 12) = 0;
    *(_BYTE *)(v4 + 14) = 0;
    *(_DWORD *)v4 = 0;
    result = (*(int (__thiscall **)(int *, int))(*(this - 51) + 124))(this - 51, 1);
    *(_BYTE *)(v4 + 10) = 3;
    *(_DWORD *)v4 = this[4287];
  }
  return result;
}
