char __thiscall sub_10266570(int this, unsigned __int8 a2, unsigned __int8 a3)
{
  int v4; // edi
  int v5; // ecx
  int v6; // eax

  sub_10265F70((int *)this, a3);
  v4 = *(_DWORD *)this;
  v5 = *(_DWORD *)this + 72 * a3;
  *(_BYTE *)(v5 + 69) = a2;
  if ( a2 == 0xFF )
  {
    LOBYTE(v6) = *(_BYTE *)(this + 13);
    *(_BYTE *)(this + 13) = a3;
  }
  else
  {
    LOBYTE(v6) = *(_BYTE *)(v4 + 72 * a2 + 68);
    *(_BYTE *)(v4 + 72 * a2 + 68) = a3;
  }
  *(_BYTE *)(v5 + 68) = v6;
  if ( (_BYTE)v6 == 0xFF )
  {
    ++*(_BYTE *)(this + 15);
    *(_BYTE *)(this + 12) = a3;
  }
  else
  {
    v6 = 9 * (unsigned __int8)v6;
    *(_BYTE *)(v4 + 8 * v6 + 69) = a3;
    ++*(_BYTE *)(this + 15);
  }
  return v6;
}
