void __thiscall sub_10037E30(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  float v5[3]; // [esp+4h] [ebp-18h] BYREF
  float v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = this[81];
  if ( v2 == -1 || (v3 = (int *)((char *)off_103DCD74 + 16 * (this[81] & 0xFFF) + 4), v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  (*(void (__thiscall **)(_DWORD *, int, float *, float *))(*this + 336))(this, v4, v6, v5);
  sub_10037BA0((int)this, v6);
  sub_10037CA0((int)this, v5);
}
