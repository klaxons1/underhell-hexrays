char __thiscall sub_100301E0(_DWORD *this, int a2, int a3, float a4, _DWORD *a5)
{
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  _BYTE v12[28]; // [esp+18h] [ebp-20h] BYREF
  _DWORD *v13; // [esp+34h] [ebp-4h]

  if ( (*(_BYTE *)(a2 + 56) & 1) != 0 && a4 > (double)*(float *)(a2 + 40)
    || a4 > sub_100737B0(this[419]) * 0.25 + *(float *)(a2 + 40) )
  {
    return 0;
  }
  v7 = this[641];
  v13 = this + 641;
  if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (v7 & 0xFFF) + 1];
  if ( a3 == v8 )
  {
    if ( sub_10022FB0((_DWORD *)a3, (int)this) )
    {
      *(float *)(a2 + 40) = a4;
      *a5 = 0;
      return 1;
    }
    this[641] = -1;
  }
  if ( ((*(int (__thiscall **)(_DWORD *))(*this + 1672))(this) & 0xC00) == 0 )
    return 0;
  if ( *(_BYTE *)(a3 + 1720) )
    return 0;
  v9 = *(_DWORD *)(a3 + 1672);
  if ( v9 )
  {
    if ( v9 != 3 )
      return 0;
  }
  (*(void (__thiscall **)(int, _DWORD *, _BYTE *))(*(_DWORD *)a3 + 864))(a3, this, v12);
  v10 = (*(int (__stdcall **)(_DWORD *, _BYTE *, _DWORD, int, int, int, _DWORD))(*(_DWORD *)this[649] + 20))(
          this + 179,
          v12,
          0,
          48,
          -1,
          65,
          0.0);
  v11 = v10;
  if ( !v10 )
    return 0;
  sub_10019680((_DWORD *)(v10 + 28), a3);
  sub_100A5F20(v11);
  sub_10019680(v13, a3);
  *(float *)(a2 + 40) = a4;
  *a5 = 1;
  return 1;
}
