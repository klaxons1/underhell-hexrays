void __thiscall sub_1008CA90(int this, int a2, int a3)
{
  int v3; // edi
  float v5[3]; // [esp+Ch] [ebp-18h] BYREF
  float v6[3]; // [esp+18h] [ebp-Ch] BYREF
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v3 = 168 * (unsigned __int16)a3;
  if ( (*(_BYTE *)(*(_DWORD *)(this + 36) + v3 + 8) & 1) != 0 )
  {
    sub_1008BA10((_DWORD *)this, a3);
  }
  else
  {
    sub_10085470(this, a2, v5, v6);
    if ( (_WORD)a3 != 0xFFFF && (*(_WORD *)(*(_DWORD *)(this + 36) + v3 + 8) & 4) != 0 && *(_BYTE *)(this + 208) != 0 )
      sub_1008B350((_DWORD *)this, (int)&savedregs, v3, this, a2, a3, v5, v6);
    else
      sub_1008C580((_DWORD *)this, a2, a3, v5, v6);
  }
}
