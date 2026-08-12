unsigned __int8 __thiscall sub_10083EB0(int this, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned __int8 result; // al
  float v7; // [esp+2Ch] [ebp-8h]
  float v8; // [esp+30h] [ebp-4h]
  float v9; // [esp+3Ch] [ebp+8h]

  v7 = (double)a2 * 0.0039215689;
  v8 = (double)a3 * 0.0039215689;
  v9 = 0.0039215689 * (double)a4;
  (*(void (__thiscall **)(_DWORD, float, float, float))(**(_DWORD **)(this + 20) + 112))(
    *(_DWORD *)(this + 20),
    COERCE_FLOAT(LODWORD(v7)),
    COERCE_FLOAT(LODWORD(v8)),
    COERCE_FLOAT(LODWORD(v9)));
  if ( *(_BYTE *)(this + 208) )
  {
    (*(void (__thiscall **)(_DWORD, float, float, float))(**(_DWORD **)(this + 24) + 112))(
      *(_DWORD *)(this + 24),
      COERCE_FLOAT(LODWORD(v7)),
      COERCE_FLOAT(LODWORD(v8)),
      COERCE_FLOAT(LODWORD(v9)));
    (*(void (__thiscall **)(_DWORD, float, float, float))(**(_DWORD **)(this + 28) + 112))(
      *(_DWORD *)(this + 28),
      COERCE_FLOAT(LODWORD(v7)),
      COERCE_FLOAT(LODWORD(v8)),
      COERCE_FLOAT(LODWORD(v9)));
  }
  result = a3;
  *(_BYTE *)(this + 16) = a2;
  *(_BYTE *)(this + 17) = a3;
  *(_BYTE *)(this + 18) = a4;
  return result;
}
