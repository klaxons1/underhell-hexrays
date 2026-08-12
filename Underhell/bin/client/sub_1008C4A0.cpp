__int16 __thiscall sub_1008C4A0(int *this, int a2)
{
  int v3; // eax
  int v4; // edi

  if ( (dword_1042BFFC & 1) == 0 )
  {
    dword_1042BFFC |= 1u;
    dword_1042BFF8 = -1;
  }
  v3 = 257;
  if ( *(_BYTE *)(a2 + 80) && *(_DWORD *)(dword_1042C2A4 + 48) )
    v3 = 273;
  v4 = (unsigned __int16)sub_1008C300(this, dword_1042BFF8, v3);
  (*(void (__thiscall **)(int *, int, int))(*this + 76))(this, v4, a2);
  (*(void (__thiscall **)(int *, int, int))(*this + 84))(this, v4, 1);
  return v4;
}
