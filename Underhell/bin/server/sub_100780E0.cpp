char __thiscall sub_100780E0(int this, int a2)
{
  int v3; // eax
  char v4; // bl
  int v5; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF
  unsigned __int8 v8; // [esp+18h] [ebp+8h]

  v7 = a2;
  LOBYTE(v3) = sub_10076390((_BYTE *)this, (int)&v7);
  v4 = v3;
  v8 = v3;
  if ( (_BYTE)v3 != 0xFF )
  {
    v5 = 12 * (unsigned __int8)v3;
    sub_10184660(*(_DWORD *)(*(_DWORD *)(this + 4) + v5 + 8));
    sub_10076F90(this, v8);
    *(_BYTE *)(v5 + *(_DWORD *)(this + 4)) = v4;
    v3 = *(_DWORD *)(this + 4);
    *(_BYTE *)(v3 + v5 + 1) = *(_BYTE *)(this + 18);
    --*(_BYTE *)(this + 17);
    *(_BYTE *)(this + 18) = v4;
  }
  return v3;
}
