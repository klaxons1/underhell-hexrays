int __thiscall sub_1005D820(int this, int a2)
{
  char v3; // al
  char v4; // al

  sub_10038850((_DWORD *)this, a2);
  if ( (dword_1040D8E0 & 1) == 0 )
  {
    dword_1040D8E0 |= 1u;
    dword_1040D8DC = 0;
  }
  if ( !*(_BYTE *)(this + 1220)
    || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 8) + 32))(this + 8), byte_1040D8C8 = 1, v3) )
  {
    byte_1040D8C8 = 0;
  }
  flt_1040D8CC = *(float *)(this + 1192);
  byte_1040D8D0 = *(_BYTE *)(this + 1200);
  flt_1040D8D4 = *(float *)(this + 1208);
  flt_1040D8D8 = *(float *)(this + 1212);
  v4 = *(_BYTE *)(this + 1203);
  LOWORD(dword_1040D8DC) = *(_WORD *)(this + 1201);
  BYTE2(dword_1040D8DC) = v4;
  HIBYTE(dword_1040D8DC) = -1;
  return sub_1022ACE0("monitor", (int)&byte_1040D8C8);
}
